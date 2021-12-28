
namespace Calculator
{
    partial class Form1
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
            this.components = new System.ComponentModel.Container();
            this.groupBoxCalc = new System.Windows.Forms.GroupBox();
            this.buttonCalc = new System.Windows.Forms.Button();
            this.radioButtonDiv = new System.Windows.Forms.RadioButton();
            this.radioButtonMult = new System.Windows.Forms.RadioButton();
            this.radioButtonSubstract = new System.Windows.Forms.RadioButton();
            this.radioButtonTopla = new System.Windows.Forms.RadioButton();
            this.labelResult = new System.Windows.Forms.Label();
            this.textBoxResult = new System.Windows.Forms.TextBox();
            this.labelNum2 = new System.Windows.Forms.Label();
            this.labelNum1 = new System.Windows.Forms.Label();
            this.textBoxNum2 = new System.Windows.Forms.TextBox();
            this.textBoxNum1 = new System.Windows.Forms.TextBox();
            this.groupBoxLogin = new System.Windows.Forms.GroupBox();
            this.buttonLogin = new System.Windows.Forms.Button();
            this.textBoxPassword = new System.Windows.Forms.TextBox();
            this.labelPassword = new System.Windows.Forms.Label();
            this.textBoxUsername = new System.Windows.Forms.TextBox();
            this.labelUsername = new System.Windows.Forms.Label();
            this.toolTip1 = new System.Windows.Forms.ToolTip(this.components);
            this.groupBoxCalc.SuspendLayout();
            this.groupBoxLogin.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBoxCalc
            // 
            this.groupBoxCalc.Controls.Add(this.buttonCalc);
            this.groupBoxCalc.Controls.Add(this.radioButtonDiv);
            this.groupBoxCalc.Controls.Add(this.radioButtonMult);
            this.groupBoxCalc.Controls.Add(this.radioButtonSubstract);
            this.groupBoxCalc.Controls.Add(this.radioButtonTopla);
            this.groupBoxCalc.Controls.Add(this.labelResult);
            this.groupBoxCalc.Controls.Add(this.textBoxResult);
            this.groupBoxCalc.Controls.Add(this.labelNum2);
            this.groupBoxCalc.Controls.Add(this.labelNum1);
            this.groupBoxCalc.Controls.Add(this.textBoxNum2);
            this.groupBoxCalc.Controls.Add(this.textBoxNum1);
            this.groupBoxCalc.Enabled = false;
            this.groupBoxCalc.Location = new System.Drawing.Point(12, 178);
            this.groupBoxCalc.Name = "groupBoxCalc";
            this.groupBoxCalc.Size = new System.Drawing.Size(387, 193);
            this.groupBoxCalc.TabIndex = 0;
            this.groupBoxCalc.TabStop = false;
            this.groupBoxCalc.Text = "Basic Calculator";
            // 
            // buttonCalc
            // 
            this.buttonCalc.Location = new System.Drawing.Point(224, 33);
            this.buttonCalc.Name = "buttonCalc";
            this.buttonCalc.Size = new System.Drawing.Size(157, 78);
            this.buttonCalc.TabIndex = 10;
            this.buttonCalc.Text = "Calculate";
            this.buttonCalc.UseVisualStyleBackColor = true;
            this.buttonCalc.Click += new System.EventHandler(this.buttonCalc_Click);
            // 
            // radioButtonDiv
            // 
            this.radioButtonDiv.AutoSize = true;
            this.radioButtonDiv.Location = new System.Drawing.Point(279, 158);
            this.radioButtonDiv.Name = "radioButtonDiv";
            this.radioButtonDiv.Size = new System.Drawing.Size(67, 19);
            this.radioButtonDiv.TabIndex = 9;
            this.radioButtonDiv.TabStop = true;
            this.radioButtonDiv.Text = "Division";
            this.radioButtonDiv.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.radioButtonDiv.UseVisualStyleBackColor = true;
            // 
            // radioButtonMult
            // 
            this.radioButtonMult.AutoSize = true;
            this.radioButtonMult.Location = new System.Drawing.Point(165, 158);
            this.radioButtonMult.Name = "radioButtonMult";
            this.radioButtonMult.Size = new System.Drawing.Size(102, 19);
            this.radioButtonMult.TabIndex = 8;
            this.radioButtonMult.TabStop = true;
            this.radioButtonMult.Text = "Multipliciation";
            this.radioButtonMult.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.radioButtonMult.UseVisualStyleBackColor = true;
            // 
            // radioButtonSubstract
            // 
            this.radioButtonSubstract.AutoSize = true;
            this.radioButtonSubstract.Location = new System.Drawing.Point(76, 158);
            this.radioButtonSubstract.Name = "radioButtonSubstract";
            this.radioButtonSubstract.Size = new System.Drawing.Size(74, 19);
            this.radioButtonSubstract.TabIndex = 7;
            this.radioButtonSubstract.TabStop = true;
            this.radioButtonSubstract.Text = "Substract";
            this.radioButtonSubstract.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.radioButtonSubstract.UseVisualStyleBackColor = true;
            // 
            // radioButtonTopla
            // 
            this.radioButtonTopla.AutoSize = true;
            this.radioButtonTopla.Location = new System.Drawing.Point(6, 158);
            this.radioButtonTopla.Name = "radioButtonTopla";
            this.radioButtonTopla.Size = new System.Drawing.Size(49, 19);
            this.radioButtonTopla.TabIndex = 6;
            this.radioButtonTopla.TabStop = true;
            this.radioButtonTopla.Text = "Sum";
            this.radioButtonTopla.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.radioButtonTopla.UseVisualStyleBackColor = true;
            // 
            // labelResult
            // 
            this.labelResult.AutoSize = true;
            this.labelResult.Location = new System.Drawing.Point(6, 111);
            this.labelResult.Name = "labelResult";
            this.labelResult.Size = new System.Drawing.Size(39, 15);
            this.labelResult.TabIndex = 5;
            this.labelResult.Text = "Result";
            // 
            // textBoxResult
            // 
            this.textBoxResult.Location = new System.Drawing.Point(76, 108);
            this.textBoxResult.Name = "textBoxResult";
            this.textBoxResult.Size = new System.Drawing.Size(100, 23);
            this.textBoxResult.TabIndex = 4;
            // 
            // labelNum2
            // 
            this.labelNum2.AutoSize = true;
            this.labelNum2.Location = new System.Drawing.Point(6, 74);
            this.labelNum2.Name = "labelNum2";
            this.labelNum2.Size = new System.Drawing.Size(60, 15);
            this.labelNum2.TabIndex = 3;
            this.labelNum2.Text = "Number 2";
            // 
            // labelNum1
            // 
            this.labelNum1.AutoSize = true;
            this.labelNum1.Location = new System.Drawing.Point(6, 36);
            this.labelNum1.Name = "labelNum1";
            this.labelNum1.Size = new System.Drawing.Size(60, 15);
            this.labelNum1.TabIndex = 2;
            this.labelNum1.Text = "Number 1";
            // 
            // textBoxNum2
            // 
            this.textBoxNum2.Location = new System.Drawing.Point(76, 71);
            this.textBoxNum2.Name = "textBoxNum2";
            this.textBoxNum2.Size = new System.Drawing.Size(100, 23);
            this.textBoxNum2.TabIndex = 1;
            // 
            // textBoxNum1
            // 
            this.textBoxNum1.Location = new System.Drawing.Point(76, 33);
            this.textBoxNum1.Name = "textBoxNum1";
            this.textBoxNum1.Size = new System.Drawing.Size(100, 23);
            this.textBoxNum1.TabIndex = 0;
            // 
            // groupBoxLogin
            // 
            this.groupBoxLogin.Controls.Add(this.buttonLogin);
            this.groupBoxLogin.Controls.Add(this.textBoxPassword);
            this.groupBoxLogin.Controls.Add(this.labelPassword);
            this.groupBoxLogin.Controls.Add(this.textBoxUsername);
            this.groupBoxLogin.Controls.Add(this.labelUsername);
            this.groupBoxLogin.Location = new System.Drawing.Point(12, 37);
            this.groupBoxLogin.Name = "groupBoxLogin";
            this.groupBoxLogin.Size = new System.Drawing.Size(381, 91);
            this.groupBoxLogin.TabIndex = 1;
            this.groupBoxLogin.TabStop = false;
            this.groupBoxLogin.Text = "Login";
            this.toolTip1.SetToolTip(this.groupBoxLogin, "Heyyy");
            // 
            // buttonLogin
            // 
            this.buttonLogin.Location = new System.Drawing.Point(218, 41);
            this.buttonLogin.Name = "buttonLogin";
            this.buttonLogin.Size = new System.Drawing.Size(157, 29);
            this.buttonLogin.TabIndex = 11;
            this.buttonLogin.Text = "Login";
            this.buttonLogin.UseVisualStyleBackColor = true;
            this.buttonLogin.Click += new System.EventHandler(this.buttonLogin_Click);
            // 
            // textBoxPassword
            // 
            this.textBoxPassword.Location = new System.Drawing.Point(76, 62);
            this.textBoxPassword.Name = "textBoxPassword";
            this.textBoxPassword.Size = new System.Drawing.Size(100, 23);
            this.textBoxPassword.TabIndex = 13;
            this.textBoxPassword.UseSystemPasswordChar = true;
            // 
            // labelPassword
            // 
            this.labelPassword.AutoSize = true;
            this.labelPassword.Location = new System.Drawing.Point(6, 65);
            this.labelPassword.Name = "labelPassword";
            this.labelPassword.Size = new System.Drawing.Size(57, 15);
            this.labelPassword.TabIndex = 12;
            this.labelPassword.Text = "Password";
            // 
            // textBoxUsername
            // 
            this.textBoxUsername.Location = new System.Drawing.Point(76, 26);
            this.textBoxUsername.Name = "textBoxUsername";
            this.textBoxUsername.Size = new System.Drawing.Size(100, 23);
            this.textBoxUsername.TabIndex = 11;
            // 
            // labelUsername
            // 
            this.labelUsername.AutoSize = true;
            this.labelUsername.Location = new System.Drawing.Point(6, 29);
            this.labelUsername.Name = "labelUsername";
            this.labelUsername.Size = new System.Drawing.Size(60, 15);
            this.labelUsername.TabIndex = 0;
            this.labelUsername.Text = "Username";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(400, 405);
            this.Controls.Add(this.groupBoxLogin);
            this.Controls.Add(this.groupBoxCalc);
            this.Name = "Form1";
            this.Text = "Form1";
            this.toolTip1.SetToolTip(this, "Please enter username and passord and Press Login");
            this.groupBoxCalc.ResumeLayout(false);
            this.groupBoxCalc.PerformLayout();
            this.groupBoxLogin.ResumeLayout(false);
            this.groupBoxLogin.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBoxCalc;
        private System.Windows.Forms.Label labelNum1;
        private System.Windows.Forms.TextBox textBoxNum2;
        private System.Windows.Forms.TextBox textBoxNum1;
        private System.Windows.Forms.Button buttonCalc;
        private System.Windows.Forms.RadioButton radioButtonDiv;
        private System.Windows.Forms.RadioButton radioButtonMult;
        private System.Windows.Forms.RadioButton radioButtonSubstract;
        private System.Windows.Forms.RadioButton radioButtonTopla;
        private System.Windows.Forms.Label labelResult;
        private System.Windows.Forms.TextBox textBoxResult;
        private System.Windows.Forms.Label labelNum2;
        private System.Windows.Forms.GroupBox groupBoxLogin;
        private System.Windows.Forms.Button buttonLogin;
        private System.Windows.Forms.TextBox textBoxPassword;
        private System.Windows.Forms.Label labelPassword;
        private System.Windows.Forms.TextBox textBoxUsername;
        private System.Windows.Forms.Label labelUsername;
        private System.Windows.Forms.ToolTip toolTip1;
    }
}

