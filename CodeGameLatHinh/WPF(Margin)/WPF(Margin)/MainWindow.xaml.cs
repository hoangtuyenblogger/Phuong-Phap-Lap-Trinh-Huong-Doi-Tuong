using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Media;
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
using System.Windows.Navigation;
using System.Windows.Resources;
using System.Windows.Shapes;
using System.Windows.Threading;
namespace WPF_Margin_
{  
    public partial class MainWindow : Window
    {
        static string duongdan = Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments);
        public bool stt_win = false;
        DispatcherTimer timer = new DispatcherTimer();
        public MainWindow()
        {           
            InitializeComponent();          
            ImageBrush ib = new ImageBrush();
            BitmapImage bm = new BitmapImage();
            bm.BeginInit();
            bm.UriSource = new Uri(System.AppDomain.CurrentDomain.BaseDirectory + @"\Game\Hinh\HinhNen\1.jpeg"); // nhớ đổi đường dẫn khi Build thành file EXE
            bm.EndInit();
            ib.ImageSource = bm;
            this.Background = ib;    
             taobutton(8);
            hoandoi(dsbutton);            
            timer.Tick += timer_tick;
            timer.Interval = new TimeSpan(0, 0, 1);
            timer.Start();
        }        
        int tg = 20;
        int tongdiem = 0;
        void timer_tick(object sender, EventArgs e)
        {
            tbtongtg.Text = tg.ToString();
            tg = tg - 1;
            if (tg == 0)
            {
                ChuyenCanh chuyencanh = new ChuyenCanh(false);
                chuyencanh.mangchoi = 1;
                this.Dispatcher.Invoke(() => {
                    this.Hide();
                    timer.Stop();
                });
                chuyencanh.ShowDialog();
                //MessageBox.Show("Thua");
            }
        }       
        List<Button> dsbutton = new List<Button>();
        private void taobutton(int soluongnut)
        {
           
            for (int b = 0; b < soluongnut; b++)
            {
                Button btn = new Button();               
                dsbutton.Add(btn);    
            }
           
            int sobt = dsbutton.Count;
            int dem = 0;       
            addhinhvaobutton();
            for (int i = 0; i < soluongnut; i++)
            {               
                dsbutton[i].Height = 270;
                dsbutton[i].Width = 270;
                dsbutton[i].Margin =new Thickness(42, 8, 8, 8); // canh khoảng cách giữa nút theo số lượng nút 42/8/8/8
                dsbutton[i].Name = "btn" + i.ToString();      
                dsbutton[i].Click += btn_click;
                if (i == sobt / 2)
                {
                    dem = 0;
                }
                dsbutton[i].Tag = dem;            
                dem++;
                Image im = new Image();
                BitmapImage bm = new BitmapImage();
                bm.BeginInit();
                bm.UriSource = new Uri(System.AppDomain.CurrentDomain.BaseDirectory + @"\Game\Hinh\Image\1.png"); //Đổi đường dẫn khi Build thành EXE
                bm.EndInit();
                im.Stretch = Stretch.Fill;
                im.Source = bm;             
                dsbutton[i].Content = im;           
            }
           
        }
        private void addhinhvaobutton()
        {
            int sobt = dsbutton.Count;
            int  demb = 0;
            for (int h = 0; h < sobt; h++)
            {
                if (h == sobt / 2)
                {
                    demb = 0;
                }
                ImageBrush ib1 = new ImageBrush();
                BitmapImage bmi = new BitmapImage();
                bmi.BeginInit();
                bmi.UriSource = new Uri(System.AppDomain.CurrentDomain.BaseDirectory  + @"\Game\Hinh\HinhC1\" + demb + ".png"); // đổi đường dẫn khi Build thành EXE
                bmi.EndInit();
                ib1.Transform = new ScaleTransform(.9677,.75);               
                ib1.ImageSource = bmi;             
                dsbutton[h].Background = ib1;                                         
                demb++;
            }
        }
        void hoandoi(List<Button> list)
        {
            Button tam;
            Random r = new Random();
            for (int i = 0; i < list.Count; i++)
            {
                tam = list[i];
                int songaunhien = r.Next(i, list.Count);
                list[i] = list[songaunhien];
                list[songaunhien] = tam;
                wrapluoi.Children.Add(list[i]);
            }
        }
        private void dieukiensai()
        {
            Thread.Sleep(225);
            this.Dispatcher.Invoke(() =>
            {
                Image im = new Image();
                BitmapImage bm = new BitmapImage();
                bm.BeginInit();
                bm.UriSource = new Uri(System.AppDomain.CurrentDomain.BaseDirectory + @"\Game\Hinh\Image\1.png");
                bm.EndInit();
                im.Stretch = Stretch.Fill;
                im.Source = bm;
                Button btn1 = new Button();
                Button btn2 = new Button();
                btn1 = (Button)LogicalTreeHelper.FindLogicalNode(wrapluoi, name1);
                btn1.Content = im;
                btn1.IsEnabled = true;
                Image im1 = new Image();
                BitmapImage bm1 = new BitmapImage();
                bm1.BeginInit();
                bm1.UriSource = new Uri(System.AppDomain.CurrentDomain.BaseDirectory + @"\Game\Hinh\Image\1.png"); //Đổi đường dẫn khi Build thành file EXE 
                bm1.EndInit();
                im1.Stretch = Stretch.Fill;
                im1.Source = bm;
                btn2 = (Button)LogicalTreeHelper.FindLogicalNode(wrapluoi, name2);
                btn2.Content = im1;
                btn2.IsEnabled = true;
            });
        }
        private void dieukienthang()
        {
            Thread.Sleep(225);        
            if (tongdiem == 4)
            {
                ChuyenCanh chuyencanh = new ChuyenCanh(true);
                chuyencanh.mangchoi = 1;
                this.Dispatcher.Invoke(() => {
                    this.Hide();
                    timer.Stop();
                });
                chuyencanh.ShowDialog();             
                //MessageBox.Show("Thắng");
            }
        }
        private void dieukiendung()
        {
            Thread.Sleep(225);
            this.Dispatcher.Invoke(() => {
                Button btn1 = new Button();
                Button btn2 = new Button();
                btn1 = (Button)LogicalTreeHelper.FindLogicalNode(wrapluoi, name1);
                btn1.Visibility = Visibility.Hidden;
                btn2 = (Button)LogicalTreeHelper.FindLogicalNode(wrapluoi, name2);
                btn2.Visibility = Visibility.Hidden;
                tongdiem++;
                tbdiem.Text = tongdiem.ToString();
            });
        }
        bool lan1 = false, lan2 = false;
        int value1 = 0, value2 = 0;
        string name1 = "", name2 = "";  
        void btn_click(object sender, EventArgs e)
        {
            if (lan1 != true)
            {
                lan1 = true;
                value1 = int.Parse((sender as Button).Tag.ToString());
                name1 = (sender as Button).Name.ToString();               
                (sender as Button).Content ="";
                (sender as Button).IsEnabled = false;                             
            }
            else if (lan2 != true)
            {
                lan2 = true;
                value2 = int.Parse((sender as Button).Tag.ToString());
                name2 = (sender as Button).Name.ToString();
                (sender as Button).Content = "";
                (sender as Button).IsEnabled = false;
                // xử lý đk đúng
                if (value1 == value2 && name1 != name2)
                {
                    // wrapluoi.Children.Remove((Button)LogicalTreeHelper.FindLogicalNode(wrapluoi, name1));
                    // wrapluoi.Children.Remove((Button)LogicalTreeHelper.FindLogicalNode(wrapluoi, name2));
                    Thread td = new Thread(dieukiendung);
                    td.SetApartmentState(ApartmentState.STA);
                    td.IsBackground = false;
                    td.Start();
                    SoundPlayer play = new SoundPlayer(System.AppDomain.CurrentDomain.BaseDirectory + @"\Game\Nhac\Win.wav"); // Đổi đường dẫn khi Build thành EXE
                    play.Load();
                    play.Play();
                    Thread thang = new Thread(dieukienthang);
                    thang.SetApartmentState(ApartmentState.STA);
                    thang.IsBackground = false;
                    thang.Start();
                }
                else
                {
                    Thread t = new Thread(dieukiensai);
                    t.SetApartmentState(ApartmentState.STA);
                    t.IsBackground = false;
                    t.Start();
                    SoundPlayer play = new SoundPlayer(System.AppDomain.CurrentDomain.BaseDirectory + @"\Game\Nhac\Close.wav");// đổi đường dẫn khi Build thành EXE
                    play.Load();
                    play.Play();
                }
                lan1 = lan2 = false;
            }           
        }
    }
}
