
//#include<cstring>
using namespace std;
class nguoi
{
	private:
	string hoten;
	string ngaysinh;
	string trinhdo;
	string quequan;
	double CMND;
	public:
		nguoi();
		~nguoi(){};
		nguoi(string ten,string ngaysinhh,string trinhdoo,string quequann, double CMNDD);
		void nhap();
		void xuat();		
};
class GVCN : public nguoi
{
	private:
		double luongcung;
		double thuong;
		double phat;
		string lopCN;
	public:
		GVCN();
		~GVCN(){};
		void nhap();
		void xuat();
		double tinhluong();
};







