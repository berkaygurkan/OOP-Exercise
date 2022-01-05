using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ex4
{
    public partial class Child : Form
    {
        public Child()
        {
            InitializeComponent();
        }


    public RichTextBox Input
        {
            get
            {
                return richTextBoxInput;               // var   = Input
            }
            set
            {
                richTextBoxInput = value;               // Input = var;
            }
        }

    public void InitializeHeader(int count)
    {
            this.Text = " " + count;

     }

       
    }
}
