using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LengthConversion
{
    public partial class LengthConversion : Form
    {
        public LengthConversion()
        {
            InitializeComponent();
        }

        private void buttonCalculate_Click(object sender, EventArgs e)
        {
            // Calculation

            if(textBoxLength.Text != "")
            {
                double meters = Convert.ToDouble(textBoxLength.Text);
                double centimeters = meters * 100;
                double feets = meters * 3.28;
                double inches = meters * 39.97;

                textBoxCm.Text = centimeters + " cm ";
                textBoxFeet.Text = feets + " feets ";
                textBoxInches.Text = inches + " inches ";
            }
            else
            {
                MessageBox.Show("Please enter number!","Warning");
            }
      
        }

        private void buttonClear_Click(object sender, EventArgs e)
        {
            textBoxCm.Text = "";
            textBoxFeet.Text = "";
            textBoxInches.Text = " ";
            textBoxLength.Text = "";
            MessageBox.Show("Data is cleared","Info!");
        }
    }
}
