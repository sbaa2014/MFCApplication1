using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Wininit
{
    //public static class Tmp
    //{
    //    public static IntPtr ppUWorld { get; set; }
    //}
    public static class G
    {
        static ReaderWriterLock _rwlock = new ReaderWriterLock();
        public static IntPtr hProcess { get; set; }
        public static QQMM Memory { get; set; }

        public static List<QQctor> Entities { get; set; }
        public static List<QQctor> Vehicles { get; set; }
        public static List<QQctor> Players { get; set; }

        //public static IntPtr pUWorld {

        //    get {
        //        return M.Read<IntPtr>(ppUWorld);
        //    }
        //    set {
        //        pUWorld = value;
        //    }
        //}
        public static ulong GNamesAddress { get; set; }
        public static IntPtr pUWorld { get; set; }
        public static IntPtr ppUWorld { get; set; }
        public static UWorld UWorld { get; set; }
        public static ULevel ULevel { get; set; }
        public static UGameInstance OwningGameInstance { get; set; }

        public static string[] Names { get; set; }
    }
    public static class fucs
    {
        private static bool CheckValidationResult(object sender, X509Certificate certificate, X509Chain chain, SslPolicyErrors errors)
        {
            return true; //总是接受     
        }
        private static string HttpPost(string Url, string postDataStr)
        {
            ServicePointManager.ServerCertificateValidationCallback = new RemoteCertificateValidationCallback(CheckValidationResult);
            HttpWebRequest request = (HttpWebRequest)WebRequest.Create(Url);
            request.Method = "POST";
            request.ContentType = "application/x-www-form-urlencoded";
            request.ContentLength = Encoding.UTF8.GetByteCount(postDataStr);
            //request.CookieContainer = cookie;
            Stream myRequestStream = request.GetRequestStream();
            StreamWriter myStreamWriter = new StreamWriter(myRequestStream, Encoding.GetEncoding("utf-8"));
            myStreamWriter.Write(postDataStr);
            myStreamWriter.Close();

            HttpWebResponse response = (HttpWebResponse)request.GetResponse();

            //response.Cookies = cookie.GetCookies(response.ResponseUri);
            Stream myResponseStream = response.GetResponseStream();
            StreamReader myStreamReader = new StreamReader(myResponseStream, Encoding.GetEncoding("utf-8"));
            string retString = myStreamReader.ReadToEnd();
            myStreamReader.Close();
            myResponseStream.Close();

            return retString;
        }
        public static int randint()
        {
            Random ran = new Random();
            int RandKey = ran.Next(1, 20);
            return RandKey;
        }
        //0等于正常可使用 1等于请更新后使用 2正在维护，无法使用 3无法使用请联系卖家
        public static int getstatus()
        {
            string str = HttpPost("https://reg.xs3c.co/pubg.php", $"num={Const.MemberNo.ToString()}&var={Const.var}");
            return 0;
        }
    }
}
