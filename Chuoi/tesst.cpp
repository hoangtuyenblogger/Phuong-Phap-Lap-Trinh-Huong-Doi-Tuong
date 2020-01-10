#include<iostream>
using namespace std;
#include <string.h>
class hocsinh
{
	public:
		string ten;
		string ngaysinh;
		string diachi;
	public:
		hocsinh()
		{
			ten = "Chua co ten";
			ngaysinh = "dd/mm/yyyy";
			diachi = "Chua co dia chi";
		}
		hocsinh(string tenn, string ngaysinhh, string diachii)
		{
			ten = tenn;
			ngaysinh = ngaysinhh;
			diachi = diachii;
		}
		void nhap()
		{
			cout<<"Nhap ten :";
			getline(cin,ten);
			cout<<"Nhap ngay sinh :";
			getline(cin,ngaysinh);
			cout<<"Nhap dia chi :";
			getline(cin,diachi);
		}
		
		void xuat()
		{
			cout<<ten<<"\t"<<ngaysinh<<"\t"<<diachi<<endl;
		}
};


int main()
{
	int n;
	hocsinh DSSV[10];
	cout<<"Nhap so luong sinh vien : ";
	cin>>n;
	while(n>=10 || n < 0)
	{
		cout<<"So luong sinh vien khong duoc qua 10, nhap lai so luong sinh vien : ";
		cin>>n;
	}
	system("cls"); // xoa man hinh
	cin.ignore(); // xoa vung dem
	for(int i=0;i<n;i++)
	{
		DSSV[i].nhap();
		system("cls");
	}
	for(int i=0;i<n;i++)
	{
		DSSV[i].xuat();
	}
	
	
	string search;
	cout<<"Nhap ten sinh vien can tim :";
	getline(cin,search);
	for(int i=0;i<n;i++)
	{
		if(stricmp(*search,DSSV[i].ten)==0)
		{
			DSSV[i].xuat();
			break;
		}
	}
	
	return 0;
}
