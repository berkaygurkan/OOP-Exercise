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
    public partial class Test : Form
    {
        public Test()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //Button b = (Button)sender;
            //string sname = b.Name;

            //MouseEventArgs m = (MouseEventArgs)e;
            // textBox1.Text = sname;
            //textBox1.Text = Convert.ToString(m.X);
            label1.Text = "Pressed";

        }

        private void toolTip1_Popup(object sender, PopupEventArgs e)
        {

        }

        private void textBox1_MouseDown(object sender, MouseEventArgs e)
        {
            //textBox1.Text = "MouseDown";
        }

        private void textBox1_MouseUp(object sender, MouseEventArgs e)
        {
           // textBox1.Text = "MouseUp";
        }

        private void textBox1_MouseHover(object sender, EventArgs e)
        {
           // textBox1.Text = "Hover";
        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            
    
           
        }

        private void checkBox2_KeyPress(object sender, KeyPressEventArgs e)
        {
            textBox1.Text = Convert.ToString(e.KeyChar);
        }
    }
}
