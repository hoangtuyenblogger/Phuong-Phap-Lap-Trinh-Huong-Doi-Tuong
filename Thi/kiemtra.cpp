#include <iostream>
#include<string>
#include"kiemtra.h"
using namespace std;

/*------------------ Cuoc Basic --------------*/
khach_hang::khach_hang()
{
	ten ="";
	CMND ="";
	diachi = "";
}
khach_hang::~khach_hang()
{
	
}

void khach_hang::nhap()
{
	cout<<"Nhap ten khach hang : ";
	getline(cin,ten);
	cout<<"Nhap so CMND : ";
	getline(cin,CMND);
	cout<<"Nhap dia chi : ";
	getline(cin,diachi);
	// xu li goi cuoc
	int temp;
	cout<<endl;
	cout<<"1. Dang ki goi cuoc Basic\n";
	cout<<"2. Dang ki goi cuoc Data Free\n";
	cout<<"3. Dang ki goi cuoc Data Fix\n";
	cout<<"Xin moi chon goi cuoc : ";
	cin>>temp;
	if(temp == 1)
	{
		goi_cuoc = new Cuoc_basic;
	}
	else if(temp == 2)
	{
		goi_cuoc = new Data_free;
	}
	else if(temp == 3)
	{
		goi_cuoc = new Data_fix;
	}
	
	if(temp == 1 || temp == 2) // goi 1 va 2 phai nhap thong tin, con goi 3 ( data fix ) la goi co dinh nen k can nhap
	{
		goi_cuoc->nhap();
	}
	
}
void khach_hang::xuat()
{
	cout<<"Ho ten khach hang: "<<ten<<endl;
	cout<<"CMND : "<<CMND<<endl;
	cout<<"Dia chi : "<<diachi<<endl;
	cout<<"Thong tin goi cuoc : ";goi_cuoc->xuat();
	cout<<endl;
}
float khach_hang::Tinh_cuoc_thang()
{
	return goi_cuoc->cuoc_tong();
}

void khach_hang::Su_dung(float _tg_goi, float _luu_luong)
{
	goi_cuoc->Sudung(_tg_goi,_luu_luong);
}





/*------------------ Cuoc Basic --------------*/
Cuoc_basic::Cuoc_basic() // ham tao gia tri mac dinh
{
	tg_goi=0;
	luu_luong=0;
}
Cuoc_basic::~Cuoc_basic() // ham huy
{
	
}
void Cuoc_basic::nhap()
{
	cout<<"Nhap tong thoi gian cuoc goi : ";
	cin>>tg_goi;
	cout<<"Nhap luu luong da su dung : ";
	cin>>luu_luong;
}
void Cuoc_basic::xuat()
{
	cout<<"Thoi gian goi : "<<tg_goi<<endl;
	cout<<"Luu luong da su dung : "<<luu_luong<<endl;
	cout<<"Tong cuoc : "<<cuoc_tong();
}
void Cuoc_basic::Sudung(float _tg_goi, float _luu_luong)
{
	tg_goi = _tg_goi;
	luu_luong = _luu_luong;
}
float Cuoc_basic::cuoc_dt()
{
	return tg_goi * 1000;
}
float Cuoc_basic::cuoc_internet()
{
	return luu_luong * 200;
}

float Cuoc_basic::cuoc_tong()
{
	float tong = cuoc_dt() + cuoc_internet();
	float VAT = tong * 0.1;
	return tong + VAT;
}



/*------------------ Data free --------------*/
Data_free::Data_free()
{
	tg_goi=0;
	luu_luong=0;
	cuoc_thue_bao=0;
	luu_luong_free =0;
}
Data_free::~Data_free()
{
	
}
void Data_free::nhap()
{
	Cuoc_basic::nhap();
	cout<<"Nhap cuoc thue bao : ";
	cin>>cuoc_thue_bao;
	cout<<"Nhap luu luong mien phi :";
	cin>>luu_luong_free;
}
void Data_free::xuat()
{
	Cuoc_basic::xuat();
	cout<<"Cuoc thue bao : "<<cuoc_thue_bao<<endl;
	cout<<"Luu luong mien phi : "<<luu_luong_free<<endl;
	
}
float Data_free::cuoc_luu_luong_vuot_nguong()
{
	float luu_luong_vuot_nguong = luu_luong - luu_luong_free; // tinh luu luong vuot nguong
	if(luu_luong_vuot_nguong > 0) // kiem tra xem co ton tai luu luong vuot nguong hay khong
	{
		return luu_luong_vuot_nguong * 200;	
	} 
	else
	{
		return 0;
	}
}
float Data_free::cuoc_internet()
{
	if(luu_luong >= luu_luong_free)
	{
		return cuoc_thue_bao;
	}
	else if(luu_luong > luu_luong_free)
	{
		return cuoc_thue_bao + cuoc_luu_luong_vuot_nguong();
	}
}



/*------------------Data Fix---------------------*/
float Data_fix::cuoc_dt()
{
	return Cuoc_basic::cuoc_dt() * 0,1;
}
float Data_fix::cuoc_internet()
{
	return 1000000;
}
void Data_fix::xuat()
{
	cout<<"Cuoc dien thoai : "<<cuoc_dt()<<endl;
	cout<<"Cuoc internet : "<<cuoc_internet();
	cout<<"Tong cuoc "<<cuoc_tong();
}


/*-----------------------Hop dong -------------------*/
Hop_dong::Hop_dong()
{
	khach_hang_ne = new khach_hang;
}
Hop_dong::~Hop_dong()
{
}


void dang_ky(Hop_dong &a)
{
	cout<<"\t\t----------------DANG KI HOP DONG THUE BAO KHACH HANG ---------------\n";
	a.khach_hang_ne->nhap();
	cout<<endl;
}

void Hop_dong::thong_bao()
{
	cout<<"\t\t----------------THONG TIN HOP DONG----------------\n";
	khach_hang_ne->xuat();
	cout<<"Tien cuoc moi thang : "<<khach_hang_ne->Tinh_cuoc_thang();
	cout<<endl;
}
