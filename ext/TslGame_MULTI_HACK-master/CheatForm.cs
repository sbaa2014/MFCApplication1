using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
using MaterialSkin;
using MaterialSkin.Controls;

namespace Wininit
{
    
    public partial class Q321sdf : MaterialForm
    {
        private bool isHide = false;
        private Thread TEntityLoop;
        private Thread TQQloop;
        private QQForm QQForm;
        public Q321sdf()
        {
            InitializeComponent();
            HotKey.RegisterHotKey(this.Handle, 100, (uint)KeyModifiers.Control, Keys.D1);
            this.isHide = false;
            var materialSkinManager = MaterialSkinManager.Instance;
            materialSkinManager.AddFormToManage(this);
            materialSkinManager.Theme = MaterialSkinManager.Themes.LIGHT;
            materialSkinManager.ColorScheme = new ColorScheme(Primary.BlueGrey800, Primary.BlueGrey900, Primary.BlueGrey500, Accent.LightBlue200, TextShade.WHITE);
        }
        private void QQChatForm_Load(object sender, EventArgs e)
        {
            this.Size = new Size(this.Size.Width + fucs.randint(), this.Size.Height + Wininit.fucs.randint());
            this.label1.Text = Const.MemberNo.ToString();
            //this.Text = Guid.NewGuid().ToString().Replace("-", "") + "";
            // SET UP SIGSCANNER
            Helpers.QQScan SigScan = new Helpers.QQScan(G.hProcess);

            // GET BASE ADDRESS OF GAME PROCESS
            IntPtr[] hMods = new IntPtr[1024];
            var pModules = GCHandle.Alloc(hMods, GCHandleType.Pinned);

            uint size = (uint)IntPtr.Size * 1024;
            uint cbNeeded;
            if (Win32.EnumProcessModules(G.hProcess, pModules.AddrOfPinnedObject(), size, out cbNeeded))
            {
                G.Memory = new QQMM(G.hProcess, hMods[0]); // INITIALISE MEMORY CLASS

                int cb = Marshal.SizeOf(typeof(Win32._MODULEINFO));
                Win32._MODULEINFO modinfo;
                Win32.GetModuleInformation(G.hProcess, hMods[0], out modinfo, cb);
                //Console.WriteLine("GET OFFSETS");
                // GET OFFSETS
                if (SigScan.SelectModule(hMods[0]/*MAIN MODULE*/, modinfo.SizeOfImage))
                {   
                    long lTime = 0;
                    var GWorldAddress = (IntPtr)SigScan.FindPattern("48 8B 1D ? ? ? ? 74 40", out lTime);
                    Console.WriteLine(GWorldAddress.ToString("x2"));
                    var GWorldOffset = M.Read<uint>(GWorldAddress + 3) + 7;
                    Console.WriteLine(GWorldOffset.ToString("x2"));
                    G.ppUWorld = (IntPtr)((ulong)GWorldAddress + GWorldOffset);
                    Console.WriteLine($"ppUWorld = {G.ppUWorld.ToString("x2")}");
                    G.pUWorld = M.Read<IntPtr>(G.ppUWorld);
                    Console.WriteLine($"G.pUWorld = {G.pUWorld.ToString("x2")}");
                    Console.WriteLine($"F o u n d U W or l d at 0x{((ulong)G.ppUWorld - (ulong)hMods[0]).ToString("x2")} - {lTime}ms");

                    G.GNamesAddress = SigScan.FindPattern("48 89 1D ? ? ? ? 48 8B 5C 24 ? 48 83 C4 28 C3 48 8B 5C 24 ? 48 89 05 ? ? ? ? 48 83 C4 28 C3", out lTime);
                    var GNamesOffset = M.Read<uint>((IntPtr)G.GNamesAddress + 3);
                    G.GNamesAddress += GNamesOffset + 7;
                    Console.WriteLine($"Fo u n d GN a mes at 0x{(G.GNamesAddress - (ulong)hMods[0]).ToString("x2")} - {lTime}ms");
                    
                    GNames namearray = M.Read<GNames>((IntPtr)G.GNamesAddress);
                    //Thread.Sleep(1000000);
                    Stopwatch stopwatch = new Stopwatch();
                    stopwatch.Start();
                    G.Names = namearray.GetStaticArray().DumpNames();
                    stopwatch.Stop();
                    
                    Console.WriteLine($"D u mp G Na m es - {stopwatch.ElapsedMilliseconds}ms");
                }
                else
                {
                    MessageBox.Show("GET OFFSETS Failed");
                    Application.Exit();
                }
            }
            else
            {
                MessageBox.Show("SelectModule Failed");
                Application.Exit();
            }

            // NO NASTY MEMORY LEAKS HERE
            pModules.Free();

            this.TEntityLoop = new Thread(QQChat.EntityLoop);
            this.TQQloop = new Thread(QQChat.QQloop);
            this.TEntityLoop.Start();
            this.TQQloop.Start();
            //new Thread(QQChat.EntityLoop).Start();
            //new Thread(QQChat.QQloop).Start();
            // SHOW OVERLAY
            this.QQForm = new QQForm();
            this.QQForm.Show();
            //MessageBox.Show("Form comes");
        }
        #region HideForm
        public enum KeyModifiers : uint
        {
            None = 0,
            Alt = 1,
            Control = 2,
            Shift = 4,
            Windows = 8
        }
        class HotKey
        {
            //如果函数执行成功，返回值不为0。 
            //如果函数执行失败，返回值为0。要得到扩展错误信息，调用GetLastError。 
            [System.Runtime.InteropServices.DllImport("user32.dll")]
            public static extern bool RegisterHotKey(IntPtr hWnd, int id, uint fsModifiers, Keys vk);
            [System.Runtime.InteropServices.DllImport("user32.dll")]
            public static extern bool UnregisterHotKey(IntPtr hWnd, int id);

            //定义了辅助键的名称（将数字转变为字符以便于记忆，也可去除此枚举而直接使用数值） 
            [Flags()]
            public enum KeyModifiers
            {
                None = 0,
                Alt = 1,
                Ctrl = 2,
                Shift = 4,
                WindowsKey = 8
            }
        }
        protected override void WndProc(ref Message m)
        {
            const int WM_HOTKEY = 0x0312;
            //按快捷键   
            switch (m.Msg)
            {
                case WM_HOTKEY:
                    switch (m.WParam.ToInt32())
                    {
                        case 100:
                            if (!this.isHide)
                            {
                                //MessageBox.Show("hide");
                                this.Visible = false;
                                this.Hide();
                                //this.ShowInTaskbar = false;
                                this.isHide = true;

                            }
                            else
                            {
                                //MessageBox.Show("display");
                                this.Visible = true;
                                this.Activate();
                                //this.ShowInTaskbar = false;
                                this.isHide = false;
                            }
                            break;
                    }
                    break;
            }
            base.WndProc(ref m);
        }
        #endregion
        #region Debug
        private void chkDebug_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.Debug = chkDebug.Checked;
        }
        #endregion
        #region Aimbot
        private void chkAimbot_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.Aimbot = chkAimbot.Checked;
        }
        #endregion
        #region Visuals
        private void chkVisualsEnabled_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.Visuals = chkVisualsEnabled.Checked;
        }

        private void chkLineESP_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.LineESP = chkLineESP.Checked;
        }

        private void chkBoxESP_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.BoxESP = chkBoxESP.Checked;
        }

        private void chkDistanceESP_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.DistanceESP = chkDistanceESP.Checked;
        }

        private void chkVehicleESP_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.VehicleESP = chkVehicleESP.Checked;
        }

        private void chkLootESP_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.LootESP = chkLootESP.Checked;
        }

        private void chkBoneESP_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.BoneESP = chkBoneESP.Checked;
        }
        private void chkRadarESP_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.RadarESP = chkRadarESP.Checked;
        }
        #endregion
        #region Weapon Modifications
        private void chkNoRecoil_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.NoRecoil = chkNoRecoil.Checked;
        }

        private void chkNoSpread_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.NoSpread = chkNoSpread.Checked;
        }

        private void chkInfiniteAmmo_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.InfiniteAmmo = chkInfiniteAmmo.Checked;
        }

        private void chkInstantHit_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.InstantHit = chkInstantHit.Checked;
        }

        private void chkFullAuto_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.FullAuto = chkFullAuto.Checked;
        }

        private void chkMagicBullets_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.MagicBullets = chkMagicBullets.Checked;
        }

        private void chkNoMuzzleFlash_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.NoMuzzle = chkNoMuzzleFlash.Checked;
        }

        private void chkNoSway_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.NoSway = chkNoSway.Checked;
        }

        #endregion

        #region Miscellaneous
        private void chkMassTP_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.MassTeleport = chkMassTP.Checked;
        }

        private void chkFlying_CheckedChanged(object sender, EventArgs e)
        {
            QQSetting.Flying = chkFlying.Checked;
        }
        #endregion


        private static class Win32
        {
            [DllImport("user32.dll")]
            public static extern short GetAsyncKeyState(System.Windows.Forms.Keys vKey);
            [DllImport("psapi.dll", CallingConvention = CallingConvention.StdCall, SetLastError = true)]
            public static extern bool EnumProcessModules(IntPtr hProcess, [Out] IntPtr lphModule, uint cb, out uint lpcbNeeded);

            [DllImport("psapi.dll", CallingConvention = CallingConvention.StdCall, SetLastError = true)]
            public static extern bool GetModuleInformation(IntPtr hProcess, IntPtr hModule, out _MODULEINFO lpModInfo, int cb);


            [StructLayout(LayoutKind.Sequential)]
            public struct _MODULEINFO
            {
                public IntPtr lpBaseOfDll;
                public uint SizeOfImage;
                public IntPtr EntryPoint;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //this.Text = Guid.NewGuid().ToString().Replace("-", "");
            //// SET UP SIGSCANNER
            //Helpers.QQScan SigScan = new Helpers.QQScan(G.hProcess);

            //// GET BASE ADDRESS OF GAME PROCESS
            //IntPtr[] hMods = new IntPtr[1024];
            //var pModules = GCHandle.Alloc(hMods, GCHandleType.Pinned);

            //uint size = (uint)IntPtr.Size * 1024;
            //uint cbNeeded;
            //if (Win32.EnumProcessModules(G.hProcess, pModules.AddrOfPinnedObject(), size, out cbNeeded))
            //{
            //    //G.Memory = new QQMM(G.hProcess, hMods[0]); // INITIALISE MEMORY CLASS

            //    int cb = Marshal.SizeOf(typeof(Win32._MODULEINFO));
            //    Win32._MODULEINFO modinfo;
            //    Win32.GetModuleInformation(G.hProcess, hMods[0], out modinfo, cb);
            //    //Console.WriteLine("GET OFFSETS");
            //    // GET OFFSETS
            //    if (SigScan.SelectModule(hMods[0]/*MAIN MODULE*/, modinfo.SizeOfImage))
            //    {
            //        long lTime = 0;
            //        var GWorldAddress = (IntPtr)SigScan.FindPattern("48 8B 1D ? ? ? ? 74 40", out lTime);
            //        Console.WriteLine(GWorldAddress.ToString("x2"));
            //        var GWorldOffset = M.Read<uint>(GWorldAddress + 3) + 7;
            //        Console.WriteLine(GWorldOffset.ToString("x2"));
            //        var ppUWorld = (IntPtr)((ulong)GWorldAddress + GWorldOffset);
            //        G.pUWorld = M.Read<IntPtr>(ppUWorld);
            //    }
            //    else
            //    {
            //        MessageBox.Show("GET OFFSETS Failed");
            //        //Application.Exit();
            //    }
            //}

            GNames namearray = M.Read<GNames>((IntPtr)G.GNamesAddress);
            G.Names = namearray.GetStaticArray().DumpNames();
            G.pUWorld = M.Read<IntPtr>(G.ppUWorld);
            //Thread.Sleep(2000);
            Console.WriteLine("get G.pUWorld done");
            var tempworld = M.Read<UWorld>(G.pUWorld);
            var tempOwningGameInstance = M.Read<UGameInstance>(tempworld.pOwningGameInstance);
            // END FIX 

            G.UWorld = M.Read<UWorld>(/*G.pUWorld*/tempOwningGameInstance.LocalPlayer.ViewportClient.pUWorld);
            G.ULevel = M.Read<ULevel>(G.UWorld.pPersistentLevel);
            G.OwningGameInstance = M.Read<UGameInstance>(G.UWorld.pOwningGameInstance);
            QQctor.g_pLocalPlayer = G.OwningGameInstance.LocalPlayer.PlayerController.pLocalPlayer;
            //this.TEntityLoop.Resume();
            //this.TQQloop.Resume();
            MessageBox.Show("done");
        }

    }
}
