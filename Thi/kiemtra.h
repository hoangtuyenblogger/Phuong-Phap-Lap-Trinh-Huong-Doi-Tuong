#pragma once
#include <iostream>
#include<string>
using namespace std;

class Cuoc_basic
{
	protected:
		float tg_goi;
		float luu_luong;
	public:
		Cuoc_basic();
		~Cuoc_basic();
		virtual void nhap(); // ke thua
		virtual void xuat(); // ke thua
		
		void Sudung(float _tg_goi, float _luu_luong);
		virtual float cuoc_dt(); // tg_goi * 1000
		virtual float cuoc_internet(); // luu_luong * 200
		float cuoc_tong();
};


class Data_free : public Cuoc_basic
{
	protected:
		float cuoc_thue_bao;
		float luu_luong_free;
		
	public:
		Data_free();
		~Data_free();
		void nhap();
		void xuat();
		float cuoc_luu_luong_vuot_nguong(); // ( luu luong - luu luong free ) * 200
		float cuoc_internet();       
		
		
};


class Data_fix : public Cuoc_basic
{
	public:
		
		void xuat();
		float cuoc_dt(); // Cuoc_basic::cuoc_dt * 0,1
		float cuoc_internet(); // return 1.000.000
};

class khach_hang
{
	private:
	string ten;
	string CMND;
	string diachi;
	Cuoc_basic *goi_cuoc;
	public:
		khach_hang();
		~khach_hang();
		void nhap();
		void xuat();
		float Tinh_cuoc_thang();
		void Su_dung(float _tg_goi, float _luu_luong);
	
};

class Hop_dong
{
	private:
		khach_hang *khach_hang_ne;
	public:
		Hop_dong();
		~Hop_dong();
		friend void dang_ky(Hop_dong &a);
		void thong_bao();
};
