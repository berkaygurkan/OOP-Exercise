using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GuessNumber
{
    public partial class GuessNumber : Form
    {
        int secret;
        int lastGuess;
        bool firstGuess = true;

        public GuessNumber()
        {
            InitializeComponent();
        }

        private void GenerateSecret()
        {
            Random randomNumber = new Random();
            secret = randomNumber.Next(100) + 1;
        }

        private int CheckGuess(int user)
        {
            if (user > secret) // too high
            {
                return 1;
            }
            if (user < secret) // too low
            {
                return -1;
            }
            else // correct
            {
                return 0;
            }
        }

        private void buttonPlay_Click(object sender, EventArgs e)
        {
            
            GenerateSecret(); // Generate new number
            labelInfo.Text = "New Game started!";
            textBoxNumber.Text = "";
            buttonPlay.Enabled = false;
            BackColor = Color.Green;
        }

        private void textBoxNumber_KeyDown(object sender, KeyEventArgs e)
        {
            // if key is enter
            if(e.KeyCode == Keys.Enter)
            {
                int userGuess = Convert.ToInt32(textBoxNumber.Text);

                if(!firstGuess)
                {
                    if (Math.Abs(userGuess - secret) < Math.Abs(lastGuess - secret))
                    {
                        BackColor = Color.Red;
                    }
                    else
                    {
                        BackColor = Color.LightBlue;
                    }

                }
                firstGuess = false;
              

                int trueOrFalse = CheckGuess(userGuess);

                if (trueOrFalse == 0)
                {
                    labelInfo.Text = "Correct!";
                    buttonPlay.Enabled = true;
                    textBoxNumber.ReadOnly = true;
                    BackColor = Color.LightGreen;
                    firstGuess = true;
                }
                else if (trueOrFalse == -1)
                {
                    labelInfo.Text = "Too Low!" + lastGuess.ToString();
                }
                else
                {
                    labelInfo.Text = "Too High!" + lastGuess.ToString();
                }
                lastGuess = userGuess;
            }
        }
    }
}
