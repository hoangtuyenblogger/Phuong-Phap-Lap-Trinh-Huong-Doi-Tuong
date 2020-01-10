 #include<iostream>
 #include"tuyen.h"
 using namespace std;
 /* ------------ dinh nghia xe -----------*/
 xe::xe()
 {
 	namsx=0;
 	trongluong=0;
 }
 xe::xe(int _namsx, int _trongluong)
 {
 	namsx = _namsx;
 	trongluong = _trongluong;
 }
 
float xe::giathanh()
{
	return (namsx * 0,2) + trongluong;
}
void xe::xuat()
{
	cout<<"Nam san xuat : "<<namsx<<endl;
	cout<<"Trong luong : "<<trongluong<<endl;
	cout<<"Gia thanh : "<<giathanh()<<endl;
}

/* ------------ dinh nghia xe tai ke thua lop xe -----------*/
xetai::xetai() :xe()
{
	trongtai=0;
}
xetai::xetai(int _namsx, int _trongluong, int _trongtai) : xe(_namsx,_trongluong) // ke thua tu lop xe
{
	trongtai = _trongtai;
}
float xetai::giathanh()
{
	return trongtai * 200; // dinh nghia lai gia thanh cua lop xe tai
}
void xetai::xuat()
{
	xe::xuat(); // ke thua tu lop xe
	cout<<"Trong tai : "<<trongtai;
}
