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
    public partial class ParentForm : Form
    {
        private int childCount;
        public ParentForm()
        {
            InitializeComponent();
        }

        private void newToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Child child = new Child();

            child.MdiParent = this;
            child.Show();
            childCount++;

            child.InitializeHeader(childCount);
        }

        private void closeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.ActiveMdiChild.Close();
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void timesToolStripMenuItem_Click(object sender, EventArgs e)
        {
            ToolStripMenuItem selectedFont = (ToolStripMenuItem)sender;

            Child current = (Child)this.ActiveMdiChild;
            current.Input.Font = new Font(sender.ToString(), current.Input.Font.Size);

            timesToolStripMenuItem.Checked = false;
            sansSerifToolStripMenuItem.Checked = false;
            arialToolStripMenuItem.Checked = false;
            colorToolStripMenuItem.Checked = false;

            selectedFont.Checked = true;
          
            

        }

        private void ColorToolStripMenuItem_Click(object sender, EventArgs e)
        {
            ToolStripMenuItem selectedColor = (ToolStripMenuItem)sender;

            Child current = (Child)this.ActiveMdiChild;

            current.Input.ForeColor = Color.FromName(selectedColor.ToString());

            blackToolStripMenuItem.Checked = false;
            redToolStripMenuItem.Checked = false;
            yellowToolStripMenuItem.Checked = false;
            greenToolStripMenuItem.Checked = false;
            blueToolStripMenuItem.Checked = false;
            orangeToolStripMenuItem.Checked = false;
            purpleToolStripMenuItem.Checked = false;
            colorToolStripMenuItem.Checked = false;


            selectedColor.Checked = true;
        }

        private void SizeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            ToolStripMenuItem selectedSize = (ToolStripMenuItem)sender;
            int size = Convert.ToInt32(selectedSize.ToString());

            Child current = (Child)this.ActiveMdiChild;

            current.Input.Font = new Font(current.Input.Font.FontFamily, size);

            toolStripMenuItem2.Checked = false;
            toolStripMenuItem3.Checked = false;
            toolStripMenuItem4.Checked = false;
            toolStripMenuItem5.Checked = false;
            toolStripMenuItem6.Checked = false;
            toolStripMenuItem7.Checked = false;

            selectedSize.Checked = true;

        }

        private void cascadeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.LayoutMdi(MdiLayout.Cascade);
        }

        private void tileHorizontallyToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.LayoutMdi(MdiLayout.TileHorizontal);
        }

        private void tileVerticallyToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.LayoutMdi(MdiLayout.TileVertical);
        }
    }
}
