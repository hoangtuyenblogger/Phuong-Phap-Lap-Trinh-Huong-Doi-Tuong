#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;
#include"sucsac_map.h"

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

void menu_nguoi(gamer gamer[], int n)
{
	cout<<"0. Dung choi ! \n";
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<". Nguoi "<<i+1<<" choi\n";
	}
	
	int chucnang=-1;
	do
	{
		cin>>chucnang;
		switch(chucnang)
		{
			case(1):
				{
					gamer[0].play();break;
				}
			case(2):
				{
					gamer[1].play();break;
				}
			case(3):
				{
					gamer[2].play();break;
				}
			case(4):
				{
					gamer[3].play();break;
				}
		}
	}
	while(chucnang != 0);
}
void menu_may(computer computer[], int n)
{
	int temp = 3-n;
	cout<<"0. Dung choi ! \n";
	for(int i=0;i<= temp;i++)
	{
		cout<<i+1<<". Nguoi "<<i+1<<" choi\n";
	}
	
	int chucnang=-1;
	do
	{
		cin>>chucnang;
		switch(chucnang)
		{
			case(1):
				{
					computer[0].play();break;
				}
			case(2):
				{
					computer[1].play();break;
				}
			case(3):
				{
					computer[2].play();break;
				}
			case(4):
				{
					computer[3].play();break;
				}
		}
	}
	while(chucnang != 0);
}

int max_nguoi(gamer nguoi[])
{
	int max = 1;
	for(int i=1;i<3;i++)
	{
		if(get_diem(nguoi[i])>max)
		{
			max = get_diem(nguoi[i]);
		}
	}
	return max;
}
int max_may(computer may[])
{
	int max = 1;
	for(int i=1;i<3;i++)
	{
		if(get_diem(may[i])>max)
		{
			max = get_diem(may[i]);
		}
	}
	return max;
}

int main() 
{
	int n;
	game sucsac; // tao ra 4 nguoi choi

	cout<<"Nhap so nguoi choi : ";
	cin>>n;
	while(n<0 || n>3)
	{
	cout<<"So luong nguoi choi khong qua 4 nguoi, nhap lai so nguoi choi : ";
	cin>>n;
	}
	gamer nguoichoi[n-1]; // tao nguoi choi
	computer may[3-n];	// tao may
					
	// menu
	system("cls");
	int chucnang=-1;
	do
	{
		cout<<"1. Nhap thong tin nguoi choi \n";
		cout<<"2. Nguoi choi\n";
		cout<<"3. May choi\n";
		cout<<"4. Xem ket qua\n";
		cin>>chucnang;
		cin.ignore();
		switch(chucnang)
		{
			case(1):
				{
					for(int i=0;i<n;i++)
					{
						nhap(nguoichoi[i]);
					}
					break;
				}
			case(2):
				{
					menu_nguoi(nguoichoi,n);
					cin.ignore();
					break;
				}
			case(3):
				{
					menu_may(may,n);
					break;
				}
			case(4):
				{
					break;
				}
		}
		
	}
	while(chucnang!=0);
	
}
