#include "quan_li_thu_vien.h"
#include<iostream>
using namespace std;


istream& operator>>(iostream&in,ngaythang &n)
{
	cout<<"Nhap ngay:";
	in>>n.ngay;
	cout<<"Nhap thang:";
	in>>n.thang;
	cout<<"Nhap nam:";
	in>>n.nam;
}
ostream &operator <<(ostream&ou, ngaythang n)
{
	cout<<n.ngay<<"\t"<<n.thang<<"\t"<<n.nam;
}

/* ----------------------- sach ------------------*/
sach::sach()
{
	masach = 0;
	tensach = "";
	nhaxuatban = "";
	theloai ="";
}

sach::sach(int _masach, string _tensach, string _nhaxuatban, string _theloai)
{
	masach = _masach;
	tensach = _tensach;
	nhaxuatban = _nhaxuatban;
	theloai = _theloai;
}
void sach::nhap()
{
	cout<<"Nhap ma sach : ";
	cin>>masach;
	cin.ignore();
	
	cout<<"Nhap ten sach : ";
	getline(cin,tensach);
	
	cout<<"Nhap nha xuat ban :";
	getline(cin,nhaxuatban);
	
	cout<<"Nhap the loai : ";
	getline(cin,theloai);
}

void sach::xuat()
{
	cout<<masach<<"\t"<<tensach<<"\t"<<nhaxuatban<<"\t"<<theloai<<endl;
}




/*----------------------------------- doc gia ------------------------*/
docgia::docgia()
{
	hoten = "";
	ngaysinh.ngay = 0;
	ngaysinh.thang =0;
	ngaysinh.nam = 0;
	danhsach_sachmuon[0]; // chua muon cuon sach nao 
}
docgia::~docgia()
{
}

docgia::docgia(string ten, year _ngaysinh)
{
	hoten = ten;
	ngaysinh = _ngaysinh;
}

void docgia::nhap()
{
	cout<<"Nhap ten doc gia : ";
	getline(cin,hoten);
	ngaysinh.nhap();
}










