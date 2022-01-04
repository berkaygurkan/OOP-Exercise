
namespace Example3
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.tabControlLink = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.checkedListBoxSelection = new System.Windows.Forms.CheckedListBox();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.textBoxLink6 = new System.Windows.Forms.TextBox();
            this.buttonSub6 = new System.Windows.Forms.Button();
            this.textBoxLink5 = new System.Windows.Forms.TextBox();
            this.buttonSub5 = new System.Windows.Forms.Button();
            this.textBoxLink4 = new System.Windows.Forms.TextBox();
            this.buttonSub4 = new System.Windows.Forms.Button();
            this.textBoxLink3 = new System.Windows.Forms.TextBox();
            this.buttonSub3 = new System.Windows.Forms.Button();
            this.textBoxLink2 = new System.Windows.Forms.TextBox();
            this.buttonSub2 = new System.Windows.Forms.Button();
            this.textBoxLink1 = new System.Windows.Forms.TextBox();
            this.buttonSub1 = new System.Windows.Forms.Button();
            this.tabPage3 = new System.Windows.Forms.TabPage();
            this.linkLabel6 = new System.Windows.Forms.LinkLabel();
            this.linkLabel5 = new System.Windows.Forms.LinkLabel();
            this.linkLabel4 = new System.Windows.Forms.LinkLabel();
            this.linkLabel3 = new System.Windows.Forms.LinkLabel();
            this.linkLabel2 = new System.Windows.Forms.LinkLabel();
            this.linkLabel1 = new System.Windows.Forms.LinkLabel();
            this.tabControlLink.SuspendLayout();
            this.tabPage1.SuspendLayout();
            this.tabPage2.SuspendLayout();
            this.tabPage3.SuspendLayout();
            this.SuspendLayout();
            // 
            // tabControlLink
            // 
            this.tabControlLink.Controls.Add(this.tabPage1);
            this.tabControlLink.Controls.Add(this.tabPage2);
            this.tabControlLink.Controls.Add(this.tabPage3);
            this.tabControlLink.Location = new System.Drawing.Point(-6, 0);
            this.tabControlLink.Name = "tabControlLink";
            this.tabControlLink.SelectedIndex = 0;
            this.tabControlLink.Size = new System.Drawing.Size(446, 314);
            this.tabControlLink.TabIndex = 0;
            // 
            // tabPage1
            // 
            this.tabPage1.Controls.Add(this.checkedListBoxSelection);
            this.tabPage1.Location = new System.Drawing.Point(4, 24);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(438, 286);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "Includes";
            this.tabPage1.UseVisualStyleBackColor = true;
            // 
            // checkedListBoxSelection
            // 
            this.checkedListBoxSelection.FormattingEnabled = true;
            this.checkedListBoxSelection.Items.AddRange(new object[] {
            "Link 1",
            "Link 2",
            "Link 3",
            "Link 4",
            "Link 5",
            "Link 6"});
            this.checkedListBoxSelection.Location = new System.Drawing.Point(3, 6);
            this.checkedListBoxSelection.Name = "checkedListBoxSelection";
            this.checkedListBoxSelection.Size = new System.Drawing.Size(429, 274);
            this.checkedListBoxSelection.TabIndex = 0;
            this.checkedListBoxSelection.ItemCheck += new System.Windows.Forms.ItemCheckEventHandler(this.checkedListBoxSelection_ItemCheck);
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.textBoxLink6);
            this.tabPage2.Controls.Add(this.buttonSub6);
            this.tabPage2.Controls.Add(this.textBoxLink5);
            this.tabPage2.Controls.Add(this.buttonSub5);
            this.tabPage2.Controls.Add(this.textBoxLink4);
            this.tabPage2.Controls.Add(this.buttonSub4);
            this.tabPage2.Controls.Add(this.textBoxLink3);
            this.tabPage2.Controls.Add(this.buttonSub3);
            this.tabPage2.Controls.Add(this.textBoxLink2);
            this.tabPage2.Controls.Add(this.buttonSub2);
            this.tabPage2.Controls.Add(this.textBoxLink1);
            this.tabPage2.Controls.Add(this.buttonSub1);
            this.tabPage2.Location = new System.Drawing.Point(4, 24);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage2.Size = new System.Drawing.Size(438, 286);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "URLs";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // textBoxLink6
            // 
            this.textBoxLink6.Location = new System.Drawing.Point(24, 176);
            this.textBoxLink6.Name = "textBoxLink6";
            this.textBoxLink6.Size = new System.Drawing.Size(216, 23);
            this.textBoxLink6.TabIndex = 11;
            // 
            // buttonSub6
            // 
            this.buttonSub6.Location = new System.Drawing.Point(313, 176);
            this.buttonSub6.Name = "buttonSub6";
            this.buttonSub6.Size = new System.Drawing.Size(75, 23);
            this.buttonSub6.TabIndex = 10;
            this.buttonSub6.Text = "Submit";
            this.buttonSub6.UseVisualStyleBackColor = true;
            // 
            // textBoxLink5
            // 
            this.textBoxLink5.Location = new System.Drawing.Point(24, 147);
            this.textBoxLink5.Name = "textBoxLink5";
            this.textBoxLink5.Size = new System.Drawing.Size(216, 23);
            this.textBoxLink5.TabIndex = 9;
            // 
            // buttonSub5
            // 
            this.buttonSub5.Location = new System.Drawing.Point(313, 147);
            this.buttonSub5.Name = "buttonSub5";
            this.buttonSub5.Size = new System.Drawing.Size(75, 23);
            this.buttonSub5.TabIndex = 8;
            this.buttonSub5.Text = "Submit";
            this.buttonSub5.UseVisualStyleBackColor = true;
            // 
            // textBoxLink4
            // 
            this.textBoxLink4.Location = new System.Drawing.Point(24, 118);
            this.textBoxLink4.Name = "textBoxLink4";
            this.textBoxLink4.Size = new System.Drawing.Size(216, 23);
            this.textBoxLink4.TabIndex = 7;
            // 
            // buttonSub4
            // 
            this.buttonSub4.Location = new System.Drawing.Point(313, 118);
            this.buttonSub4.Name = "buttonSub4";
            this.buttonSub4.Size = new System.Drawing.Size(75, 23);
            this.buttonSub4.TabIndex = 6;
            this.buttonSub4.Text = "Submit";
            this.buttonSub4.UseVisualStyleBackColor = true;
            // 
            // textBoxLink3
            // 
            this.textBoxLink3.Location = new System.Drawing.Point(24, 89);
            this.textBoxLink3.Name = "textBoxLink3";
            this.textBoxLink3.Size = new System.Drawing.Size(216, 23);
            this.textBoxLink3.TabIndex = 5;
            // 
            // buttonSub3
            // 
            this.buttonSub3.Location = new System.Drawing.Point(313, 89);
            this.buttonSub3.Name = "buttonSub3";
            this.buttonSub3.Size = new System.Drawing.Size(75, 23);
            this.buttonSub3.TabIndex = 4;
            this.buttonSub3.Text = "Submit";
            this.buttonSub3.UseVisualStyleBackColor = true;
            // 
            // textBoxLink2
            // 
            this.textBoxLink2.Location = new System.Drawing.Point(24, 60);
            this.textBoxLink2.Name = "textBoxLink2";
            this.textBoxLink2.Size = new System.Drawing.Size(216, 23);
            this.textBoxLink2.TabIndex = 3;
            // 
            // buttonSub2
            // 
            this.buttonSub2.Location = new System.Drawing.Point(313, 60);
            this.buttonSub2.Name = "buttonSub2";
            this.buttonSub2.Size = new System.Drawing.Size(75, 23);
            this.buttonSub2.TabIndex = 2;
            this.buttonSub2.Text = "Submit";
            this.buttonSub2.UseVisualStyleBackColor = true;
            // 
            // textBoxLink1
            // 
            this.textBoxLink1.Location = new System.Drawing.Point(24, 31);
            this.textBoxLink1.Name = "textBoxLink1";
            this.textBoxLink1.Size = new System.Drawing.Size(216, 23);
            this.textBoxLink1.TabIndex = 1;
            // 
            // buttonSub1
            // 
            this.buttonSub1.Location = new System.Drawing.Point(313, 31);
            this.buttonSub1.Name = "buttonSub1";
            this.buttonSub1.Size = new System.Drawing.Size(75, 23);
            this.buttonSub1.TabIndex = 0;
            this.buttonSub1.Text = "Submit";
            this.buttonSub1.UseVisualStyleBackColor = true;
            this.buttonSub1.Click += new System.EventHandler(this.buttonSub1_Click);
            // 
            // tabPage3
            // 
            this.tabPage3.Controls.Add(this.linkLabel6);
            this.tabPage3.Controls.Add(this.linkLabel5);
            this.tabPage3.Controls.Add(this.linkLabel4);
            this.tabPage3.Controls.Add(this.linkLabel3);
            this.tabPage3.Controls.Add(this.linkLabel2);
            this.tabPage3.Controls.Add(this.linkLabel1);
            this.tabPage3.Location = new System.Drawing.Point(4, 24);
            this.tabPage3.Name = "tabPage3";
            this.tabPage3.Size = new System.Drawing.Size(438, 286);
            this.tabPage3.TabIndex = 2;
            this.tabPage3.Text = "Links";
            this.tabPage3.UseVisualStyleBackColor = true;
            // 
            // linkLabel6
            // 
            this.linkLabel6.AutoSize = true;
            this.linkLabel6.Location = new System.Drawing.Point(26, 233);
            this.linkLabel6.Name = "linkLabel6";
            this.linkLabel6.Size = new System.Drawing.Size(0, 15);
            this.linkLabel6.TabIndex = 5;
            this.linkLabel6.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.linkLabel6_LinkClicked);
            // 
            // linkLabel5
            // 
            this.linkLabel5.AutoSize = true;
            this.linkLabel5.Location = new System.Drawing.Point(26, 196);
            this.linkLabel5.Name = "linkLabel5";
            this.linkLabel5.Size = new System.Drawing.Size(0, 15);
            this.linkLabel5.TabIndex = 4;
            this.linkLabel5.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.linkLabel5_LinkClicked);
            // 
            // linkLabel4
            // 
            this.linkLabel4.AutoSize = true;
            this.linkLabel4.Location = new System.Drawing.Point(26, 156);
            this.linkLabel4.Name = "linkLabel4";
            this.linkLabel4.Size = new System.Drawing.Size(0, 15);
            this.linkLabel4.TabIndex = 3;
            this.linkLabel4.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.linkLabel4_LinkClicked);
            // 
            // linkLabel3
            // 
            this.linkLabel3.AutoSize = true;
            this.linkLabel3.Location = new System.Drawing.Point(26, 118);
            this.linkLabel3.Name = "linkLabel3";
            this.linkLabel3.Size = new System.Drawing.Size(0, 15);
            this.linkLabel3.TabIndex = 2;
            this.linkLabel3.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.linkLabel3_LinkClicked);
            // 
            // linkLabel2
            // 
            this.linkLabel2.AutoSize = true;
            this.linkLabel2.Location = new System.Drawing.Point(26, 83);
            this.linkLabel2.Name = "linkLabel2";
            this.linkLabel2.Size = new System.Drawing.Size(0, 15);
            this.linkLabel2.TabIndex = 1;
            // 
            // linkLabel1
            // 
            this.linkLabel1.AutoSize = true;
            this.linkLabel1.Location = new System.Drawing.Point(26, 46);
            this.linkLabel1.Name = "linkLabel1";
            this.linkLabel1.Size = new System.Drawing.Size(0, 15);
            this.linkLabel1.TabIndex = 0;
            this.linkLabel1.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.linkLabel1_LinkClicked);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(439, 314);
            this.Controls.Add(this.tabControlLink);
            this.Name = "Form1";
            this.Text = "Form1";
            this.tabControlLink.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.tabPage2.ResumeLayout(false);
            this.tabPage2.PerformLayout();
            this.tabPage3.ResumeLayout(false);
            this.tabPage3.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl tabControlLink;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.CheckedListBox checkedListBoxSelection;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.TextBox textBoxLink6;
        private System.Windows.Forms.Button buttonSub6;
        private System.Windows.Forms.TextBox textBoxLink5;
        private System.Windows.Forms.Button buttonSub5;
        private System.Windows.Forms.TextBox textBoxLink4;
        private System.Windows.Forms.Button buttonSub4;
        private System.Windows.Forms.TextBox textBoxLink3;
        private System.Windows.Forms.Button buttonSub3;
        private System.Windows.Forms.TextBox textBoxLink2;
        private System.Windows.Forms.Button buttonSub2;
        private System.Windows.Forms.TextBox textBoxLink1;
        private System.Windows.Forms.Button buttonSub1;
        private System.Windows.Forms.TabPage tabPage3;
        private System.Windows.Forms.LinkLabel linkLabel6;
        private System.Windows.Forms.LinkLabel linkLabel5;
        private System.Windows.Forms.LinkLabel linkLabel4;
        private System.Windows.Forms.LinkLabel linkLabel3;
        private System.Windows.Forms.LinkLabel linkLabel2;
        private System.Windows.Forms.LinkLabel linkLabel1;
    }
}

