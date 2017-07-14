using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using AForge.Imaging;
using System.Drawing.Imaging;
using System.Windows.Forms;

namespace Cloud360
{

    class FindPic
    {
        #region 找图
        public System.Drawing.Point FindPicture(string subPic, float matchRate, bool isFindAll = false)
        {
            System.Drawing.Point Rst = new System.Drawing.Point();
            System.Drawing.Bitmap sourceImage = getScreen();
            System.Drawing.Bitmap template = (Bitmap)Bitmap.FromFile(subPic);
            // create template matching algorithm's instance
            // (set similarity threshold to 92.1%)

            ExhaustiveTemplateMatching tm = new ExhaustiveTemplateMatching(matchRate);
            // find all matchings with specified above similarity

            TemplateMatch[] matchings = tm.ProcessImage(sourceImage, template);
            // highlight found matchings

            BitmapData data = sourceImage.LockBits(
                 new Rectangle(0, 0, sourceImage.Width, sourceImage.Height),
                 ImageLockMode.ReadWrite, sourceImage.PixelFormat);
            foreach (TemplateMatch m in matchings)
            {

                Drawing.Rectangle(data, m.Rectangle, Color.White);
                Rst = m.Rectangle.Location;
                //MessageBox.Show(m.Rectangle.Location.ToString());
                // do something else with matching
            }
            sourceImage.UnlockBits(data);
            return Rst;
        }
        #endregion

        public System.Drawing.Bitmap getScreen()
        {
            System.Drawing.Image myImage = new Bitmap(Screen.PrimaryScreen.Bounds.Width, Screen.PrimaryScreen.Bounds.Height);
            Graphics g = Graphics.FromImage(myImage);

            g.CopyFromScreen(new Point(0, 0), new Point(0, 0), new Size(Screen.PrimaryScreen.Bounds.Width, Screen.PrimaryScreen.Bounds.Height));
            IntPtr dc1 = g.GetHdc();
            g.ReleaseHdc(dc1);
            return ConvertToFormat(myImage, PixelFormat.Format24bppRgb);
        }
        public static Bitmap ConvertToFormat(System.Drawing.Image image, PixelFormat format)
        {
            Bitmap copy = new Bitmap(image.Width, image.Height, format);
            using (Graphics gr = Graphics.FromImage(copy))
            {
                gr.DrawImage(image, new Rectangle(0, 0, copy.Width, copy.Height));
            }
            return copy;
        }
    }
}
