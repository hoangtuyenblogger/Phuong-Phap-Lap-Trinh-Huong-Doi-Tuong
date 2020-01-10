#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;
#include"map.h"

int get_diem(game a)
{
	return a.diem;
}
void nhap(game &a)
{
	cout<<"Nhap ten : ";
	cin>>a.ten;
}
void xuat(game a)
{
	cout<<"Diem cua "<<a.ten<<" la :"<<a.diem;
}
void nhap(computer &a, int id)
{
	a.ten = "May " + id;
}

int main() 
{
	
	game sucsac[3];
	
	int n;
	cout<<"Nhap so nguoi choi : ";
	cin>>n;
	while(n<0 || n>3)
	{
		cout<<"So luong nguoi choi khong qua 4 nguoi, nhap lai so nguoi choi : ";
		cin>>n;
	}
	gamer nguoichoi[n-1];
	computer may[4-n];
	
	
	int chucnang;
	do
	{
		cout<<"1. Nhap thong tin cho nguoi\n";
		cout<<"2. Tiep tuc choi\n";
		cin>>chucnang;
		cin.ignore();
		switch(chucnang)
		{
			case(1):
				{
					
					// nhap thong tin cho nguoi choi
					for(int i=0;i<n;i++)
					{
						nhap(nguoichoi[i]);
					}
					// nhap thong tin cho may
					for(int i=0;i<4-n;i++)
					{
						nhap(may[i],i);
						cout<<"Dang nhap";
					}
				}
		}
		
	}
	while(chucnang!=2);
	
	
	/*
	game sucsac;
	gamer nguoi1;
	computer may1;
	
	nguoi1.nhap();
	srand(time(0)); // thay doi random theo thoi gian chay chuong trinh
	nguoi1.play();
	
	srand(time(0)); // thay doi random theo thoi gian chay chuong trinh
	may1.play();
	
	int kt = get_diem(nguoi1) - get_diem(may1); 
	cout<<"Diem cua nguoi choi la : "<<get_diem(nguoi1)<<endl;
	cout<<"Diem cua may : "<<get_diem(may1)<<endl; 
	
	if(kt > 0)
	{
		cout<<"Nguoi thang !";
	}
	else if(kt == 0)
	{
		cout<<"Nguoi va may hoa nhau\n";
	}
	else
	{
		cout<<"May thang !";
	}
	*/
	
}
