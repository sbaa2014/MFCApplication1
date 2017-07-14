using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Wininit
{
    public class EventTest
    {
        public delegate void SendMessage(object sender, EventArgsTest e);
        public static event SendMessage message;

        public static void SendMessageFunction(object sender, EventArgsTest e)
        {
            if (message != null)
            {
                message(sender, e);
            }
        }
    }


    public class EventArgsTest : EventArgs
    {
        public string Message { get; set; }
    }
}
