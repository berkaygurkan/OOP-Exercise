using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Diagnostics;


namespace Example3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            linkLabel1.Visible = false;
            linkLabel2.Visible = false;
            linkLabel3.Visible = false;
            linkLabel4.Visible = false;
            linkLabel5.Visible = false;
            linkLabel6.Visible = false;

            linkLabel1.Text = "1";
            linkLabel2.Text = "2";
            linkLabel3.Text = "3";
            linkLabel4.Text = "4";
            linkLabel5.Text = "5";
            linkLabel6.Text = "www.google.com";

         


        }

        private void checkedListBoxSelection_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            // Determine checked or uncheched index.
            int checkedIndex = checkedListBoxSelection.SelectedIndex;

            switch(checkedIndex)
            {
                case 0:
                    linkLabel1.Visible = !linkLabel1.Visible;   // if it is visible make it unvisible and vice versa
                    break;
                case 1:
                    linkLabel2.Visible = !linkLabel2.Visible;   // if it is visible make it unvisible and vice versa
                    break;
                case 2:
                    linkLabel3.Visible = !linkLabel3.Visible;   // if it is visible make it unvisible and vice versa
                    break;
                case 3:
                    linkLabel4.Visible = !linkLabel4.Visible;   // if it is visible make it unvisible and vice versa
                    break;
                case 4:
                    linkLabel5.Visible = !linkLabel5.Visible;   // if it is visible make it unvisible and vice versa
                    break;
                case 5:
                    linkLabel6.Visible = !linkLabel6.Visible;   // if it is visible make it unvisible and vice versa
                    break;
            }

            tabControlLink.SelectedTab = tabPage3;


        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {

            //System.Diagnostics.Process.Start("http://www.google.com");
            //Process.Start("http://www.google.com/");
        }

        private void linkLabel2_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            //System.Diagnostics.Process.Start("http://www.google.com");
            //Process.Start("http://www.google.com/");
        }

        private void linkLabel3_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            //System.Diagnostics.Process.Start("http://www.google.com");
            //Process.Start("http://www.google.com/");
        }

        private void linkLabel4_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            //System.Diagnostics.Process.Start("http://www.google.com");
            //Process.Start("http://www.google.com/");
        }
        private void linkLabel5_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            //System.Diagnostics.Process.Start("http://www.google.com");
            //Process.Start("http://www.google.com/");
        }

        private void linkLabel6_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            //System.Diagnostics.Process.Start("http://www.google.com");
            //Process.Start("http://www.google.com/");
        }

        private void buttonSub1_Click(object sender, EventArgs e)
        {
            linkLabel1.LinkVisited = false;
            linkLabel1.Text = textBoxLink1.Text;
        }
    }
}
