#include "windefs.h"
#include <stdio.h>
#include <stdlib.h>

#include "process.hpp"
#include "dyn_data.hpp"

int main()
{
  try {
    dyn_data::ensure_intel_cpu();
    dyn_data::load_information();

    auto pid = process::find(L"cmd.exe");
    
    if(!pid)
      throw std::runtime_error("Process not running");
    
    // 
    // Open a handle WITHOUT read access, as proof of concept
    // 
    auto handle = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid);
    
    if(!handle)
      throw std::runtime_error("Failed to open process");
    
    // 
    // Attach to the process that contains the handle we 
    // want to elevate (this is the current process on this case)
    // 
	


    if(process::attach(GetCurrentProcessId())) {
//	if (process::attach(pid2)) {
      // 
      // Use CPU-Z to elevate the handle access to PROCESS_ALL_ACCESS
      // 
      if(!process::grant_handle_access(handle, PROCESS_ALL_ACCESS))
        throw std::runtime_error("Failed to set handle access");
    
      process::detach();
    }
    
    // 
    // Use the now elevated handle to perform a query and some reads.
    // You can use this handle for pretty much anything you want from now on. :)
    // 
    ULONG return_len;
    PEB   process_peb;
    PROCESS_BASIC_INFORMATION process_info;
    RTL_USER_PROCESS_PARAMETERS process_parameters;
    WCHAR buffer[512];
    
    if(NtQueryInformationProcess(handle, ProcessBasicInformation, &process_info, sizeof(process_info), &return_len) < 0)
      throw std::runtime_error("NtQueryInformationProcess failed");
    
    if(!ReadProcessMemory(handle, process_info.PebBaseAddress, &process_peb, sizeof(process_peb), nullptr) ||
       !ReadProcessMemory(handle, process_peb.ProcessParameters, &process_parameters, sizeof(process_parameters), nullptr) ||
       !ReadProcessMemory(handle, process_parameters.CommandLine.Buffer, buffer, process_parameters.CommandLine.Length, nullptr))
      throw std::runtime_error("ReadProcessMemory failed");
    
    printf("CommandLine: %ws\n", buffer);
	MessageBox(NULL, buffer, NULL, MB_OK);
    CloseHandle(handle);
  } catch(const unsupported_version& ex) {
    fprintf(stderr, ex.what());
    fprintf(stderr, "\n");
    fprintf(stderr, "Supported (tested) versions are:\n");
    fprintf(stderr, " - Windows 7 SP1  (6.1.7601)\n");
    fprintf(stderr, " - Windows 8      (6.2.9200)\n");
    fprintf(stderr, " - Windows 8.1    (6.3.9600)\n");
    fprintf(stderr, " - Windows 10 TH1 (10.0.10240)\n");
    fprintf(stderr, " - Windows 10 TH2 (10.0.10586)\n");
    fprintf(stderr, " - Windows 10 AU  (10.0.14393)\n");
    fprintf(stderr, " - Windows 10 CU  (10.0.15063)\n");

  } catch(const unsupported_processor& ex) {
    fprintf(stderr, ex.what());
    fprintf(stderr, "\n");
    fprintf(stderr, "HandleMaster currently only supports Intel processors\n");
  } catch(const std::exception& ex) {
    fprintf(stderr, ex.what());
    fprintf(stderr, "\nGetLastError: %X\n", GetLastError());
  }
  
  getc(stdin);
  return 0;
}