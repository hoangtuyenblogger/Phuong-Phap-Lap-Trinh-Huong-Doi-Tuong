#include <iostream>
#include<string>
using namespace std;
#include"map.h"

/*------- lop nguoi ----------------*/
nguoi::nguoi()
{
	ten="";
	ngaysinh="";
}
nguoi::nguoi(string _ten, string _ngaysinh)
{
	ten = _ten;
	ngaysinh = _ngaysinh;
}
void nguoi::nhap()
{
	cout<<"Nhap ho ten : ";
	getline(cin,ten);
	cout<<"Nhap ngay sinh (dd/mm/yyyy) : ";
	getline(cin,ngaysinh);
}
void nguoi::xuat()
{
	cout<<"Ho ten : "<<ten<<endl;
	cout<<"Ngay sinh : "<<ngaysinh<<endl;
}
float nguoi::chieu_cao_trung_binh()
{
	return 165.6;
}


/*------ lop sinh vien -------*/
sinhvien::sinhvien() : nguoi()
{
	mssv="00000000";
	lop="0000";
}
sinhvien::sinhvien(string _ten, string _diachi, string _mssv, string _lop) : nguoi(_ten, _diachi)
{
	mssv = _mssv;
	lop = _lop;
}
void sinhvien::nhap()
{
	nguoi::nhap();
	cout<<"Nhap MSSV : ";
	getline(cin,mssv);
	cout<<"Nhap ten lop : ";
	getline(cin,lop);
	for(int i=0;i<3;i++)
	{
		cout<<"Nhap diem hoc phan "<<i+1<<" : ";
		cin>>ds_hoc_phan[i];
	}
	diem_tb();
}
float sinhvien::diem_tb()
{
	return (ds_hoc_phan[0]+ds_hoc_phan[1]+ds_hoc_phan[2])/3.0;
}
void sinhvien::xuat()
{
	nguoi::xuat();
	cout<<"MSSV: "<<mssv<<endl;
	cout<<"Lop: "<<lop<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Diem hoc phan "<<i+1<<" : ";
		cout<<ds_hoc_phan[i]<<endl;
	}
	cout<<"Diem trung binh hoc phan : "<<diem_tb()<<endl;
}

bool sinhvien::dk_khen_thuong()
{
	for(int i=0;i<3;i++)
	{
		if(diem_tb() > 8 && ds_hoc_phan[i] >= 5)
		{
			return true;
		}
		else
		{
			return false;

		}
	}
	
}
float sinhvien::chieu_cao_trung_binh()
{
	return nguoi::chieu_cao_trung_binh() + 10;
}

/*---- lop giang vien ----*/
void giangvien::nhap()
{
	nguoi::nhap();
	cout<<"Nhap MSGV: ";
	getline(cin,msgv);
	cout<<"Nhap ten khoa: ";
	getline(cin,khoa);
	cout<<"Nhap so bai bao: ";
	cin>>so_bai_bao;
}

void giangvien::xuat()
{
	nguoi::xuat();
	cout<<"MSGV: "<<msgv<<endl;
	cout<<"Khoa : "<<khoa<<endl;
	cout<<"So bai bao: "<<so_bai_bao<<endl;
}
bool giangvien::dk_khen_thuong()
{
	if(so_bai_bao > 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
