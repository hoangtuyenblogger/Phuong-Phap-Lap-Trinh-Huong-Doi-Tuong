#include<iostream>
#include<cstring>
#include "tuyen.h"
using namespace std;

nguoi::nguoi()
{
	hoten = "chua co ten";
	ngaysinh = "dd/mm/yyyy";
	quequan = "k co que quan";
	trinhdo= "k co trinh do";
	CMND = 000000000;
}

nguoi::nguoi(string ten,string ngaysinhh,string trinhdoo,string quequann, double CMNDD)
{
	hoten =ten;
	hoten =ngaysinhh;
	hoten =quequann;
	hoten =trinhdoo;
	CMND = CMNDD;
}

void nguoi::nhap()
{
	// code nhap o day
	cout<<"Nhap ten : ";
	getline(cin,this->hoten);
	cout<<"Nhap  nam sinh : ";
	getline(cin,this->ngaysinh);
	cout<<"Nhap trinh do ";
	getline(cin,this->trinhdo);
	cout<<"Nhap so CMND : ";
	cin>>CMND;
}

void nguoi::xuat()
{
	// code xuat o day
	cout<<hoten<<"\t"<<ngaysinh<<"\t"<<trinhdo<<"\t"<<CMND;
}



GVCN::GVCN()
{
	::nguoi();
	luongcung=0;
	thuong=0;
	phat=0;
	lopCN = "Chua co lop chu nhiem";
}
double GVCN::tinhluong()
{
	return luongcung+thuong-phat;
}

void GVCN::nhap()
{
	nguoi::nhap();
	cout<<"Nhap luong cung : ";
	cin>>luongcung;
	cout<<"Nhap tien thuong : ";
	cin>>thuong;
	cout<<"Nhap tien phat : ";
	cin>>phat;
	cout<<"Nhap lop chu nhiem : ";
	cin.ignore();
	getline(cin,lopCN);
}

void GVCN::xuat()
{
	nguoi::xuat();
	cout<<luongcung<<"\t"<<thuong<<"\t"<<phat<<"\t"<<lopCN<<endl;
}

