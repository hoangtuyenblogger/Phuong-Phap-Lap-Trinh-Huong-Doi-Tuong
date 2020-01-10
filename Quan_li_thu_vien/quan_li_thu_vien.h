#include<iostream>
using namespace std;
class date
{
	private:
	int ngay;
	int thang;
	int nam;
	public:
		date()
	{
		ngay =0;
		thang=0;
		nam=0;
	}
		friend void nhap_date(date &d);
		friend void xuat_date(date d);
		friend istream& operator >>(istream& nhap, date &d);
		friend ostream& operator <<(ostream& xuat, date d);
};





class sach
{
	public:
		int masach;
		char tensach[255];
		char nhaxuatban[255];
		char theloai[30];
	public:
		sach();
		~sach();
		sach(int _masach, char *_tensach, char *_nhaxuatban, char *_theloai);
		void nhap();
		void xuat();
};

class docgia
{
	private:
		char hoten[255];
		date ngaysinh;
		sach ds_sachmuon[5];
	public:
		
		docgia();
		~docgia();
		void nhap();
		void xuat();
};
