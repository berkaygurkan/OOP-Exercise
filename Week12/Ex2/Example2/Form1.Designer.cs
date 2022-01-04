
namespace Example1
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
            this.comboBoxDecor = new System.Windows.Forms.ComboBox();
            this.labelIntro = new System.Windows.Forms.Label();
            this.buttonAdd = new System.Windows.Forms.Button();
            this.textBoxAdd = new System.Windows.Forms.TextBox();
            this.labelNumofItems = new System.Windows.Forms.Label();
            this.listBoxDecor = new System.Windows.Forms.ListBox();
            this.SuspendLayout();
            // 
            // comboBoxDecor
            // 
            this.comboBoxDecor.FormattingEnabled = true;
            this.comboBoxDecor.Items.AddRange(new object[] {
            "Curtains",
            "Bedsheets",
            "Pillow",
            "Linen"});
            this.comboBoxDecor.Location = new System.Drawing.Point(187, 58);
            this.comboBoxDecor.Name = "comboBoxDecor";
            this.comboBoxDecor.Size = new System.Drawing.Size(121, 23);
            this.comboBoxDecor.TabIndex = 0;
            this.comboBoxDecor.SelectedIndexChanged += new System.EventHandler(this.comboBoxDecor_SelectedIndexChanged);
            // 
            // labelIntro
            // 
            this.labelIntro.AutoSize = true;
            this.labelIntro.Location = new System.Drawing.Point(23, 9);
            this.labelIntro.Name = "labelIntro";
            this.labelIntro.Size = new System.Drawing.Size(285, 30);
            this.labelIntro.TabIndex = 1;
            this.labelIntro.Text = "Welcome to  Decoration Store !\r\nPlease add new items in order to show in ComboBox" +
    "";
            // 
            // buttonAdd
            // 
            this.buttonAdd.Location = new System.Drawing.Point(23, 92);
            this.buttonAdd.Name = "buttonAdd";
            this.buttonAdd.Size = new System.Drawing.Size(83, 24);
            this.buttonAdd.TabIndex = 2;
            this.buttonAdd.Text = "Add Item";
            this.buttonAdd.UseVisualStyleBackColor = true;
            this.buttonAdd.Click += new System.EventHandler(this.buttonAdd_Click);
            // 
            // textBoxAdd
            // 
            this.textBoxAdd.Location = new System.Drawing.Point(23, 58);
            this.textBoxAdd.Name = "textBoxAdd";
            this.textBoxAdd.Size = new System.Drawing.Size(100, 23);
            this.textBoxAdd.TabIndex = 3;
            // 
            // labelNumofItems
            // 
            this.labelNumofItems.AutoSize = true;
            this.labelNumofItems.Location = new System.Drawing.Point(270, 97);
            this.labelNumofItems.Name = "labelNumofItems";
            this.labelNumofItems.Size = new System.Drawing.Size(0, 15);
            this.labelNumofItems.TabIndex = 4;
            // 
            // listBoxDecor
            // 
            this.listBoxDecor.FormattingEnabled = true;
            this.listBoxDecor.ItemHeight = 15;
            this.listBoxDecor.Location = new System.Drawing.Point(389, 22);
            this.listBoxDecor.Name = "listBoxDecor";
            this.listBoxDecor.Size = new System.Drawing.Size(120, 94);
            this.listBoxDecor.TabIndex = 5;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(542, 158);
            this.Controls.Add(this.listBoxDecor);
            this.Controls.Add(this.labelNumofItems);
            this.Controls.Add(this.textBoxAdd);
            this.Controls.Add(this.buttonAdd);
            this.Controls.Add(this.labelIntro);
            this.Controls.Add(this.comboBoxDecor);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox comboBoxDecor;
        private System.Windows.Forms.Label labelIntro;
        private System.Windows.Forms.Button buttonAdd;
        private System.Windows.Forms.TextBox textBoxAdd;
        private System.Windows.Forms.Label labelNumofItems;
        private System.Windows.Forms.ListBox listBoxDecor;
    }
}

