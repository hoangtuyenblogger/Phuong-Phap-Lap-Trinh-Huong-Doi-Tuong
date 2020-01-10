using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TraCuuSach
{
    public class NhaXuatBan
    {
        #region Khai bao bien
        public string NhaXuatBanID { get; set; }
        public string TenNhaXuatBan { get; set; }
        public string DiaChi { get; set; }
        public string SoDienThoai { get; set; }

        #endregion

        public NhaXuatBan()
        {
        
        }

        public NhaXuatBan(string _nxbID, string _tennxb, string _diachi, string _sdt)
        {
            NhaXuatBanID = _nxbID;
            TenNhaXuatBan = _tennxb;
            DiaChi = _diachi;
            SoDienThoai = _sdt;
        }

        public static NhaXuatBan[] DocDanhSachNhaXuatBanArr(string path)
        {
            try
            {
                string[] arr = File.ReadAllLines(path);

                NhaXuatBan[] nxb = new NhaXuatBan[arr.Length];
                for(int i = 0; i < arr.Length; i++)
                {
                    string[] rows = arr[i].Split('|');
                    nxb[i] = new NhaXuatBan { NhaXuatBanID = rows[0], TenNhaXuatBan = rows[1], DiaChi = rows[2], SoDienThoai = rows[3] };
                }
                return nxb;

            } catch(Exception ex)
            {
                throw new Exception(ex.Message);
            }
        }

    }
}
