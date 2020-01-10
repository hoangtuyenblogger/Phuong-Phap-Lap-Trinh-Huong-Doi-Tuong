#include<string>
#include <iostream>
#include<string>

using namespace std;
class nguoi
{
	private:
	string ten;
	string ngaysinh;
	public:
		nguoi();
		nguoi(string, string);
		void nhap();
		void xuat();
		virtual bool dk_khen_thuong() = 0;
		float chieu_cao_trung_binh();
};

class sinhvien : public nguoi
{
	private:
		string mssv;
		string lop;
		float ds_hoc_phan[2];
	public:
		sinhvien();
		sinhvien(string, string, string, string);
		void nhap();
		void xuat();
		float diem_tb();
		bool dk_khen_thuong();
		float chieu_cao_trung_binh();
};

class giangvien : public nguoi
{
	private:
		string msgv;
		string khoa;
		int so_bai_bao;
	public:
		giangvien();
		giangvien(string, string, int);
		void nhap();
		void xuat();
		bool dk_khen_thuong();
		float chieu_cao_trung_binh();
};
