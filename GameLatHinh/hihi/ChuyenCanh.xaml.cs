using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace WPF_Margin_
{
    /// <summary>
    /// Interaction logic for ChuyenCanh.xaml
    /// </summary>
    public partial class ChuyenCanh : Window
    {
        public ChuyenCanh(bool stt_win)
        {
            InitializeComponent();
            if (stt_win == true)
            {
                tbthongbao.Text = "Bạn Thắng";
                btnchotiep.IsEnabled = true;
            }
            else
            {
                tbthongbao.Text = "Bạn Thua";
                btnchotiep.IsEnabled = true;
            }
        }
        
        public int mangchoi = 0;
        public void dongform()
        {
            //Thread.Sleep(100);
            this.Dispatcher.Invoke(() =>
            {
                this.Close();
            });
          
        }
        private void btnchoilai_Click(object sender, RoutedEventArgs e)
        {
            //để xác định chơi lại màng nào
            switch (mangchoi)
            {
                case 1:
                    {
                        MainWindow mang1 = new MainWindow();
                        Thread t_dongform = new Thread(dongform);
                        t_dongform.IsBackground = true;
                        t_dongform.Start();            
                        mang1.ShowDialog();
                        break;
                    }
                case 2:
                    {
                        Mang2 mang2 = new Mang2();
                        Thread t_dongform = new Thread(dongform);
                        t_dongform.IsBackground = true;
                        t_dongform.Start();
                        mang2.ShowDialog();
                        break;
                    }
                case 3:
                    {
                        Mang3 mang3 = new Mang3();
                        Thread t_dongform = new Thread(dongform);
                        t_dongform.IsBackground = true;
                        t_dongform.Start();
                        mang3.ShowDialog();
                        break;
                    }
                case 4:
                    {
                        Mang4 mang4 = new Mang4();
                        Thread t_dongform = new Thread(dongform);
                        t_dongform.IsBackground = true;
                        t_dongform.Start();
                        mang4.ShowDialog();
                        break;
                    }
            }
        }

        private void btnchotiep_Click(object sender, RoutedEventArgs e)
        {
            // Xác định chơi tiếp màng nào
            switch (mangchoi)
            {
                case 1:
                    {
                        Mang2 mang2 = new Mang2();
                        Thread t_dongform = new Thread(dongform);
                        t_dongform.IsBackground = true;
                        t_dongform.Start();
                        mang2.ShowDialog();
                        break;
                    }
                case 2:
                    {
                        Mang3 mang3 = new Mang3();
                        Thread t_dongform = new Thread(dongform);
                        t_dongform.IsBackground = true;
                        t_dongform.Start();
                        mang3.ShowDialog();
                        break;
                    }
                case 3:
                    {
                        Mang4 mang4 = new Mang4();
                        Thread t_dongform = new Thread(dongform);
                        t_dongform.IsBackground = true;
                        t_dongform.Start();
                        mang4.ShowDialog();
                        break;
                    }
                case 4:
                    {
                        MessageBox.Show("Mình làm có 4 màng chơi hà. :D ");
                        break;
                    }
            }
        }
    }
}
