using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TraCuuSach
{
    public class ChuDe
    {
        #region Khai báo thuộc tính
        public string MaChuDe { get; set; }
        public string TenChuDe { get; set;}
        #endregion

        #region Cac phuong thuc
        public static ChuDe[] DocDanhSachCacChuDeArr(string path)
        {
            try
            {

                string[] arr = File.ReadAllLines(path);

                ChuDe[] cd = new ChuDe[arr.Length];
                for(int i = 0; i < arr.Length; i++)
                {
                    string[] rows = arr[i].Split('|');
                    cd[i] = new ChuDe { MaChuDe = rows[0], TenChuDe = rows[1] };
                }
                return cd;
            } catch (Exception ex)
            {
                throw new Exception(ex.Message);
            }
        }
        #endregion

    }
}
