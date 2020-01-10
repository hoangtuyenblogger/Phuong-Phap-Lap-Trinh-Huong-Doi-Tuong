#include<string>
class nguoi
{
	private:
	string ten;
	string ngaysinh;
	public:
		virtual void nhap();
		virtual void xuat();
};

class sinhvien : public nguoi
{
	private:
		string mssv;
		string lop;
		float ds_hoc_phan[2];
	public:
		void nhap();
		void xuat();
		float diem_tb();
		bool dk_khen_thuong();
}

class giangvien : public nguoi
{
	private:
		string msgv;
		string khoa;
		int so_bai_bao;
	public:
		void nhap();
		void xuat();
		bool dk_khen_thuong();
}
