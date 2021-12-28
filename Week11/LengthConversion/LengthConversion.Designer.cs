
namespace LengthConversion
{
    partial class LengthConversion
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.labelEnterMeters = new System.Windows.Forms.Label();
            this.textBoxLength = new System.Windows.Forms.TextBox();
            this.buttonCalculate = new System.Windows.Forms.Button();
            this.labelCentimeters = new System.Windows.Forms.Label();
            this.textBoxCm = new System.Windows.Forms.TextBox();
            this.textBoxFeet = new System.Windows.Forms.TextBox();
            this.labelFeet = new System.Windows.Forms.Label();
            this.textBoxInches = new System.Windows.Forms.TextBox();
            this.labelInches = new System.Windows.Forms.Label();
            this.buttonClear = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // labelEnterMeters
            // 
            this.labelEnterMeters.AutoSize = true;
            this.labelEnterMeters.Font = new System.Drawing.Font("Calibri", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.labelEnterMeters.Location = new System.Drawing.Point(12, 38);
            this.labelEnterMeters.Name = "labelEnterMeters";
            this.labelEnterMeters.Size = new System.Drawing.Size(200, 19);
            this.labelEnterMeters.TabIndex = 0;
            this.labelEnterMeters.Text = "Please enter length in meters";
            // 
            // textBoxLength
            // 
            this.textBoxLength.Location = new System.Drawing.Point(254, 38);
            this.textBoxLength.Name = "textBoxLength";
            this.textBoxLength.Size = new System.Drawing.Size(125, 23);
            this.textBoxLength.TabIndex = 1;
            // 
            // buttonCalculate
            // 
            this.buttonCalculate.Location = new System.Drawing.Point(24, 82);
            this.buttonCalculate.Name = "buttonCalculate";
            this.buttonCalculate.Size = new System.Drawing.Size(164, 44);
            this.buttonCalculate.TabIndex = 2;
            this.buttonCalculate.Text = "Calculate";
            this.buttonCalculate.UseVisualStyleBackColor = true;
            this.buttonCalculate.Click += new System.EventHandler(this.buttonCalculate_Click);
            // 
            // labelCentimeters
            // 
            this.labelCentimeters.AutoSize = true;
            this.labelCentimeters.Font = new System.Drawing.Font("Calibri", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.labelCentimeters.Location = new System.Drawing.Point(12, 158);
            this.labelCentimeters.Name = "labelCentimeters";
            this.labelCentimeters.Size = new System.Drawing.Size(220, 19);
            this.labelCentimeters.TabIndex = 3;
            this.labelCentimeters.Text = "Calculated length in centimeters";
            // 
            // textBoxCm
            // 
            this.textBoxCm.Location = new System.Drawing.Point(254, 154);
            this.textBoxCm.Name = "textBoxCm";
            this.textBoxCm.Size = new System.Drawing.Size(125, 23);
            this.textBoxCm.TabIndex = 4;
            // 
            // textBoxFeet
            // 
            this.textBoxFeet.Location = new System.Drawing.Point(254, 193);
            this.textBoxFeet.Name = "textBoxFeet";
            this.textBoxFeet.Size = new System.Drawing.Size(125, 23);
            this.textBoxFeet.TabIndex = 6;
            // 
            // labelFeet
            // 
            this.labelFeet.AutoSize = true;
            this.labelFeet.Font = new System.Drawing.Font("Calibri", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.labelFeet.Location = new System.Drawing.Point(12, 197);
            this.labelFeet.Name = "labelFeet";
            this.labelFeet.Size = new System.Drawing.Size(176, 19);
            this.labelFeet.TabIndex = 5;
            this.labelFeet.Text = "Calculated length in feets";
            // 
            // textBoxInches
            // 
            this.textBoxInches.Location = new System.Drawing.Point(254, 235);
            this.textBoxInches.Name = "textBoxInches";
            this.textBoxInches.Size = new System.Drawing.Size(125, 23);
            this.textBoxInches.TabIndex = 8;
            // 
            // labelInches
            // 
            this.labelInches.AutoSize = true;
            this.labelInches.Font = new System.Drawing.Font("Calibri", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.labelInches.Location = new System.Drawing.Point(12, 235);
            this.labelInches.Name = "labelInches";
            this.labelInches.Size = new System.Drawing.Size(185, 19);
            this.labelInches.TabIndex = 7;
            this.labelInches.Text = "Calculated length in inches";
            // 
            // buttonClear
            // 
            this.buttonClear.Location = new System.Drawing.Point(254, 82);
            this.buttonClear.Name = "buttonClear";
            this.buttonClear.Size = new System.Drawing.Size(125, 44);
            this.buttonClear.TabIndex = 9;
            this.buttonClear.Text = "Clear";
            this.buttonClear.UseVisualStyleBackColor = true;
            this.buttonClear.Click += new System.EventHandler(this.buttonClear_Click);
            // 
            // LengthConversion
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(433, 276);
            this.Controls.Add(this.buttonClear);
            this.Controls.Add(this.textBoxInches);
            this.Controls.Add(this.labelInches);
            this.Controls.Add(this.textBoxFeet);
            this.Controls.Add(this.labelFeet);
            this.Controls.Add(this.textBoxCm);
            this.Controls.Add(this.labelCentimeters);
            this.Controls.Add(this.buttonCalculate);
            this.Controls.Add(this.textBoxLength);
            this.Controls.Add(this.labelEnterMeters);
            this.Name = "LengthConversion";
            this.Text = "Length Conversion";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label labelEnterMeters;
        private System.Windows.Forms.TextBox textBoxLength;
        private System.Windows.Forms.Button buttonCalculate;
        private System.Windows.Forms.Label labelCentimeters;
        private System.Windows.Forms.TextBox textBoxCm;
        private System.Windows.Forms.TextBox textBoxFeet;
        private System.Windows.Forms.Label labelFeet;
        private System.Windows.Forms.TextBox textBoxInches;
        private System.Windows.Forms.Label labelInches;
        private System.Windows.Forms.Button buttonClear;
    }
}

