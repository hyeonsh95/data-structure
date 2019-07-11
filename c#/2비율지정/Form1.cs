using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _20141527P12_1
{
    public partial class MainForm : Form
    {
        SolidBrush myBrush;
        //int nSize;
        int nObject;
        bool bSameRatio = true;
        int nCurHScale = 50;
        int nCurVScale = 50;

        public MainForm()
        {
            InitializeComponent();
        }
 
        private void MainForm_Load(object sender, EventArgs e)
        {
            this.myBrush = new SolidBrush(Color.Red);
           
            nObject = 1;
        }

        private void radioButtonEllipse_CheckedChanged(object sender, EventArgs e)
        {
            nObject = 1;
            Invalidate();
        }

        private void radioButtonRect_CheckedChanged(object sender, EventArgs e)
        {
            nObject = 2;
            Invalidate();
        }

        private void MainForm_Paint(object sender, PaintEventArgs e)
        {
            Bitmap view = new Bitmap(this.pictureBoxView.Size.Width,
                                    this.pictureBoxView.Size.Height);
            Graphics g = Graphics.FromImage(view);
            Rectangle rectView, rectFigure;

            rectView = new Rectangle(0, 0, this.pictureBoxView.Size.Width, this.pictureBoxView.Size.Height);
            Point ptCenter = new Point(this.pictureBoxView.Size.Width / 2, this.pictureBoxView.Size.Height / 2);

            rectFigure = new Rectangle();
            rectFigure.X = ptCenter.X - (int)(rectView.Width / 2 * (float)nCurHScale / 100.0F);
            rectFigure.Y = ptCenter.Y - (int)(rectView.Height / 2 * (float)nCurVScale / 100.0F);
            rectFigure.Width = 2 * (int)(rectView.Width / 2 * (float)nCurHScale / 100.0F);
            rectFigure.Height = 2 * (int)(rectView.Height / 2 * (float)nCurVScale / 100.0F);

            g.Clear(this.pictureBoxView.BackColor);
            switch (nObject)
            {
                case 1:
                    g.FillEllipse(this.myBrush, rectFigure);
                    break;
                case 2:
                    g.FillRectangle(this.myBrush, rectFigure);
                    break;
            }
            this.pictureBoxView.Image = view;

        }

        private void trackBarRed_Scroll(object sender, EventArgs e)
        {
            this.textBoxRed.Text = string.Format("{0}", this.trackBarRed.Value);
            myBrush.Color = Color.FromArgb(this.trackBarRed.Value, this.trackBarGreen.Value, this.trackBarBlue.Value);
            Invalidate();
        }

        private void trackBarGreen_Scroll(object sender, EventArgs e)
        {
            this.textBoxGreen.Text = string.Format("{0}", this.trackBarGreen.Value);
            myBrush.Color = Color.FromArgb(this.trackBarRed.Value, this.trackBarGreen.Value, this.trackBarBlue.Value);
            Invalidate();
        }

        private void trackBarBlue_Scroll(object sender, EventArgs e)
        {
            this.textBoxBlue.Text = string.Format("{0}", this.trackBarBlue.Value);
            myBrush.Color = Color.FromArgb(this.trackBarRed.Value, this.trackBarGreen.Value, this.trackBarBlue.Value);
            Invalidate();
        }


        private void trackBarHorizontal_Scroll(object sender, EventArgs e)
        {
            if (bSameRatio == true)
            {
                this.textBoxVertical.Text = string.Format("{0}", this.trackBarHorizontal.Value);
                nCurVScale = trackBarHorizontal.Value;
                trackBarVertical.Value = trackBarHorizontal.Value;
            }
                      
           this.textBoxHorizontal.Text = string.Format("{0}", this.trackBarHorizontal.Value);
           nCurHScale = trackBarHorizontal.Value;
            
            Invalidate();
        }

        private void trackBarVertical_Scroll(object sender, EventArgs e)
        {
            if (bSameRatio == true)
            {
                this.textBoxHorizontal.Text = string.Format("{0}", this.trackBarVertical.Value);
                nCurHScale = trackBarVertical.Value;
                trackBarHorizontal.Value = trackBarVertical.Value;
            } 
                      
            this.textBoxVertical.Text = string.Format("{0}", this.trackBarVertical.Value);
            nCurVScale = trackBarVertical.Value;
            
            Invalidate();
        }

        private void checkBoxSameRatio_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBoxSameRatio.Checked == true)
            {
                bSameRatio = true;

                if (trackBarHorizontal.Value <= trackBarVertical.Value)
                {
                    this.textBoxHorizontal.Text = string.Format("{0}", this.trackBarVertical.Value);                   
                    this.textBoxVertical.Text = string.Format("{0}", this.trackBarVertical.Value);
                    nCurHScale = trackBarVertical.Value;
                    nCurVScale = trackBarVertical.Value;
                    trackBarHorizontal.Value = trackBarVertical.Value;
                    Invalidate();
                }

                else if (trackBarHorizontal.Value >= trackBarVertical.Value)
                {
                    this.textBoxHorizontal.Text = string.Format("{0}", this.trackBarHorizontal.Value);                
                    this.textBoxVertical.Text = string.Format("{0}", this.trackBarHorizontal.Value);
                    nCurHScale = trackBarHorizontal.Value;
                    nCurVScale = trackBarHorizontal.Value;
                    trackBarVertical.Value = trackBarHorizontal.Value;
                    Invalidate();
                }
            }

            else
                bSameRatio = false;

        }
    }
}
