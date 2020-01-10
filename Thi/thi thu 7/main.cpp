#include <iostream>
#include<string>
#include "map.h"
using namespace std;




int main() 
{
	
	sinhvien sv[100];
	giangvien gv[100];
	int n, m;
	
	
// menu
	int chucnang=-1;
	do
	{
		cout<<"1. Nhap thong tin sinh vien\n";
		cout<<"2. Nhap thong tin giang vien\n";
		cout<<"3. In danh sach khen thuong\n";
		cout<<"Chon chuc nang: ";
		cin>>chucnang;
		system("cls");
		switch(chucnang)
		{
			case(1):
				{
					cout<<"Nhap so luong sinh vien : ";
					cin>>n;
					fflush(stdin);
					// duyet sinh vien
					for(int i=0;i<n;i++)
					{
						cout<<"-----Nhap thong tin cho sinh vien thu "<<i+1<<" :-----"<<endl;
						sv[i].nhap();
						fflush(stdin);
						system("cls");
					}
					break;
				}
			case(2):
				{
						cout<<"\t\t\t-----Nhap thong tin cho sinh vien thu "<<+1<<" :-----"<<endl;
						cout<<"Nhap so luong giang vien: ";
						cin>>m;
						fflush(stdin);
						// duyet giang vien
						for(int j=0;j<m;j++)
						{
							cout<<"\t\t\t-----Nhap thong tin cho sinh vien thu "<<j+1<<" :-----"<<endl;
							gv[j].nhap();
							fflush(stdin);
							system("cls");
						}
						break;
				}
			case(3):
				{
					cout<<"-------- Danh sach cac sinh vien va giao vien duoc khen thuong -------\n";
					// duyet sinh vien
					for(int i=0;i<n;i++)
					{
						if(sv[i].dk_khen_thuong() == true)
						{
							sv[i].xuat();
							cout<<"------------------------------------------\n";
						}
					}
					break;
					/*duyet giang vien
					for(int j=0;j<m;j++)
					{
						if(gv[j].dk_khen_thuong() == true)
						{
							gv[j].xuat();
							cout<<"------------------------------------------\n";
						}
					}
					break;
					*/
				}
		}
	}
	while(chucnang!=0);
	
	
	return 0;
}
