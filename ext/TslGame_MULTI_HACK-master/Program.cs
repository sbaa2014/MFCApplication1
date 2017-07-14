using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using System.IO;
using System.Text;
using System.Threading;

namespace Wininit
{
    static class Program
    {
        [STAThread]
        [DllExport("Test", CallingConvention = CallingConvention.Winapi)]
        public static int TestExport()
        {
            MessageBox.Show("test ok");
            return 0;
        }
        //[DllExport("Encrypt", CallingConvention = CallingConvention.Winapi)]
        //public static string Encrypt(string plain)
        //{
        //    return aes.Encrypt(plain);
        //}
        [DllExport("QQChat", CallingConvention = CallingConvention.Winapi)]
        public static int Main(string handle)
        {
            //MessageBox.Show(handle);
            String handlestr;
            if (handle!=null && handle != "")
            {
                
                handlestr = aes.Decrypt(handle);
                string[] arr = handlestr.Split(',');
                uint a = Convert.ToUInt32(arr[0], 16);
                uint b = Convert.ToUInt32(arr[1], 16);
                handlestr = (a - b).ToString("x2");
            }
            else
            {
                StreamReader sr = new StreamReader("h.txt", Encoding.Default);
                handlestr = sr.ReadLine();   
            }
            if (Convert.ToUInt32(handlestr, 16) == 0x00)
            {
                MessageBox.Show("error handle");
                Application.ExitThread();
                Application.Exit();
                return 0;
            }
            //MessageBox.Show(handlestr);
            //MessageBox.Show("test");


            //StreamReader sr = new StreamReader("h.txt", Encoding.Default);
            // handlestr = sr.ReadLine();




            //if (Environment.GetCommandLineArgs().Length < 2)
            //{
            //    MessageBox.Show("No handle");
            //    return;
            //    //AppDomain.CurrentDomain.UnhandledException += (object sender, UnhandledExceptionEventArgs e) => MessageBox.Show(e.ExceptionObject.ToString());
            //    //G.hProcess = (IntPtr)7972;

            //}
            //else
            //{
            // pExceptionHandler
            //string handle = aes.Decrypt(Environment.GetCommandLineArgs()[1]);
            AppDomain.CurrentDomain.UnhandledException += (object sender, UnhandledExceptionEventArgs e) => MessageBox.Show(e.ExceptionObject.ToString());

            // Handle from hLeaker
            //G.hProcess = (IntPtr)Convert.ToUInt32(Environment.GetCommandLineArgs()[1]);
            G.hProcess = (IntPtr)Convert.ToUInt32(handlestr, 16);
            //}


            //MessageBox.Show(G.hProcess.ToString());
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Q321sdf());
            return 0;
        }
    }
}
