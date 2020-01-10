#include <iostream>
#include<iomanip>
#include <cstring>
#include"dssv.h"
using namespace std;

int main() 
{
	
	// tao menu
	int n;
	dssv hs[100];
	int chucnang;
	do
	{
		cout<<"1. Nhap thong tin sinh vien vao bang diem"<<endl;
		cout<<"2. Xuat bang diem"<<endl;
		cout<<"3. Trich bang diem nhung sinh vien co diem toan >=15"<<endl;
		cout<<"4. Trich bang diem nhung sinh vien xep loai yeu"<<endl;
		cin>>chucnang;
		system("cls");
		// kiem tra dieu kien nhap chuc nang
		while(chucnang<0 ||chucnang>4)
		{
			cout<<"Chuc nang khong hop le!!!, nhap lai chuc nang : ";
			cin>>chucnang;
			system("cls");
			
			cout<<endl;
		}
		switch(chucnang)
		{
			case(1):
				{
						// nhap so luong sinh vien trong bang diem
					cout<<"Nhap so luong sinh vien trong bang diem : ";
					cin>>n;
					cin.ignore();
					for(int i=0;i<n;i++)
					{
						cout<<"Nhap thong tin cho sinh vien thu "<<i+1<<endl;
						hs[i].nhap();
						system("cls");
					}
					break;
				}
			case(2):
				{
					// xuat thong tin cua n sinh vien
					cout<<"Ho ten"<<setw(15)<<"Diem van"<<setw(15)<<"Diem toan"<<setw(15)<<"Diem TB"<<setw(15)<<"Xep loai"<<endl;
					for(int i=0;i<n;i++)
					{
						hs[i].xuat();
					}
					break;
				}
			case(3):
				{
					for(int i=0;i<n;i++)
					{
						hs[i].diem_toan_gioi();
					}
					break;
				}
			case(4):
				{
					for(int i=0;i<n;i++)
					{
						hs[i].cac_hs_yeu();
					}
					break;
				}
		}
	}
	while(chucnang!=0);
	return 0;
}
