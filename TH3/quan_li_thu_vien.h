#ifndef QUAN_LI_THU_VIEN_H
#define QUAN_LI_THU_VIEN_H
#include<iostream>
using namespace std;

class ngaythang
{
	private:
	int ngay;
	int thang;
	int nam;
	public:
	ngaythang();
	~ngaythang();
	friend istream& operator>>(iostream&in,ngaythang &n);
	friend istream& operator>>(iostream&in,ngaythang &n);
};
//typedef ngaythang year;

class sach
{
	private:
		int masach;
		string tensach;
		string nhaxuatban;
		string theloai;
	public:
		sach();
		~sach();
		sach(int _masach, string _tensach, string _nhaxuatban, string _theloai);
		void nhap();
		void xuat();
};



class docgia
{
	private:
		string hoten;
		ngaythang ngaysinh;
		sach *ds_sachmuon;
	public:
		
		docgia();
		~docgia();
		docgia(string ten, ngaythang _ngaysinh);
		void nhap();
		void xuat();
		void search();
};

#endif
