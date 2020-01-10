#include<iostream>
using namespace std;

class xedap
{
	protected:
		int namsx;
		int trongluong;
	public:
		xedap()
		{
			namsx=0;
			trongluong=0;
		}
		xedap(int, int);
		float giathanh();
		void xuat();
};

class xedapdien : public xedap
{
	private:
		int dungluongpin;
	public:
		xedapdien()
		{
			::xedap();
			dungluongpin=0;
		}
		xedapdien(int, int, int);
		float giathanh();
		void xuat();
};
int main()
{
	xedap xedap1;
	xedap1.xuat();
	
	cout<<"\n\n Xe dap dien : \n";
	xedapdien xe1;
	xe1(1,1,1);
	xe1.xuat();
	return 0;
}

// dinh nghia xe dap
xedap::xedap(int _namsx, int _trongluong)
{
	namsx = _namsx;
	trongluong = _trongluong;
}
float xedap::giathanh()
{
	return trongluong * 10;
}

void xedap::xuat()
{
	cout<<"Nam san xuat : "<<namsx<<endl;
	cout<<"Trong luong : "<<trongluong<<endl;
	cout<<"Gia thanh : "<<giathanh()<<endl;
}

// dinh nghia xe dap dien ( ke thua xe dap )
xedapdien::xedapdien(int _namsx, int _trongluong, int _dungluongpin) : xedap(_namsx,_trongluong)
{
	
	dungluongpin = _dungluongpin;
}
float xedapdien::giathanh()
{
	return xedap::giathanh() + 100;
}
void xedapdien::xuat()
{
	xedap::xuat();
	cout<<"Dung luong pin : "<<dungluongpin<<endl;
}
