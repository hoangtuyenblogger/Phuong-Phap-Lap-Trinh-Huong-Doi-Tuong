#include<iostream>
#include<cstring>
#include"quan_li_thu_vien.h"
using namespace std;

istream& operator >>(istream& nhap, date &d)
{
	cout<<"Nhap ngay sinh : ";
	nhap>>d.ngay;
	cout<<"Nhap thang sinh : ";
	nhap>>d.thang;
	cout<<"Nhap nam sinh : ";
	nhap>>d.nam;
}

ostream& operator <<(ostream& xuat, date d)
{
	xuat<<d.ngay<<"/"<<d.thang<<"/"<<d.nam;
}
// dinh nghia date
void nhap_date(date &d)
{
	cout<<"Nhap ngay sinh : ";
	cin>>d.ngay;
	cout<<"Nhap thang sinh : ";
	cin>>d.thang;
	cout<<"Nhap nam sinh : ";
	cin>>d.nam;
}

void xuat_date(date d)
{
	cout<<d.ngay<<"/"<<d.thang<<"/"<<d.nam;
}

// dinh nghia sach
sach::sach()
{
			masach=0;
			strcpy(tensach,"");
			strcpy(nhaxuatban,"");
			strcpy(theloai,"");
}

sach::~sach()
{
}

sach::sach(int _masach, char *_tensach, char *_nhaxuatban, char *_theloai)
{
	masach = _masach;
	strcpy(tensach,_tensach);
	strcpy(nhaxuatban, _nhaxuatban);
	strcpy(theloai, _theloai);
}

void sach::nhap()
{
	cout<<"Nhap ma sach : ";
	cin>>masach;
	cin.ignore();
	cout<<"Nhap ten sach : ";
	cin.getline(tensach,255);
}
void sach::xuat()
{
	cout<<masach<<"\t"<<tensach<<"\t"<<nhaxuatban<<"\t"<<theloai;
}
// doc gia

docgia::docgia()
{
	strcpy(hoten,"");
}
docgia::~docgia()
{
}


void docgia::nhap()
{
	int n;
	cout<<"Nhap ten doc gia : ";
	cin.getline(hoten,255);
	
	cin>>ngaysinh;
	
	cout<<"Nhap so luong sach da muon : ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"\t\t\t\tNhap thong tin cho cuon sach :\n\n";
		ds_sachmuon[i].nhap();
	}	
}
void docgia::xuat()
{
	cout<<"Ho ten: "<<hoten<<endl;
	cout<<"Ngay sinh : "<<ngaysinh;
	cout<<endl;
	
	cout<<"Ma sach"<<"\t"<<"ten sach"<<endl;
	for(int i=0;i<5;i++)
	{
		if(ds_sachmuon[i].masach != 0)
		{
			ds_sachmuon[i].xuat();
			cout<<endl;
		}
		
	}
}


















