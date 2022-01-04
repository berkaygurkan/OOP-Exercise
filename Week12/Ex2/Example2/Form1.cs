using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Example1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            string[] ItemsOfComboBox = { "Mattresses", "Bathroom Lamb" };
            comboBoxDecor.Items.AddRange(ItemsOfComboBox);
            labelNumofItems.Text = comboBoxDecor.Items.Count.ToString();

        }

        private void buttonAdd_Click(object sender, EventArgs e)
        {
            string newItemName = textBoxAdd.Text;
            comboBoxDecor.Items.Add(newItemName);
            textBoxAdd.Text = " ";
            textBoxAdd.Select();
            labelNumofItems.Text = comboBoxDecor.Items.Count.ToString();
        }

        private void comboBoxDecor_SelectedIndexChanged(object sender, EventArgs e)
        {
            listBoxDecor.Items.Add(comboBoxDecor.SelectedItem);
            listBoxDecor.Sorted = true;


            //labelNumofItems.Text = comboBoxDecor.SelectedItem.ToString();
            comboBoxDecor.Items.RemoveAt(comboBoxDecor.SelectedIndex);
           labelNumofItems.Text = comboBoxDecor.Items.Count.ToString();

            if (comboBoxDecor.Items.Count == 0)
            {
                MessageBox.Show("ComboBox has no more products", "Empty", MessageBoxButtons.OK,
                   MessageBoxIcon.Information);

                // terminate program execution
                Application.Exit();
            } // end if


        }
    }
}
