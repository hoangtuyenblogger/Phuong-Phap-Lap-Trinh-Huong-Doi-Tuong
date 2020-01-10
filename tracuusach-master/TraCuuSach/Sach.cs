using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TraCuuSach
{
    public class Sach
    {
        public string SachID { get; set; }
        public string TenSach { get; set; }
        public float GiaBan { get; set; }
        public string MaChuDe { get; set; }
        public string NhaXuatBanID { get; set; }
        public string MoTa { get; set; }
        public string HinhBia { get; set; }
        public DateTime NgayCapNhat { get; set; }

        public static Sach[] DocTenSachTheoNhaXuatBan(string path, string nxb)
        {
            try
            {
                string[] arr = File.ReadAllLines(path);
                Sach[] s = null;
                int dem = 0;
                for(int i = 0; i < arr.Length; i++)
                {
                    string[] rows = arr[i].Split('|');
                    if(rows[4] == nxb)
                    {
                        dem++;
                        Array.Resize<Sach>(ref s, dem);
                        s[dem - 1] = new Sach
                        {
                            SachID = rows[0],
                            TenSach = rows[1],
                            GiaBan = float.Parse(rows[2].ToString()),
                            MaChuDe = rows[3],
                            NhaXuatBanID = rows[4],
                            MoTa = rows[5],
                            HinhBia = rows[6],
                            NgayCapNhat = DateTime.Parse(rows[7].ToString()),
                        };
                    }
                }
                return s;
            } catch(Exception ex)
            {
                throw new Exception(ex.Message);
            }
        }

        public static Sach[] DocSachTheoMaChuDe(string path, string mcd)
        {
            try
            {
                string[] arr = File.ReadAllLines(path);
                Sach[] s = null;
                int dem = 0;
                for(int i = 0; i < arr.Length; i++)
                {
                    string[] rows = arr[i].Split('|');
                    if(rows[3] == mcd)
                    {
                        dem++;
                        Array.Resize<Sach>(ref s, dem);
                        s[dem-1] = new Sach
                        {
                            SachID = rows[0],
                            TenSach = rows[1],
                            GiaBan = float.Parse(rows[2].ToString()),
                            MaChuDe = rows[3],
                            NhaXuatBanID = rows[4],
                            MoTa = rows[5],
                            HinhBia = rows[6],
                            NgayCapNhat = DateTime.Parse(rows[7].ToString()),
                        };
                    }
                }
                return s;
            } catch(Exception ex)
            {
                throw new Exception(ex.Message);
            }
        }
    }
}
