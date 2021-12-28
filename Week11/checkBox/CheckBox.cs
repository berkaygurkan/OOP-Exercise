using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace checkBox
{
    public partial class CheckBox : Form
    {
        public CheckBox()
        {
            InitializeComponent();
        }

        private void checkBoxBold_CheckedChanged(object sender, EventArgs e)
        {
            labelMainText.Font = new Font(labelMainText.Font.Name, labelMainText.Font.Size,
                labelMainText.Font.Style ^ FontStyle.Bold);
        }

        private void checkBoxItalic_CheckedChanged(object sender, EventArgs e)
        {
            labelMainText.Font = new Font(labelMainText.Font.Name, labelMainText.Font.Size, 
                labelMainText.Font.Style ^ FontStyle.Italic);
        }

        private void checkBoxUnderline_CheckedChanged(object sender, EventArgs e)
        {
            labelMainText.Font = new Font(labelMainText.Font.Name, labelMainText.Font.Size,
               labelMainText.Font.Style ^ FontStyle.Underline);
        }

        private void checkBoxStrikeOut_CheckedChanged(object sender, EventArgs e)
        {
            //    labelMainText.Font = new Font(labelMainText.Font.Name, labelMainText.Font.Size,
            //       labelMainText.Font.Style ^ FontStyle.Strikeout);

            if(labelMainText.Font.Style == FontStyle.Strikeout)
            {
                labelMainText.Font = new Font(labelMainText.Font.Name, labelMainText.Font.Size,
                   FontStyle.Regular);
            }
            else
            {

                labelMainText.Font = new Font(labelMainText.Font.Name, labelMainText.Font.Size,
                    FontStyle.Strikeout);
            }

        }
    }
}
