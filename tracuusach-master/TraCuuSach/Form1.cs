using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TraCuuSach
{
    public partial class TraCuuSach : Form
    {
        public TraCuuSach()
        {
            InitializeComponent();
        }

        NhaXuatBan[] NhaXuatBans = null;
        ChuDe[] ChuDes = null;
        Sach[] Saches = null;

        void XuatHoSoSach(Sach s)
        {
            if (s != null)
            {
                textMSSach.Text = s.SachID;
                textTenSach.Text = s.TenSach;
                textMota.Text = s.MoTa;
                textGia.Text = s.GiaBan.ToString("#,##0");
                dateUpdate.Value = s.NgayCapNhat;
            }
            else
            {
                XuatHoSoSachMoi();
            }
        }

        void XuatSachTheoDieuKien()
        {
            try
            {
                //dsChuyenMuc.DataSource = null;
                if (Saches == null) return;
                listSach.DisplayMember = "TenSach";
                listSach.ValueMember = "SachID";
                listSach.DataSource = Saches.ToList();

                textTotal.Text = Saches.Count().ToString();
            } catch(Exception ex)
            {
                throw new Exception(ex.Message);
            }
        }

        void XuatSachTheoNhaXuatBan()
        {
            try
            {
                string path = @"\NhaXuatBan.txt";
                listSach.DataSource = null;
                textTotal.Clear();
                NhaXuatBans = NhaXuatBan.DocDanhSachNhaXuatBanArr(path);
                dsChuyenMuc.DataSource = null;
                dsChuyenMuc.DisplayMember = "TenNhaXuatBan";
                dsChuyenMuc.ValueMember = "NhaXuatBanID";
                dsChuyenMuc.DataSource = NhaXuatBans.ToList();
            } catch(Exception ex)
            {
                throw new Exception(ex.Message);
            }
        }

        void XuatSachTheoChuDe()
        {
            try
            {
                string path = @"\ChuDe.txt";
                listSach.DataSource = null;
                textTotal.Clear();
                //XuatHoSoSachMoi();
                ChuDes = ChuDe.DocDanhSachCacChuDeArr(path);
                dsChuyenMuc.DataSource = null;
                dsChuyenMuc.DisplayMember = "TenChuDe";
                dsChuyenMuc.ValueMember = "MaChuDe";
                dsChuyenMuc.DataSource = ChuDes.ToList();
            }
            catch (Exception ex)
            {
                throw new Exception(ex.Message);
            }
        }

        private void XuatHoSoSachMoi()
        {
            throw new NotImplementedException();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                if (dsChuyenMuc.SelectedIndex == -1) return;
                string path = @"\Sach.txt";
                string id = dsChuyenMuc.SelectedValue.ToString();
                if (radioChuDe.Checked)
                {
                    Saches = Sach.DocSachTheoMaChuDe(path, id);
                } 
                else
                {
                    Saches = Sach.DocTenSachTheoNhaXuatBan(path, id);
                }
                XuatSachTheoDieuKien();
            } catch(Exception ex)
            {
                MessageBox.Show(ex.Message, "Error");
            }
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void TraCuuSach_Load(object sender, EventArgs e)
        {
            radioChuDe_CheckedChanged(sender, e);
        }

        private void radioChuDe_CheckedChanged(object sender, EventArgs e)
        {
            try
            {
                if (radioChuDe.Checked)
                {
                    XuatSachTheoChuDe();
                }
            } catch(Exception ex)
            {
                MessageBox.Show(ex.Message, "Error");
            }
        }

        private void radioNXB_CheckedChanged(object sender, EventArgs e)
        {
            try
            {
                if (radioNXB.Checked)
                {
                    XuatSachTheoNhaXuatBan();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "Error");
            }
        }

        private void listSach_SelectedIndexChanged(object sender, EventArgs e)
        {
            try
            {
                if (listSach.Items.Count == 0) return;
                if (listSach.Items.Count == -1) return;
                int vt = listSach.SelectedIndex;
                Sach s = Saches[vt];
                XuatHoSoSach(s);
            } catch(Exception ex)
            {
                MessageBox.Show(ex.Message, "Error");
            }
        }

        private void btnExit_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
