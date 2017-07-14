using MaterialSkin.Controls;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Wininit
{
    public static class QQSetting
    {
        public static bool InfiniteAmmo { get; internal set; }
        public static bool NoRecoil     { get; internal set; }
        public static bool NoSpread     { get; internal set; }
        public static bool MagicBullets { get; internal set; }
        public static bool MassTeleport { get; internal set; }
        public static bool Flying       { get; internal set; }
        public static bool RadarESP     { get; internal set; }
        public static bool DistanceESP  { get; internal set; }
        public static bool LineESP      { get; internal set; }
        public static bool Debug { get; internal set; }
        public static bool Aimbot       { get; internal set; }
        public static bool LogIDs       { get; internal set; }
        public static bool VehicleESP   { get; internal set; }
        public static bool LootESP      { get; internal set; }
        public static bool Visuals      { get; internal set; }
        public static bool BoxESP       { get; internal set; }
        public static bool BoneESP      { get; internal set; }
        public static bool InstantHit   { get; internal set; }
        public static bool FullAuto     { get; internal set; }
        public static bool NoMuzzle     { get; internal set; }
        public static bool NoSway       { get; internal set; }
    }

    public class QQChat
    {
        public static void Update()
        {
            G.pUWorld = M.Read<IntPtr>(G.ppUWorld);
            // FIX EMPTY ENTITY LIST
            var tempworld = M.Read<UWorld>(G.pUWorld);
            var tempOwningGameInstance = M.Read<UGameInstance>(tempworld.pOwningGameInstance);
            // END FIX 

            G.UWorld = M.Read<UWorld>(/*G.pUWorld*/tempOwningGameInstance.LocalPlayer.ViewportClient.pUWorld);
            G.ULevel = M.Read<ULevel>(G.UWorld.pPersistentLevel);
            G.OwningGameInstance = M.Read<UGameInstance>(G.UWorld.pOwningGameInstance);
            QQctor.g_pLocalPlayer = G.OwningGameInstance.LocalPlayer.PlayerController.pLocalPlayer;
        }

        

        public static void EntityLoop()
        {
            
            while (true)
            {
                //Dictionary<string, string> ActorList = new Dictionary<string, string>();
                List<QQctor> PlayerList = new List<QQctor>();
                List<QQctor> VehicleList = new List<QQctor>();
                List<QQctor> EntityList = new List<QQctor>();
                ULevel Ulev = G.ULevel;
                for (int nIndex = 0; nIndex < Ulev.AActors.Count; nIndex++)
                {

                    //Console.WriteLine("one G.ULevel.AActors found");
                    QQctor Actor = Ulev.AActors.ReadValue(nIndex, true);
                    //Console.WriteLine(Actor.Id.ToString());
                    Actor.BasePointer = M.Read<IntPtr>(Ulev.AActors[nIndex]);
                    if (Actor.BasePointer == IntPtr.Zero)
                    {
                        //Console.WriteLine("Actor.BasePointer = zero");
                        continue;
                    }
                        
                    //if (!ActorList.ContainsKey(Actor.Id.ToString()))
                    //{
                    //    ActorList.Add(Actor.Id.ToString(), G.Names[Actor.Id]);
                    //}                  
                    EntityList.Add(Actor);
                    
                    if (Actor.IsVehicle)
                    {
                        VehicleList.Add(Actor);
                        continue;
                    }

                    if (Actor.BasePointer != QQctor.g_pLocalPlayer )
                    {
                        //Console.WriteLine("Actor not null");
                        if (Actor.IsPlayer )
                        {
                            //Console.WriteLine("Player!!!");
                            if (Actor.IsAlive)
                            {
                                PlayerList.Add(Actor);
                                continue;
                            }
                            
                        }
                       
                    }
                }

                G.Players = PlayerList;
                G.Entities = EntityList;
                G.Vehicles = VehicleList;

                Thread.Sleep(250);
                //string content = "";
                //foreach (KeyValuePair<string, string> kv in ActorList)
                //{
                //    content = $"{content}{kv.Key} : {kv.Value} \r\n";
                //}
                //FileStream fs = new FileStream("Actor.txt", FileMode.Append);
                ////获得字节数组
                //byte[] data = System.Text.Encoding.Default.GetBytes(content);
                ////开始写入
                //fs.Write(data, 0, data.Length);
                ////清空缓冲区、关闭流
                //fs.Flush();
                //fs.Close();
            }
            
        }

        public static void QQloop()
        {
            while (true)
            {
                QQChat.Update();
                QQctor localplayer = QQctor.GetLocalPlayer();

                #region Weapon Mods
                if (QQSetting.InfiniteAmmo || QQSetting.NoRecoil || QQSetting.NoSpread || QQSetting.MagicBullets)
                {
                    AWeaponProcessor WeaponProcessor = localplayer.WeaponProcessor;
                    TArray<ATslWeapon> EquippedWeapons = WeaponProcessor.EquippedWeapons;

                    for (int nItemSlot = 0; nItemSlot < 3; nItemSlot++)
                    {
                        var Weapon = EquippedWeapons.ReadValue(nItemSlot, true);

                        Weapon.BasePointer = M.Read<IntPtr>(EquippedWeapons[nItemSlot]);

                        if (Weapon.BasePointer == IntPtr.Zero)
                            continue;
                        
                        FTrajectoryWeaponData TrajectoryConfig = Weapon.TrajectoryConfig;
                        FWeaponGunData WeaponGunConfig = Weapon.WeaponGunConfig;
                        FWeaponData WeaponConfig = Weapon.WeaponConfig;
                        FRecoilInfo RecoilInfo = Weapon.RecoilInfo;
                        FWeaponGunAnim WeaponGunAnim = Weapon.WeaponGunAnim;
                        FWeaponDeviationData WeaponDeviationConfig = Weapon.WeaponDeviationConfig;

                        if (QQSetting.InfiniteAmmo)
                            Weapon.SetAmmoInClip(999);
                        
                        if (QQSetting.MagicBullets)
                            WeaponGunConfig.TimeBetweenShots = 0.03f;

                        if (QQSetting.FullAuto)
                            Weapon.SetFiringMode(0, EFiringMode.FullAuto);

                        if (QQSetting.NoMuzzle)
                        {
                            WeaponGunAnim.CharacterFire = IntPtr.Zero;
                        }

                        if (QQSetting.NoSway)
                        {
                            WeaponConfig.SwayModifier_Crouch = 0;
                            WeaponConfig.SwayModifier_Movement = 0;
                            WeaponConfig.SwayModifier_Pitch = 0;
                            WeaponConfig.SwayModifier_Prone = 0;
                            WeaponConfig.SwayModifier_Stand = 0;
                            WeaponConfig.SwayModifier_YawOffset = 0;
                        }

                        if (QQSetting.InstantHit)
                        {
                            TrajectoryConfig.InitialSpeed = float.MaxValue;
                            Weapon.SetBulletGravity(0f);
                        }

                        if (QQSetting.NoRecoil)
                        {
                            // TRAJECTORY CONFIG
                            TrajectoryConfig.RecoilPatternScale = 0;
                            TrajectoryConfig.RecoilRecoverySpeed = 0;
                            TrajectoryConfig.RecoilSpeed = 0;

                            // RECOIL INFO
                            RecoilInfo.VerticalRecoilMin = 0;
                            RecoilInfo.VerticalRecoilMax = 0;
                            RecoilInfo.RecoilValue_Climb = 0;
                            RecoilInfo.RecoilValue_Fall = 0;
                            RecoilInfo.RecoilModifier_Stand = 0;
                            RecoilInfo.RecoilModifier_Crouch = 0;
                            RecoilInfo.RecoilModifier_Prone = 0;
                            RecoilInfo.RecoilSpeed_Horizontal = 0;
                            RecoilInfo.RecoilSpeed_Vertical = 0;
                            RecoilInfo.RecoverySpeed_Vertical = 0;
                            RecoilInfo.VerticalRecoveryModifier = 0;

                            // WEAPON GUN ANIM
                            WeaponGunAnim.ShotCameraShake = IntPtr.Zero;
                            WeaponGunAnim.ShotCameraShakeADS = IntPtr.Zero;
                            WeaponGunAnim.ShotCameraShakeIronsight = IntPtr.Zero;
                        }

                        if (QQSetting.NoSpread)
                        {
                            // TRAJECTORY CONFIG
                            TrajectoryConfig.WeaponSpread = 0;
                            TrajectoryConfig.AimingSpreadModifier = 0;
                            TrajectoryConfig.FiringSpreadBase = 0;
                            TrajectoryConfig.ProneRecoveryTime = 0;
                            TrajectoryConfig.ScopingSpreadModifier = 0;
                            
                            // WEAPON GUN CONFIG
                            WeaponGunConfig.FiringBulletsSpread = 0;

                            // WEAPON DEVIATION CONFIG
                            WeaponDeviationConfig.DeviationBase = 0;
                            WeaponDeviationConfig.DeviationBaseADS = 0;
                            WeaponDeviationConfig.DeviationBaseAim = 0;
                            WeaponDeviationConfig.DeviationMax = 0;
                            WeaponDeviationConfig.DeviationMaxMove = 0;
                            WeaponDeviationConfig.DeviationMinMove = 0;
                            WeaponDeviationConfig.DeviationMoveMaxReferenceVelocity = 0;
                            WeaponDeviationConfig.DeviationMoveMinReferenceVelocity = 0;
                            WeaponDeviationConfig.DeviationMoveMultiplier = 0;
                            WeaponDeviationConfig.DeviationRecoilGain = 0;
                            WeaponDeviationConfig.DeviationRecoilGainADS = 0;
                            WeaponDeviationConfig.DeviationRecoilGainAim = 0;
                            WeaponDeviationConfig.DeviationStanceCrouch = 0;
                            WeaponDeviationConfig.DeviationStanceJump = 0;
                            WeaponDeviationConfig.DeviationStanceProne = 0;
                            WeaponDeviationConfig.DeviationStanceStand = 0;

                            // ATslWeapon
                            Weapon.SetRecoilSpreadScale(0f);
                            Weapon.SetRunSpread(0f);
                            Weapon.SetWalkSpread(0f);
                            Weapon.SetJumpSpread(0f);
                        }

                        // WRITE WEAPON INFORMATION
                        Weapon.WriteStruct(RecoilInfo);
                        Weapon.WriteStruct(TrajectoryConfig);
                        Weapon.WriteStruct(WeaponGunConfig);
                        Weapon.WriteStruct(WeaponGunAnim);
                        Weapon.WriteStruct(WeaponDeviationConfig);
                    }
                }
                #endregion

                #region Mass TP
                if (QQSetting.MassTeleport)
                {
                    var location = localplayer.RootComponent.RelativeLocation;

                    location.X += 100;
                    location.Y += 100;
                    location.Z += 50;

                    foreach (var player in G.Players.ToList())
                        if ((location - player.Location).Length <= 10000)
                            USceneComponent.SetLocation(player.pRootComponent, location);
                }
                #endregion

                #region Miscelanneous
                if (QQSetting.Flying)
                    M.Write<byte>((byte)EMovementMode.MOVE_Flying, localplayer.pCharacterMovement + 0x01B4); // MovementMode
                #endregion

                #region Aimbot
                if (QQSetting.Aimbot)
                {
                    //Console.WriteLine("AitBot Entry");
                    var myplayercontroller = G.OwningGameInstance.LocalPlayer.PlayerController;
                    var vecLocalEyeLocation = myplayercontroller.PlayerCameraManager.CameraCache.POV.Location;
                    var angLocalAngles = myplayercontroller.ControlRotation;

                    float flFov = 90f;
                    FRotator flBestAngDelta = new FRotator();

                    bool bFoundTarget = false;

                    foreach (var Player in G.Players.ToList())
                    {
                        var vecTargetCenterOfMass = Player.Location;

                        switch (Player.CharacterMovement.Stance)
                        {
                            case EStanceMode.STANCE_Stand:
                                vecTargetCenterOfMass.Z += 30;
                                break;

                            case EStanceMode.STANCE_Crouch:
                                vecTargetCenterOfMass.Z += 10;
                                break;

                            case EStanceMode.STANCE_Prone:
                                vecTargetCenterOfMass.Z -= 15;
                                break;
                        }


                        var delta = vecTargetCenterOfMass - vecLocalEyeLocation;
                        var angDelta = (delta.ToFRotator() - angLocalAngles).Clamp();

                        if (angDelta.Length <= flFov)
                        {
                            flFov = (float)angDelta.Length;
                            flBestAngDelta = angDelta;
                            bFoundTarget = true;
                        }
                    }

                    // TODO: Keyboard Hook
                    //if (bFoundTarget && (Win32.GetAsyncKeyState(Keys.XButton1) & 0x8000) != 0) // ADD HOLD KEY OR WHATEVER
                    if (bFoundTarget && (Win32.GetAsyncKeyState(Keys.RButton) & 0x8000) != 0) // ADD HOLD KEY OR WHATEVER
                        M.WriteS<FRotator>(angLocalAngles + flBestAngDelta, G.OwningGameInstance.LocalPlayer.pPlayerController + 0x03C0);
                }
                #endregion

                // Increase for speed, decrease for performance
                Thread.Sleep(5);
            }
        }

        private static class Win32
        {
            [DllImport("user32.dll")]
            public static extern short GetAsyncKeyState(System.Windows.Forms.Keys vKey);
        }
    }
}
