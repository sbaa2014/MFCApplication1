using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

using SharpDX;
using SharpDX.DXGI;
using SharpDX.Direct2D1;
using SharpDX.Mathematics.Interop;

using System.Threading;
using System.Runtime.InteropServices;

namespace Wininit
{
    public partial class QQForm : Form
    {
        //int radarX = 0;
        //int radarY = 0;
        private const float miniMapOffsetX = 1631f;
        private const float miniMapOffsetY = 799f;
        private const float miniMapSizeMeters = 400f;
        private const float miniMapSizePixels = 250f;
        public static bool WorldToMiniMapScreen(Vector3 worldLocation, out Vector2 screenLocation)
        {
            var ulocalplayer = G.OwningGameInstance.LocalPlayer;
            var localplayer = QQctor.GetLocalPlayer();
            Vector3 vDelta = (worldLocation - localplayer.Location) / 100;
            vDelta = vDelta / (miniMapSizeMeters / miniMapSizePixels);

            screenLocation = new Vector2(miniMapOffsetX + vDelta.X, miniMapOffsetY + vDelta.Y);
            screenLocation += (miniMapSizePixels / 2);

            if (screenLocation.X > 1631f && screenLocation.Y > 799f)
            {
                return true;
            }
            else
            {
                screenLocation = new Vector2(-999f, -999f);
                return false;
            }
            return true;
        }
        public QQForm()
        {
            InitializeComponent();

            // ANTI BATTLEYE SIG SCAN ;)
            //this.Text = Guid.NewGuid().ToString().Replace("-", "");

            // TRANSPARENCY KEY
            this.BackColor = System.Drawing.Color.Black;

            // SETTINGS
            this.ControlBox = false;
            this.FormBorderStyle = FormBorderStyle.None;
            this.ShowIcon = false;
            this.ShowInTaskbar = false;
            this.TopMost = true;
            this.WindowState = FormWindowState.Maximized;

            // MAKE WINDOW TRANSPARENT
            Win32.SetWindowLong(this.Handle, Win32.GWL_EXSTYLE, (IntPtr)(Win32.GetWindowLong(this.Handle, Win32.GWL_EXSTYLE) ^ Win32.WS_EX_LAYERED ^ Win32.WS_EX_TRANSPARENT));

            // MAKE WINDOW SOLID
            Win32.SetLayeredWindowAttributes(this.Handle, 0, 255, Win32.LWA_ALPHA);

            var targetProperties = new HwndRenderTargetProperties
            {
                Hwnd = this.Handle,
                // PixelSize = new Size2(this.Bounds.Right - this.Bounds.Left, this.Bounds.Bottom - this.Bounds.Top),
                PixelSize = new Size2(1920,1080),
                PresentOptions = PresentOptions.Immediately
            };

            var prop = new RenderTargetProperties(RenderTargetType.Hardware, new PixelFormat(Format.B8G8R8A8_UNorm, SharpDX.Direct2D1.AlphaMode.Premultiplied), 0, 0, RenderTargetUsage.None, FeatureLevel.Level_DEFAULT);

            var d3dFactory = new SharpDX.Direct2D1.Factory();

            var device = new WindowRenderTarget(d3dFactory, prop, targetProperties)
            {
                TextAntialiasMode = TextAntialiasMode.Cleartype,
                AntialiasMode = AntialiasMode.Aliased
            };

            var dxthread = new Thread(() =>
            {
                var brushWhite = new SolidColorBrush(device, RawColorFromColor(Color.White));
                var brushBlack = new SolidColorBrush(device, RawColorFromColor(Color.Black));
                var brushGreen = new SolidColorBrush(device, RawColorFromColor(Color.Green));
                var brushRed = new SolidColorBrush(device, RawColorFromColor(Color.Red));
                var brushPurple = new SolidColorBrush(device, RawColorFromColor(Color.Purple));

                var fontFactory = new SharpDX.DirectWrite.Factory();

                var fontConsolas = new SharpDX.DirectWrite.TextFormat(fontFactory, "Consolas", 15);
                var fontESP = new SharpDX.DirectWrite.TextFormat(fontFactory, "Consolas", 10);
                //开始绘制各种图
                while (true)
                {
                    device.BeginDraw();
                    device.Clear(null);

                    if (QQSetting.Visuals)
                    {
                        var ulocalplayer = G.OwningGameInstance.LocalPlayer;
                        var localplayer = QQctor.GetLocalPlayer();
                        var vecLocalLocation = localplayer.Location;

                        DrawText($"Debug: {QQSetting.Debug}", 50, 50, brushWhite, fontFactory, fontESP, device);

                        //#region RADAR
                        //if ((this.radarX == 0 || this.radarY == 0) && QQSetting.RadarESP)
                        //{
                        //    FindPic fp = new FindPic();
                        //    System.Drawing.Point p1 = fp.FindPicture(@"mapX.bmp", 0.95f);
                        //    System.Drawing.Point p2 = fp.FindPicture(@"mapY.bmp", 0.95f);
                        //    System.Drawing.Point p = new System.Drawing.Point();
                        //    p.X = p1.X;
                        //    p.Y = p2.Y;
                        //    this.radarX = p.X;
                        //    this.radarY = p.Y;
                        //}
                        //int radarSize = 255;
                        //int radarBorder = 1;
                        //Vector2 centerpoint = new Vector2(this.radarX + radarSize / 2, this.radarY + radarSize / 2);

                        //// TODO: INTEGRATE INTO MINIMAP
                        //if (QQSetting.RadarESP && this.radarX > 0)
                        //{


                        //    var radarOuterRectangle = new RawRectangleF(this.radarX, radarY, this.radarX + radarSize, radarY + radarSize);
                        //    var radarRectangle = new RawRectangleF(this.radarX + radarBorder, radarY + radarBorder, this.radarX + radarSize - radarBorder, radarY + radarSize - radarBorder);

                        //    var radarCenterRectangle = new RoundedRectangle()
                        //    {
                        //        RadiusX = 4,
                        //        RadiusY = 4,
                        //        Rect = new RawRectangleF(centerpoint.X, centerpoint.Y, centerpoint.X + 4, centerpoint.Y + 4)
                        //    };

                        //    //device.FillRectangle(radarRectangle, brushBlack);
                        //    device.DrawRectangle(radarRectangle, brushWhite);

                        //    device.FillRoundedRectangle(radarCenterRectangle, brushGreen);

                        //}
                        //#endregion

                        #region DEBUG
                        //QQSetting.LogIDs = true;
                        if (QQSetting.Debug)
                        {
                            foreach (var Actor in G.Entities.ToList())
                            {
                                var vecActorLocation = Actor.Location;
                                var vecRelativePos = vecLocalLocation - vecActorLocation;

                                Vector2 screenlocation;
                                WorldToScreen(vecActorLocation, ulocalplayer.PlayerController.PlayerCameraManager, out screenlocation);

                                DrawText($"[{Actor.Id}] {G.Names[Actor.Id]}", (int)screenlocation.X, (int)screenlocation.Y, brushWhite, fontFactory, fontESP, device);
                            }
                        }
                        #endregion

                        #region VEHICLE ESP
                        if (QQSetting.VehicleESP)
                        {
                            foreach (var Actor in G.Vehicles.ToList())
                            {
                                var vecActorLocation = Actor.Location;
                                var vecRelativePos = vecLocalLocation - vecActorLocation;
                                var lDeltaInMeters = vecRelativePos.Length / 100;

                                Vector2 screenlocation;
                                WorldToScreen(vecActorLocation, ulocalplayer.PlayerController.PlayerCameraManager, out screenlocation);

                                /*
                                 * UAZ: 76152 - 76156 - 76166 - 76165
                                 * Dacia: 75657 - 75653 - 75665 - 75679
                                 * Buggy: 75371 - 75375 - 75379
                                 * Jeep: 76157
                                 * Motorbike: 75820
                                 * Boat: 75301
                                 */

                                string szVehicleName = string.Empty;

                                switch (Actor.Id)
                                {
                                    /*UAZ*/
                                    case 77551:
                                        szVehicleName = "UAZ";
                                        break;

                                    /*Dacia*/
                                    case 76848:
                                        szVehicleName = "Dacia";
                                        break;

                                    /*Buggy*/
                                    case 76493:
                                        szVehicleName = "Buggy";
                                        break;

                                    /*Jeep*/
                                    //case 76157:
                                    //    szVehicleName = "Jeep";
                                    //    break;

                                    /*Boat*/
                                    case 76405:
                                        szVehicleName = "Boat";
                                        break;

                                    /*Motorbike*/
                                    case 77021:
                                        szVehicleName = "Motorbike";
                                        break;
                                }

                                //string szVehicleName = G.Names[Actor.Id].ToString();
                                if (szVehicleName != string.Empty)
                                    DrawText($"[{Actor.Id.ToString()} {szVehicleName}] {(int)lDeltaInMeters}m", (int)screenlocation.X, (int)screenlocation.Y, brushRed, fontFactory, fontESP, device);

                            }
                        }
                        #endregion

                        #region LOOT ESP
                        // Doesnt work
                        if (QQSetting.LootESP)
                        {
                            foreach (var DroppedItemGroup in G.Entities.ToList().Where(x => x.IsDroppedItemGroup))
                            {

                                TArray<pADroppedItem> array = DroppedItemGroup.DroppedItemArray; //O_UDroppedItemInteractionComponent_UItem

                                for (int nIndex = 0; nIndex < array.Count; nIndex++)
                                {
                                    var item = array.ReadValue(nIndex, false);
                                    var actor = M.Read<QQctor>(item.pActor);

                                    //if (actor.IsDroppedItemInteractionComponent)
                                    //{
                                        var vecItemLocation = DroppedItemGroup.RootComponent.RelativeLocation + M.Read<Vector3>(actor.BasePointer + 0x0230);
                                        var pUItem = M.Read<IntPtr>(actor.BasePointer + 0x0220);
                                        string szName = M.Read<FText>(pUItem + 0x0040).fstring.ToString();

                                        Vector2 screenlocation;
                                        WorldToScreen(vecItemLocation, ulocalplayer.PlayerController.PlayerCameraManager, out screenlocation);
                                        DrawText(szName, (int)screenlocation.X, (int)screenlocation.Y, brushWhite, fontFactory, fontESP, device);
                                        //Console.WriteLine($"Drawing {szName}/{G.Names[actor.Id]} at {vecItemLocation}");
                                    //}
                                }
                            }
                        }
                        #endregion

                        #region PlAYER LOOP
                        if (QQSetting.DistanceESP || QQSetting.RadarESP || QQSetting.LineESP)
                        {

                            var vecLocalEyeLocation = localplayer.EyeLocation;
                            var myangles = ulocalplayer.PlayerController.ControlRotation;

                            foreach (var player in G.Players.ToList())
                            {
                                var vecPlayerLocation = player.Location;
                                var vecRelativePos = vecLocalLocation - vecPlayerLocation;//17.7.2：(vecPlayerLocation ulocalplayer PlayerController无误)
                                var lDeltaInMeters = vecRelativePos.Length / 100;
                                #region Line ESP
                                if (QQSetting.LineESP)
                                {
                                    //Console.WriteLine("Line ESP Entry");
                                    Vector2 screenlocation;
                                    WorldToScreen(vecPlayerLocation, ulocalplayer.PlayerController.PlayerCameraManager, out screenlocation);

                                    device.DrawLine(new RawVector2(1920 / 2, 1080), new RawVector2(screenlocation.X, screenlocation.Y), brushWhite);
                                }
                                #endregion

                                #region Distance ESP
                                if (QQSetting.DistanceESP)
                                {
                                    Vector2 screenlocation;
                                    WorldToScreen(vecPlayerLocation, ulocalplayer.PlayerController.PlayerCameraManager, out screenlocation);

                                    DrawText($"[Player] {(int)lDeltaInMeters}m {player.getname().ToString()}", (int)screenlocation.X, (int)screenlocation.Y, brushPurple, fontFactory, fontESP, device);
                                }
                                #endregion

                                #region Radar
                                if (QQSetting.RadarESP)
                                {
                                    //if (lDeltaInMeters <= radarSize / 2 /*DISTANCE FROM CENTER TO EDGE*/)
                                    //{
                                    //    Vector2 screenpos = centerpoint + vecRelativePos.To2D() / 100;

                                    //    var radarPlayerRectangle = new RoundedRectangle()
                                    //    {
                                    //        RadiusX = 4,
                                    //        RadiusY = 4,
                                    //        Rect = new RawRectangleF(screenpos.X, screenpos.Y, screenpos.X + 5, screenpos.Y + 5)
                                    //    };

                                    //    // DRAW ENEMY
                                    //    device.FillRoundedRectangle(radarPlayerRectangle, brushRed);
                                    //}
                                    Vector2 screenLocation;
                                    WorldToMiniMapScreen(vecPlayerLocation, out screenLocation);
                                    var radarPlayerRectangle = new RoundedRectangle()
                                        {
                                            RadiusX = 4,
                                            RadiusY = 4,
                                            Rect = new RawRectangleF(screenLocation.X, screenLocation.Y, screenLocation.X + 5, screenLocation.Y + 5)
                                        };
                                    device.FillRoundedRectangle(radarPlayerRectangle, brushRed);
                                }
                                #endregion
                            }
                        }
                        #endregion
                    }

                    // DRAW END
                    device.EndDraw();

                    Thread.Sleep(1000 / 60);
                }
            })
            {
                IsBackground = true
            };
            dxthread.Start();

            var marg = new Win32.Margins();
            marg.Left = 0;
            marg.Top = 0;
            marg.Right = this.Width;
            marg.Bottom = this.Height;
            Win32.DwmExtendFrameIntoClientArea(this.Handle, ref marg);
        }
        
        public SharpDX.DirectWrite.TextLayout TextLayout(string szText, SharpDX.DirectWrite.Factory factory, SharpDX.DirectWrite.TextFormat font) =>
            new SharpDX.DirectWrite.TextLayout(factory, szText, font, float.MaxValue, float.MaxValue);

        public void DrawText(string szText, int x, int y, SharpDX.Direct2D1.Brush foregroundBroush, SharpDX.DirectWrite.Factory fontFactory, SharpDX.DirectWrite.TextFormat font, WindowRenderTarget device)
        {
            var tempTextLayout = TextLayout(szText, fontFactory, font);
            
            device.DrawTextLayout(new RawVector2(x, y), tempTextLayout, foregroundBroush, DrawTextOptions.NoSnap);
            
            tempTextLayout.Dispose();
        }

        public bool WorldToScreen(Vector3 WorldLocation, APlayerCameraManager CameraManager, out Vector2 Screenlocation)
        {
            Screenlocation = new Vector2(0, 0);

            var POV = CameraManager.CameraCache.POV;
            FRotator Rotation = POV.Rotation;

            Vector3 vAxisX, vAxisY, vAxisZ;
            Rotation.GetAxes(out vAxisX, out vAxisY, out vAxisZ);

            Vector3 vDelta = WorldLocation - POV.Location;
            Vector3 vTransformed = new Vector3(Vector3.DotProduct(vDelta, vAxisY), Vector3.DotProduct(vDelta, vAxisZ), Vector3.DotProduct(vDelta, vAxisX));

            if (vTransformed.Z < 1f)
                vTransformed.Z = 1f;

            float FovAngle = POV.FOV;
            float ScreenCenterX = 1920 / 2;
            float ScreenCenterY = 1080 / 2;

            Screenlocation.X = ScreenCenterX + vTransformed.X * (ScreenCenterX / (float)Math.Tan(FovAngle * (float)Math.PI / 360)) / vTransformed.Z;
            Screenlocation.Y = ScreenCenterY - vTransformed.Y * (ScreenCenterX / (float)Math.Tan(FovAngle * (float)Math.PI / 360)) / vTransformed.Z;
            
            return true;
        }

        // private static Vector2 RotatePoint(Vector2 pointToRotate, Vector2 centerPoint, float angle, bool angleInRadians = false)
        // {
        //     if (!angleInRadians)
        //         angle = (float)(angle * (Math.PI / 180f));
        //     float cosTheta = (float)Math.Cos(angle);
        //     float sinTheta = (float)Math.Sin(angle);
        //     Vector2 returnVec = new Vector2(
        //         cosTheta * (pointToRotate.X - centerPoint.X) - sinTheta * (pointToRotate.Y - centerPoint.Y),
        //         sinTheta * (pointToRotate.X - centerPoint.X) + cosTheta * (pointToRotate.Y - centerPoint.Y)
        //     );
        //     returnVec += centerPoint;
        //     return returnVec;
        // }

        public RawColor4 RawColorFromColor(Color color) => new RawColor4(color.R, color.G, color.B, color.A);//color.ToArgb() >> 16 & 255L, color.ToArgb() >> 8 & 255L, (byte)color.ToArgb() & 255L, color.ToArgb() >> 24 & 255L);


        private static class Win32
        {
            #region Definitions
            public const int GWL_EXSTYLE = -20;

            public const int WS_EX_LAYERED = 0x80000;

            public const int WS_EX_TRANSPARENT = 0x20;

            public const int LWA_ALPHA = 0x2;

            public const int LWA_COLORKEY = 0x1;
            #endregion

            #region Functions
            [DllImport("user32.dll", SetLastError = true)]
            public static extern uint GetWindowLong(IntPtr hWnd, int nIndex);

            [DllImport("user32.dll")]
            public static extern int SetWindowLong(IntPtr hWnd, int nIndex, IntPtr dwNewLong);

            [DllImport("user32.dll")]
            public static extern bool SetLayeredWindowAttributes(IntPtr hwnd, uint crKey, byte bAlpha, uint dwFlags);

            [DllImport("dwmapi.dll")]
            public static extern void DwmExtendFrameIntoClientArea(IntPtr hWnd, ref Margins pMargins);
            #endregion

            #region Structs
            internal struct Margins
            {
                public int Left, Right, Top, Bottom;
            }
            #endregion
        }

        private void OverlayForm_FormClosing(object sender, FormClosingEventArgs e)
        {
            Environment.Exit(0);
        }

        private void QQForm_Load(object sender, EventArgs e)
        {
            //this.Visible = false;
        }
    }
}
