using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace Test
{
    

    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //string itemName = listBox1.SelectedItem.ToString();
            //string itemName = checkedListBox1.CheckedItems.IndexOf();
            //label1.Text = itemName;
            //label1.Text = comboBox1.SelectedItem.ToString();

            //string itemName = treeView1.SelectedNode.Text;
            //string itemName = listView1.Items
            //label1.Text = itemName;



        }

        private void berkayToolStripMenuItem_Click(object sender, EventArgs e)
        {
            label1.Text = "Shortcut Key!";
        }

        private void fileToolStripMenuItem_Click(object sender, EventArgs e)
        {
            label1.Text = "F Key!";
        }

        private void monthCalendar1_DateChanged(object sender, DateRangeEventArgs e)
        {
            label1.Text = "Date Changed!";
        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
           // System.Diagnostics.Process.Start(@"C:\");
            System.Diagnostics.Process.Start("http://www.mkt.yildiz.edu.tr");

        }

        private void treeView1_AfterSelect(object sender, TreeViewEventArgs e)
        {

        }

        private void listView1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
