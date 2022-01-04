
namespace Test
{
    partial class Form1
    {
        /// <summary>
        ///Gerekli tasarımcı değişkeni.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///Kullanılan tüm kaynakları temizleyin.
        /// </summary>
        ///<param name="disposing">yönetilen kaynaklar dispose edilmeliyse doğru; aksi halde yanlış.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer üretilen kod

        /// <summary>
        /// Tasarımcı desteği için gerekli metot - bu metodun 
        ///içeriğini kod düzenleyici ile değiştirmeyin.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.ListViewItem listViewItem4 = new System.Windows.Forms.ListViewItem("A");
            System.Windows.Forms.ListViewItem listViewItem5 = new System.Windows.Forms.ListViewItem("B");
            System.Windows.Forms.ListViewItem listViewItem6 = new System.Windows.Forms.ListViewItem("C");
            System.Windows.Forms.TreeNode treeNode14 = new System.Windows.Forms.TreeNode("1");
            System.Windows.Forms.TreeNode treeNode15 = new System.Windows.Forms.TreeNode("2");
            System.Windows.Forms.TreeNode treeNode16 = new System.Windows.Forms.TreeNode("Düğüm3");
            System.Windows.Forms.TreeNode treeNode17 = new System.Windows.Forms.TreeNode("Düğüm4");
            System.Windows.Forms.TreeNode treeNode18 = new System.Windows.Forms.TreeNode("A", new System.Windows.Forms.TreeNode[] {
            treeNode14,
            treeNode15,
            treeNode16,
            treeNode17});
            System.Windows.Forms.TreeNode treeNode19 = new System.Windows.Forms.TreeNode("Düğüm6");
            System.Windows.Forms.TreeNode treeNode20 = new System.Windows.Forms.TreeNode("Düğüm7");
            System.Windows.Forms.TreeNode treeNode21 = new System.Windows.Forms.TreeNode("Düğüm5", new System.Windows.Forms.TreeNode[] {
            treeNode19,
            treeNode20});
            System.Windows.Forms.TreeNode treeNode22 = new System.Windows.Forms.TreeNode("Düğüm9");
            System.Windows.Forms.TreeNode treeNode23 = new System.Windows.Forms.TreeNode("Düğüm10");
            System.Windows.Forms.TreeNode treeNode24 = new System.Windows.Forms.TreeNode("Düğüm12");
            System.Windows.Forms.TreeNode treeNode25 = new System.Windows.Forms.TreeNode("Düğüm11", new System.Windows.Forms.TreeNode[] {
            treeNode24});
            System.Windows.Forms.TreeNode treeNode26 = new System.Windows.Forms.TreeNode("Düğüm8", new System.Windows.Forms.TreeNode[] {
            treeNode22,
            treeNode23,
            treeNode25});
            this.button1 = new System.Windows.Forms.Button();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.viewToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.selamToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.berkayToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.berkayToolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.gürkanToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.fileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.label1 = new System.Windows.Forms.Label();
            this.monthCalendar1 = new System.Windows.Forms.MonthCalendar();
            this.dateTimePicker1 = new System.Windows.Forms.DateTimePicker();
            this.linkLabel1 = new System.Windows.Forms.LinkLabel();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.checkedListBox1 = new System.Windows.Forms.CheckedListBox();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.listView1 = new System.Windows.Forms.ListView();
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.treeView1 = new System.Windows.Forms.TreeView();
            this.menuStrip1.SuspendLayout();
            this.tabControl1.SuspendLayout();
            this.tabPage1.SuspendLayout();
            this.tabPage2.SuspendLayout();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(498, 177);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 0;
            this.button1.Text = "button1";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.viewToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(1137, 24);
            this.menuStrip1.TabIndex = 1;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // viewToolStripMenuItem
            // 
            this.viewToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.selamToolStripMenuItem,
            this.berkayToolStripMenuItem,
            this.fileToolStripMenuItem});
            this.viewToolStripMenuItem.Name = "viewToolStripMenuItem";
            this.viewToolStripMenuItem.Size = new System.Drawing.Size(44, 20);
            this.viewToolStripMenuItem.Text = "View";
            // 
            // selamToolStripMenuItem
            // 
            this.selamToolStripMenuItem.Name = "selamToolStripMenuItem";
            this.selamToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.selamToolStripMenuItem.Text = "Selam";
            // 
            // berkayToolStripMenuItem
            // 
            this.berkayToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.berkayToolStripMenuItem1,
            this.gürkanToolStripMenuItem});
            this.berkayToolStripMenuItem.Name = "berkayToolStripMenuItem";
            this.berkayToolStripMenuItem.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.D9)));
            this.berkayToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.berkayToolStripMenuItem.Text = "Berkay";
            this.berkayToolStripMenuItem.Click += new System.EventHandler(this.berkayToolStripMenuItem_Click);
            // 
            // berkayToolStripMenuItem1
            // 
            this.berkayToolStripMenuItem1.Name = "berkayToolStripMenuItem1";
            this.berkayToolStripMenuItem1.Size = new System.Drawing.Size(180, 22);
            this.berkayToolStripMenuItem1.Text = "Berkay";
            // 
            // gürkanToolStripMenuItem
            // 
            this.gürkanToolStripMenuItem.Name = "gürkanToolStripMenuItem";
            this.gürkanToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.gürkanToolStripMenuItem.Text = "Gürkan";
            // 
            // fileToolStripMenuItem
            // 
            this.fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            this.fileToolStripMenuItem.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.F)));
            this.fileToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.fileToolStripMenuItem.Text = "&File";
            this.fileToolStripMenuItem.Click += new System.EventHandler(this.fileToolStripMenuItem_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(391, 95);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(35, 13);
            this.label1.TabIndex = 2;
            this.label1.Text = "label1";
            // 
            // monthCalendar1
            // 
            this.monthCalendar1.Location = new System.Drawing.Point(18, 38);
            this.monthCalendar1.Name = "monthCalendar1";
            this.monthCalendar1.TabIndex = 3;
            this.monthCalendar1.DateChanged += new System.Windows.Forms.DateRangeEventHandler(this.monthCalendar1_DateChanged);
            // 
            // dateTimePicker1
            // 
            this.dateTimePicker1.Location = new System.Drawing.Point(18, 223);
            this.dateTimePicker1.Name = "dateTimePicker1";
            this.dateTimePicker1.Size = new System.Drawing.Size(200, 20);
            this.dateTimePicker1.TabIndex = 4;
            // 
            // linkLabel1
            // 
            this.linkLabel1.AutoSize = true;
            this.linkLabel1.Location = new System.Drawing.Point(28, 271);
            this.linkLabel1.Name = "linkLabel1";
            this.linkLabel1.Size = new System.Drawing.Size(97, 13);
            this.linkLabel1.TabIndex = 5;
            this.linkLabel1.TabStop = true;
            this.linkLabel1.Text = "Click To Access C:";
            this.linkLabel1.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.linkLabel1_LinkClicked);
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled = true;
            this.listBox1.Items.AddRange(new object[] {
            "Seçenek 1",
            "Seçenek 2",
            "Seçenek 3"});
            this.listBox1.Location = new System.Drawing.Point(498, 62);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(120, 95);
            this.listBox1.TabIndex = 6;
            // 
            // checkedListBox1
            // 
            this.checkedListBox1.FormattingEnabled = true;
            this.checkedListBox1.Items.AddRange(new object[] {
            "Option 1",
            "Option 2",
            "Option 3"});
            this.checkedListBox1.Location = new System.Drawing.Point(6, 14);
            this.checkedListBox1.Name = "checkedListBox1";
            this.checkedListBox1.Size = new System.Drawing.Size(120, 94);
            this.checkedListBox1.TabIndex = 7;
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Items.AddRange(new object[] {
            "Seçenek 1",
            "Seçenek 2",
            "Seçenek 3",
            "Seçenek 4"});
            this.comboBox1.Location = new System.Drawing.Point(645, 62);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(121, 21);
            this.comboBox1.TabIndex = 8;
            // 
            // listView1
            // 
            this.listView1.HideSelection = false;
            this.listView1.Items.AddRange(new System.Windows.Forms.ListViewItem[] {
            listViewItem4,
            listViewItem5,
            listViewItem6});
            this.listView1.Location = new System.Drawing.Point(18, 306);
            this.listView1.Name = "listView1";
            this.listView1.Size = new System.Drawing.Size(136, 128);
            this.listView1.TabIndex = 10;
            this.listView1.UseCompatibleStateImageBehavior = false;
            this.listView1.SelectedIndexChanged += new System.EventHandler(this.listView1_SelectedIndexChanged);
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.tabPage1);
            this.tabControl1.Controls.Add(this.tabPage2);
            this.tabControl1.Location = new System.Drawing.Point(186, 306);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(257, 203);
            this.tabControl1.TabIndex = 11;
            // 
            // tabPage1
            // 
            this.tabPage1.Controls.Add(this.checkedListBox1);
            this.tabPage1.Location = new System.Drawing.Point(4, 22);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(249, 177);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "tabPage1";
            this.tabPage1.UseVisualStyleBackColor = true;
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.treeView1);
            this.tabPage2.Location = new System.Drawing.Point(4, 22);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage2.Size = new System.Drawing.Size(249, 177);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "tabPage2";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // treeView1
            // 
            this.treeView1.Location = new System.Drawing.Point(6, 23);
            this.treeView1.Name = "treeView1";
            treeNode14.Name = "Düğüm1";
            treeNode14.Text = "1";
            treeNode15.Name = "Düğüm2";
            treeNode15.Text = "2";
            treeNode16.Name = "Düğüm3";
            treeNode16.Text = "Düğüm3";
            treeNode17.Name = "Düğüm4";
            treeNode17.Text = "Düğüm4";
            treeNode18.Name = "Düğüm0";
            treeNode18.Text = "A";
            treeNode19.Name = "Düğüm6";
            treeNode19.Text = "Düğüm6";
            treeNode20.Name = "Düğüm7";
            treeNode20.Text = "Düğüm7";
            treeNode21.Name = "Düğüm5";
            treeNode21.Text = "Düğüm5";
            treeNode22.Name = "Düğüm9";
            treeNode22.Text = "Düğüm9";
            treeNode23.Name = "Düğüm10";
            treeNode23.Text = "Düğüm10";
            treeNode24.Name = "Düğüm12";
            treeNode24.Text = "Düğüm12";
            treeNode25.Name = "Düğüm11";
            treeNode25.Text = "Düğüm11";
            treeNode26.Name = "Düğüm8";
            treeNode26.Text = "Düğüm8";
            this.treeView1.Nodes.AddRange(new System.Windows.Forms.TreeNode[] {
            treeNode18,
            treeNode21,
            treeNode26});
            this.treeView1.Size = new System.Drawing.Size(154, 128);
            this.treeView1.TabIndex = 10;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1137, 611);
            this.Controls.Add(this.tabControl1);
            this.Controls.Add(this.listView1);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.listBox1);
            this.Controls.Add(this.linkLabel1);
            this.Controls.Add(this.dateTimePicker1);
            this.Controls.Add(this.monthCalendar1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.menuStrip1);
            this.IsMdiContainer = true;
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "Form1";
            this.Text = "Form1";
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.tabControl1.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.tabPage2.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem viewToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem selamToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem berkayToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem berkayToolStripMenuItem1;
        private System.Windows.Forms.ToolStripMenuItem gürkanToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem fileToolStripMenuItem;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.MonthCalendar monthCalendar1;
        private System.Windows.Forms.DateTimePicker dateTimePicker1;
        private System.Windows.Forms.LinkLabel linkLabel1;
        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.CheckedListBox checkedListBox1;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.ListView listView1;
        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.TreeView treeView1;
    }
}

