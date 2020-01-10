class dssv
{
	private:
		char hoten[50];
		char xeploai[30];
		float van, toan;
	private:
		float dtb();
	public:
		dssv();
		dssv(char ten[], float diemvan, float diemtoan);
		~dssv();
		void nhap();
		void xuat();
		void diem_toan_gioi();
		void cac_hs_yeu();
};


