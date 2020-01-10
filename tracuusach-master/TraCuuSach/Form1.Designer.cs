namespace TraCuuSach
{
    partial class TraCuuSach
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(TraCuuSach));
            this.lblTitle = new System.Windows.Forms.Label();
            this.radioChuDe = new System.Windows.Forms.RadioButton();
            this.radioNXB = new System.Windows.Forms.RadioButton();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.dsChuyenMuc = new System.Windows.Forms.ComboBox();
            this.btnSearch = new System.Windows.Forms.Button();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.listSach = new System.Windows.Forms.ListBox();
            this.textTotal = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.btnExit = new System.Windows.Forms.Button();
            this.label6 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.textMota = new System.Windows.Forms.TextBox();
            this.dateUpdate = new System.Windows.Forms.DateTimePicker();
            this.textGia = new System.Windows.Forms.TextBox();
            this.textTenSach = new System.Windows.Forms.TextBox();
            this.textMSSach = new System.Windows.Forms.TextBox();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.SuspendLayout();
            // 
            // lblTitle
            // 
            this.lblTitle.AutoSize = true;
            this.lblTitle.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblTitle.ForeColor = System.Drawing.Color.DarkBlue;
            this.lblTitle.Location = new System.Drawing.Point(424, 27);
            this.lblTitle.Name = "lblTitle";
            this.lblTitle.Size = new System.Drawing.Size(399, 31);
            this.lblTitle.TabIndex = 0;
            this.lblTitle.Text = "TRA CỨU THÔNG TIN SÁCH";
            this.lblTitle.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            // 
            // radioChuDe
            // 
            this.radioChuDe.AutoSize = true;
            this.radioChuDe.BackColor = System.Drawing.Color.Coral;
            this.radioChuDe.Location = new System.Drawing.Point(133, 29);
            this.radioChuDe.Name = "radioChuDe";
            this.radioChuDe.Size = new System.Drawing.Size(186, 29);
            this.radioChuDe.TabIndex = 0;
            this.radioChuDe.TabStop = true;
            this.radioChuDe.Text = "Sách theo chủ đề";
            this.radioChuDe.UseVisualStyleBackColor = false;
            this.radioChuDe.CheckedChanged += new System.EventHandler(this.radioChuDe_CheckedChanged);
            // 
            // radioNXB
            // 
            this.radioNXB.AutoSize = true;
            this.radioNXB.BackColor = System.Drawing.Color.DarkKhaki;
            this.radioNXB.Location = new System.Drawing.Point(358, 28);
            this.radioNXB.Name = "radioNXB";
            this.radioNXB.Size = new System.Drawing.Size(240, 29);
            this.radioNXB.TabIndex = 1;
            this.radioNXB.TabStop = true;
            this.radioNXB.Text = "Sách theo nhà xuất bản";
            this.radioNXB.UseVisualStyleBackColor = false;
            this.radioNXB.CheckedChanged += new System.EventHandler(this.radioNXB_CheckedChanged);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.dsChuyenMuc);
            this.groupBox1.Controls.Add(this.btnSearch);
            this.groupBox1.Controls.Add(this.radioNXB);
            this.groupBox1.Controls.Add(this.radioChuDe);
            this.groupBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox1.ForeColor = System.Drawing.Color.Black;
            this.groupBox1.Location = new System.Drawing.Point(72, 92);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(1108, 77);
            this.groupBox1.TabIndex = 1;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Chọn thông tin";
            // 
            // dsChuyenMuc
            // 
            this.dsChuyenMuc.FormattingEnabled = true;
            this.dsChuyenMuc.Location = new System.Drawing.Point(624, 26);
            this.dsChuyenMuc.Name = "dsChuyenMuc";
            this.dsChuyenMuc.Size = new System.Drawing.Size(358, 33);
            this.dsChuyenMuc.TabIndex = 4;
            // 
            // btnSearch
            // 
            this.btnSearch.Location = new System.Drawing.Point(1006, 26);
            this.btnSearch.Name = "btnSearch";
            this.btnSearch.Size = new System.Drawing.Size(75, 33);
            this.btnSearch.TabIndex = 3;
            this.btnSearch.Text = "Tìm";
            this.btnSearch.UseVisualStyleBackColor = true;
            this.btnSearch.Click += new System.EventHandler(this.button1_Click);
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.listSach);
            this.groupBox2.Controls.Add(this.textTotal);
            this.groupBox2.Controls.Add(this.label1);
            this.groupBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox2.ForeColor = System.Drawing.Color.Coral;
            this.groupBox2.Location = new System.Drawing.Point(12, 196);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(537, 432);
            this.groupBox2.TabIndex = 2;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Sách theo chủ đề";
            // 
            // listSach
            // 
            this.listSach.FormattingEnabled = true;
            this.listSach.ItemHeight = 25;
            this.listSach.Location = new System.Drawing.Point(6, 47);
            this.listSach.Name = "listSach";
            this.listSach.ScrollAlwaysVisible = true;
            this.listSach.Size = new System.Drawing.Size(525, 304);
            this.listSach.TabIndex = 3;
            this.listSach.SelectedIndexChanged += new System.EventHandler(this.listSach_SelectedIndexChanged);
            // 
            // textTotal
            // 
            this.textTotal.Location = new System.Drawing.Point(283, 376);
            this.textTotal.Name = "textTotal";
            this.textTotal.Size = new System.Drawing.Size(188, 30);
            this.textTotal.TabIndex = 2;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.ForeColor = System.Drawing.Color.CornflowerBlue;
            this.label1.Location = new System.Drawing.Point(128, 376);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(131, 25);
            this.label1.TabIndex = 1;
            this.label1.Text = "Tổng số sách";
            // 
            // groupBox3
            // 
            this.groupBox3.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("groupBox3.BackgroundImage")));
            this.groupBox3.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.groupBox3.Controls.Add(this.btnExit);
            this.groupBox3.Controls.Add(this.label6);
            this.groupBox3.Controls.Add(this.label5);
            this.groupBox3.Controls.Add(this.label4);
            this.groupBox3.Controls.Add(this.label3);
            this.groupBox3.Controls.Add(this.label2);
            this.groupBox3.Controls.Add(this.textMota);
            this.groupBox3.Controls.Add(this.dateUpdate);
            this.groupBox3.Controls.Add(this.textGia);
            this.groupBox3.Controls.Add(this.textTenSach);
            this.groupBox3.Controls.Add(this.textMSSach);
            this.groupBox3.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox3.ForeColor = System.Drawing.Color.Crimson;
            this.groupBox3.Location = new System.Drawing.Point(593, 196);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(657, 465);
            this.groupBox3.TabIndex = 3;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "Hồ sơ sách";
            // 
            // btnExit
            // 
            this.btnExit.Location = new System.Drawing.Point(509, 428);
            this.btnExit.Name = "btnExit";
            this.btnExit.Size = new System.Drawing.Size(126, 37);
            this.btnExit.TabIndex = 13;
            this.btnExit.Text = "Thoát";
            this.btnExit.UseVisualStyleBackColor = true;
            this.btnExit.Click += new System.EventHandler(this.btnExit_Click);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.ForeColor = System.Drawing.Color.CornflowerBlue;
            this.label6.Location = new System.Drawing.Point(20, 257);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(61, 25);
            this.label6.TabIndex = 12;
            this.label6.Text = "Mô tả";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.ForeColor = System.Drawing.Color.CornflowerBlue;
            this.label5.Location = new System.Drawing.Point(20, 205);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(138, 25);
            this.label5.TabIndex = 11;
            this.label5.Text = "Ngày cập nhật";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.ForeColor = System.Drawing.Color.CornflowerBlue;
            this.label4.Location = new System.Drawing.Point(20, 151);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(80, 25);
            this.label4.TabIndex = 10;
            this.label4.Text = "Giá bán";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.ForeColor = System.Drawing.Color.CornflowerBlue;
            this.label3.Location = new System.Drawing.Point(20, 96);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(94, 25);
            this.label3.TabIndex = 9;
            this.label3.Text = "Tên sách";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.ForeColor = System.Drawing.Color.CornflowerBlue;
            this.label2.Location = new System.Drawing.Point(20, 42);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(113, 25);
            this.label2.TabIndex = 3;
            this.label2.Text = "Mã số sách";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // textMota
            // 
            this.textMota.Location = new System.Drawing.Point(25, 285);
            this.textMota.Multiline = true;
            this.textMota.Name = "textMota";
            this.textMota.ReadOnly = true;
            this.textMota.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.textMota.Size = new System.Drawing.Size(610, 141);
            this.textMota.TabIndex = 8;
            // 
            // dateUpdate
            // 
            this.dateUpdate.CustomFormat = "dd/mm/yyyy";
            this.dateUpdate.Location = new System.Drawing.Point(202, 205);
            this.dateUpdate.Name = "dateUpdate";
            this.dateUpdate.Size = new System.Drawing.Size(339, 30);
            this.dateUpdate.TabIndex = 7;
            // 
            // textGia
            // 
            this.textGia.Location = new System.Drawing.Point(202, 151);
            this.textGia.Name = "textGia";
            this.textGia.Size = new System.Drawing.Size(259, 30);
            this.textGia.TabIndex = 6;
            this.textGia.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // textTenSach
            // 
            this.textTenSach.Location = new System.Drawing.Point(202, 96);
            this.textTenSach.Name = "textTenSach";
            this.textTenSach.Size = new System.Drawing.Size(385, 30);
            this.textTenSach.TabIndex = 5;
            this.textTenSach.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // textMSSach
            // 
            this.textMSSach.Location = new System.Drawing.Point(202, 42);
            this.textMSSach.Name = "textMSSach";
            this.textMSSach.Size = new System.Drawing.Size(385, 30);
            this.textMSSach.TabIndex = 4;
            // 
            // TraCuuSach
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1262, 673);
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.lblTitle);
            this.Name = "TraCuuSach";
            this.Text = "Phần mềm tra cứu sách";
            this.Load += new System.EventHandler(this.TraCuuSach_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.groupBox3.ResumeLayout(false);
            this.groupBox3.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblTitle;
        private System.Windows.Forms.RadioButton radioChuDe;
        private System.Windows.Forms.RadioButton radioNXB;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button btnSearch;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.TextBox textTotal;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textMota;
        private System.Windows.Forms.DateTimePicker dateUpdate;
        private System.Windows.Forms.TextBox textGia;
        private System.Windows.Forms.TextBox textTenSach;
        private System.Windows.Forms.TextBox textMSSach;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button btnExit;
        private System.Windows.Forms.ListBox listSach;
        private System.Windows.Forms.ComboBox dsChuyenMuc;
    }
}

