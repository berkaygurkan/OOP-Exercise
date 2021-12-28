using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private int CheckRadioButton()
        {
            if (radioButtonTopla.Checked == true)
                return 1;
            else if (radioButtonSubstract.Checked == true)
                return 2;
            else if (radioButtonMult.Checked == true)
                return 3;
            else if (radioButtonDiv.Checked == true)
                return 4;
            else
                return -1;



        }


        private void buttonCalc_Click(object sender, EventArgs e)
        {
            int radioState = CheckRadioButton();
            double num1 = Convert.ToDouble(textBoxNum1.Text);
            double num2 = Convert.ToDouble(textBoxNum2.Text);

            switch (radioState)
            {
                case 1:
                    textBoxResult.Text = Convert.ToString(num1 + num2);
                    break;
                case 2:
                    textBoxResult.Text = Convert.ToString(num1 - num2);
                    break;
                case 3:
                    textBoxResult.Text = Convert.ToString(num1 * num2);
                    break;
                case 4:
                    if (num2 != 0)
                        textBoxResult.Text = Convert.ToString(num1 / num2);
                    else
                        MessageBox.Show("Please enter valid numbers", "Division to zero");
                    break;
                    
                //default:
                  //  MessageBox.Show("Please check one of the radio buttons");
                   
            }
        }

        private void buttonLogin_Click(object sender, EventArgs e)
        {
            if (textBoxUsername.Text != string.Empty && textBoxPassword.Text != string.Empty)
            {
                string username = textBoxUsername.Text;
                string password = textBoxPassword.Text;

                if (username == "admin" && password == "1234")
                {
                    groupBoxCalc.Enabled = true;
                    groupBoxLogin.Enabled = false;
                    groupBoxLogin.BackColor = Color.Green;
                }
                else
                {
                    groupBoxLogin.BackColor = Color.Red;
                    MessageBox.Show("Wrong Password! Try Again!");
                }

            }
            else
                MessageBox.Show("Please enter username and password");
        }
    }
}
