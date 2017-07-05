// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the NEW360DLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// NEW360DLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef NEW360DLL_EXPORTS
#define NEW360DLL_API __declspec(dllexport)
#else
#define NEW360DLL_API __declspec(dllimport)
#endif

// This class is exported from the new360dll.dll
class NEW360DLL_API Cnew360dll {
public:
	Cnew360dll(void);
	// TODO: add your methods here.
};

extern NEW360DLL_API int nnew360dll;

NEW360DLL_API int fnnew360dll(void);
