namespace _20141527P12_1
{
    partial class MainForm
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.tabControl = new System.Windows.Forms.TabControl();
            this.tabPageObject = new System.Windows.Forms.TabPage();
            this.radioButtonRect = new System.Windows.Forms.RadioButton();
            this.radioButtonEllipse = new System.Windows.Forms.RadioButton();
            this.tabPageColor = new System.Windows.Forms.TabPage();
            this.textBoxBlue = new System.Windows.Forms.TextBox();
            this.textBoxGreen = new System.Windows.Forms.TextBox();
            this.trackBarBlue = new System.Windows.Forms.TrackBar();
            this.trackBarGreen = new System.Windows.Forms.TrackBar();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.textBoxRed = new System.Windows.Forms.TextBox();
            this.trackBarRed = new System.Windows.Forms.TrackBar();
            this.label1 = new System.Windows.Forms.Label();
            this.tabPageRate = new System.Windows.Forms.TabPage();
            this.checkBoxSameRatio = new System.Windows.Forms.CheckBox();
            this.textBoxVertical = new System.Windows.Forms.TextBox();
            this.textBoxHorizontal = new System.Windows.Forms.TextBox();
            this.trackBarVertical = new System.Windows.Forms.TrackBar();
            this.trackBarHorizontal = new System.Windows.Forms.TrackBar();
            this.label6 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.pictureBoxView = new System.Windows.Forms.PictureBox();
            this.tabControl.SuspendLayout();
            this.tabPageObject.SuspendLayout();
            this.tabPageColor.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.trackBarBlue)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBarGreen)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBarRed)).BeginInit();
            this.tabPageRate.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.trackBarVertical)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBarHorizontal)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBoxView)).BeginInit();
            this.SuspendLayout();
            // 
            // tabControl
            // 
            this.tabControl.Controls.Add(this.tabPageObject);
            this.tabControl.Controls.Add(this.tabPageColor);
            this.tabControl.Controls.Add(this.tabPageRate);
            this.tabControl.Location = new System.Drawing.Point(393, 64);
            this.tabControl.Name = "tabControl";
            this.tabControl.SelectedIndex = 0;
            this.tabControl.Size = new System.Drawing.Size(277, 360);
            this.tabControl.TabIndex = 5;
            // 
            // tabPageObject
            // 
            this.tabPageObject.BackColor = System.Drawing.SystemColors.Control;
            this.tabPageObject.Controls.Add(this.radioButtonRect);
            this.tabPageObject.Controls.Add(this.radioButtonEllipse);
            this.tabPageObject.Location = new System.Drawing.Point(4, 22);
            this.tabPageObject.Name = "tabPageObject";
            this.tabPageObject.Padding = new System.Windows.Forms.Padding(3);
            this.tabPageObject.Size = new System.Drawing.Size(269, 334);
            this.tabPageObject.TabIndex = 0;
            this.tabPageObject.Text = "도형 선택";
            // 
            // radioButtonRect
            // 
            this.radioButtonRect.AutoSize = true;
            this.radioButtonRect.Location = new System.Drawing.Point(29, 130);
            this.radioButtonRect.Name = "radioButtonRect";
            this.radioButtonRect.Size = new System.Drawing.Size(59, 16);
            this.radioButtonRect.TabIndex = 1;
            this.radioButtonRect.Text = "사각형";
            this.radioButtonRect.UseVisualStyleBackColor = true;
            this.radioButtonRect.CheckedChanged += new System.EventHandler(this.radioButtonRect_CheckedChanged);
            // 
            // radioButtonEllipse
            // 
            this.radioButtonEllipse.AutoSize = true;
            this.radioButtonEllipse.Checked = true;
            this.radioButtonEllipse.Location = new System.Drawing.Point(30, 89);
            this.radioButtonEllipse.Name = "radioButtonEllipse";
            this.radioButtonEllipse.Size = new System.Drawing.Size(35, 16);
            this.radioButtonEllipse.TabIndex = 0;
            this.radioButtonEllipse.TabStop = true;
            this.radioButtonEllipse.Text = "원";
            this.radioButtonEllipse.UseVisualStyleBackColor = true;
            this.radioButtonEllipse.CheckedChanged += new System.EventHandler(this.radioButtonEllipse_CheckedChanged);
            // 
            // tabPageColor
            // 
            this.tabPageColor.BackColor = System.Drawing.SystemColors.Control;
            this.tabPageColor.Controls.Add(this.textBoxBlue);
            this.tabPageColor.Controls.Add(this.textBoxGreen);
            this.tabPageColor.Controls.Add(this.trackBarBlue);
            this.tabPageColor.Controls.Add(this.trackBarGreen);
            this.tabPageColor.Controls.Add(this.label3);
            this.tabPageColor.Controls.Add(this.label2);
            this.tabPageColor.Controls.Add(this.textBoxRed);
            this.tabPageColor.Controls.Add(this.trackBarRed);
            this.tabPageColor.Controls.Add(this.label1);
            this.tabPageColor.Location = new System.Drawing.Point(4, 22);
            this.tabPageColor.Name = "tabPageColor";
            this.tabPageColor.Padding = new System.Windows.Forms.Padding(3);
            this.tabPageColor.Size = new System.Drawing.Size(269, 334);
            this.tabPageColor.TabIndex = 1;
            this.tabPageColor.Text = "색상 선택";
            // 
            // textBoxBlue
            // 
            this.textBoxBlue.Location = new System.Drawing.Point(202, 260);
            this.textBoxBlue.Name = "textBoxBlue";
            this.textBoxBlue.ReadOnly = true;
            this.textBoxBlue.Size = new System.Drawing.Size(41, 21);
            this.textBoxBlue.TabIndex = 7;
            this.textBoxBlue.Text = "0";
            this.textBoxBlue.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // textBoxGreen
            // 
            this.textBoxGreen.Location = new System.Drawing.Point(202, 155);
            this.textBoxGreen.Name = "textBoxGreen";
            this.textBoxGreen.ReadOnly = true;
            this.textBoxGreen.Size = new System.Drawing.Size(41, 21);
            this.textBoxGreen.TabIndex = 6;
            this.textBoxGreen.Text = "0";
            this.textBoxGreen.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // trackBarBlue
            // 
            this.trackBarBlue.Location = new System.Drawing.Point(62, 248);
            this.trackBarBlue.Maximum = 255;
            this.trackBarBlue.Name = "trackBarBlue";
            this.trackBarBlue.Size = new System.Drawing.Size(131, 45);
            this.trackBarBlue.TabIndex = 5;
            this.trackBarBlue.TickStyle = System.Windows.Forms.TickStyle.None;
            this.trackBarBlue.Scroll += new System.EventHandler(this.trackBarBlue_Scroll);
            // 
            // trackBarGreen
            // 
            this.trackBarGreen.Location = new System.Drawing.Point(62, 141);
            this.trackBarGreen.Maximum = 255;
            this.trackBarGreen.Name = "trackBarGreen";
            this.trackBarGreen.Size = new System.Drawing.Size(132, 45);
            this.trackBarGreen.TabIndex = 4;
            this.trackBarGreen.TickStyle = System.Windows.Forms.TickStyle.None;
            this.trackBarGreen.Scroll += new System.EventHandler(this.trackBarGreen_Scroll);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(13, 266);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(29, 12);
            this.label3.TabIndex = 3;
            this.label3.Text = "파랑";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(13, 158);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(29, 12);
            this.label2.TabIndex = 3;
            this.label2.Text = "초록";
            // 
            // textBoxRed
            // 
            this.textBoxRed.Location = new System.Drawing.Point(202, 50);
            this.textBoxRed.Name = "textBoxRed";
            this.textBoxRed.ReadOnly = true;
            this.textBoxRed.Size = new System.Drawing.Size(43, 21);
            this.textBoxRed.TabIndex = 2;
            this.textBoxRed.Text = "255";
            this.textBoxRed.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // trackBarRed
            // 
            this.trackBarRed.Location = new System.Drawing.Point(62, 39);
            this.trackBarRed.Maximum = 255;
            this.trackBarRed.Name = "trackBarRed";
            this.trackBarRed.Size = new System.Drawing.Size(132, 45);
            this.trackBarRed.TabIndex = 1;
            this.trackBarRed.TickStyle = System.Windows.Forms.TickStyle.None;
            this.trackBarRed.Value = 255;
            this.trackBarRed.Scroll += new System.EventHandler(this.trackBarRed_Scroll);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(13, 53);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "빨강";
            // 
            // tabPageRate
            // 
            this.tabPageRate.BackColor = System.Drawing.SystemColors.Control;
            this.tabPageRate.Controls.Add(this.checkBoxSameRatio);
            this.tabPageRate.Controls.Add(this.textBoxVertical);
            this.tabPageRate.Controls.Add(this.textBoxHorizontal);
            this.tabPageRate.Controls.Add(this.trackBarVertical);
            this.tabPageRate.Controls.Add(this.trackBarHorizontal);
            this.tabPageRate.Controls.Add(this.label6);
            this.tabPageRate.Controls.Add(this.label5);
            this.tabPageRate.Location = new System.Drawing.Point(4, 22);
            this.tabPageRate.Name = "tabPageRate";
            this.tabPageRate.Padding = new System.Windows.Forms.Padding(3);
            this.tabPageRate.Size = new System.Drawing.Size(269, 334);
            this.tabPageRate.TabIndex = 2;
            this.tabPageRate.Text = "비율 지정";
            // 
            // checkBoxSameRatio
            // 
            this.checkBoxSameRatio.AutoSize = true;
            this.checkBoxSameRatio.Checked = true;
            this.checkBoxSameRatio.CheckState = System.Windows.Forms.CheckState.Checked;
            this.checkBoxSameRatio.Location = new System.Drawing.Point(29, 278);
            this.checkBoxSameRatio.Name = "checkBoxSameRatio";
            this.checkBoxSameRatio.Size = new System.Drawing.Size(64, 16);
            this.checkBoxSameRatio.TabIndex = 6;
            this.checkBoxSameRatio.Text = "정 비율";
            this.checkBoxSameRatio.UseVisualStyleBackColor = true;
            this.checkBoxSameRatio.CheckedChanged += new System.EventHandler(this.checkBoxSameRatio_CheckedChanged);
            // 
            // textBoxVertical
            // 
            this.textBoxVertical.Location = new System.Drawing.Point(229, 214);
            this.textBoxVertical.Name = "textBoxVertical";
            this.textBoxVertical.ReadOnly = true;
            this.textBoxVertical.Size = new System.Drawing.Size(34, 21);
            this.textBoxVertical.TabIndex = 5;
            this.textBoxVertical.Text = "50";
            this.textBoxVertical.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // textBoxHorizontal
            // 
            this.textBoxHorizontal.Location = new System.Drawing.Point(229, 71);
            this.textBoxHorizontal.Name = "textBoxHorizontal";
            this.textBoxHorizontal.ReadOnly = true;
            this.textBoxHorizontal.Size = new System.Drawing.Size(34, 21);
            this.textBoxHorizontal.TabIndex = 4;
            this.textBoxHorizontal.Text = "50";
            this.textBoxHorizontal.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // trackBarVertical
            // 
            this.trackBarVertical.Location = new System.Drawing.Point(29, 214);
            this.trackBarVertical.Maximum = 100;
            this.trackBarVertical.Name = "trackBarVertical";
            this.trackBarVertical.Size = new System.Drawing.Size(194, 45);
            this.trackBarVertical.TabIndex = 3;
            this.trackBarVertical.TickStyle = System.Windows.Forms.TickStyle.None;
            this.trackBarVertical.Value = 50;
            this.trackBarVertical.Scroll += new System.EventHandler(this.trackBarVertical_Scroll);
            // 
            // trackBarHorizontal
            // 
            this.trackBarHorizontal.Location = new System.Drawing.Point(29, 71);
            this.trackBarHorizontal.Maximum = 100;
            this.trackBarHorizontal.Name = "trackBarHorizontal";
            this.trackBarHorizontal.Size = new System.Drawing.Size(194, 45);
            this.trackBarHorizontal.TabIndex = 2;
            this.trackBarHorizontal.TickStyle = System.Windows.Forms.TickStyle.None;
            this.trackBarHorizontal.Value = 50;
            this.trackBarHorizontal.Scroll += new System.EventHandler(this.trackBarHorizontal_Scroll);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(27, 161);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(79, 12);
            this.label6.TabIndex = 1;
            this.label6.Text = "Vertical Ratio";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(27, 36);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(93, 12);
            this.label5.TabIndex = 0;
            this.label5.Text = "Horizontal Ratio";
            // 
            // pictureBoxView
            // 
            this.pictureBoxView.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.pictureBoxView.Location = new System.Drawing.Point(45, 64);
            this.pictureBoxView.Name = "pictureBoxView";
            this.pictureBoxView.Size = new System.Drawing.Size(325, 360);
            this.pictureBoxView.TabIndex = 4;
            this.pictureBoxView.TabStop = false;
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(720, 600);
            this.Controls.Add(this.tabControl);
            this.Controls.Add(this.pictureBoxView);
            this.Name = "MainForm";
            this.Text = "도형 그리기";
            this.Load += new System.EventHandler(this.MainForm_Load);
            this.Paint += new System.Windows.Forms.PaintEventHandler(this.MainForm_Paint);
            this.tabControl.ResumeLayout(false);
            this.tabPageObject.ResumeLayout(false);
            this.tabPageObject.PerformLayout();
            this.tabPageColor.ResumeLayout(false);
            this.tabPageColor.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.trackBarBlue)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBarGreen)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBarRed)).EndInit();
            this.tabPageRate.ResumeLayout(false);
            this.tabPageRate.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.trackBarVertical)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackBarHorizontal)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBoxView)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.TabControl tabControl;
        private System.Windows.Forms.TabPage tabPageObject;
        private System.Windows.Forms.RadioButton radioButtonRect;
        private System.Windows.Forms.RadioButton radioButtonEllipse;
        private System.Windows.Forms.TabPage tabPageColor;
        private System.Windows.Forms.TextBox textBoxBlue;
        private System.Windows.Forms.TextBox textBoxGreen;
        private System.Windows.Forms.TrackBar trackBarBlue;
        private System.Windows.Forms.TrackBar trackBarGreen;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textBoxRed;
        private System.Windows.Forms.TrackBar trackBarRed;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.PictureBox pictureBoxView;
        private System.Windows.Forms.TabPage tabPageRate;
        private System.Windows.Forms.CheckBox checkBoxSameRatio;
        private System.Windows.Forms.TextBox textBoxVertical;
        private System.Windows.Forms.TextBox textBoxHorizontal;
        private System.Windows.Forms.TrackBar trackBarVertical;
        private System.Windows.Forms.TrackBar trackBarHorizontal;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label5;
    }
}

