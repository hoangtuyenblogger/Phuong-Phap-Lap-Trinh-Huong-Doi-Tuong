#include<iostream>
#include <cstring>
#include<iomanip>
#include "dssv.h"
using namespace std;


float dssv::dtb()
{
	float tb = (van+toan)/2.0;
	return tb;
}

dssv::dssv()
{
	strcpy(hoten,"");
	van=0;
	toan=0;
	dtb();
	strcpy(xeploai,"");
}

dssv::dssv(char ten[], float diemvan, float diemtoan)
{
	strcpy(hoten,ten);
	van=diemvan;
	toan=diemtoan;
	dtb();
}

dssv::~dssv()
{
	cout<<endl;
}

void dssv::nhap()
{
	cout<<"Nhap ho ten : ";
	cin.getline(hoten,50);
	cout<<endl<<"Nhap diem van : ";
	cin>>van;
	cout<<endl<<"Nhap diem toan : ";
	cin>>toan;
	dtb();
	cin.ignore();
	// xep loai
	
	if(dtb()<5)
	{
		strcpy(xeploai,"yeu");
	}
	else
	{
		if(dtb()<6.5)
		{
			strcpy(xeploai,"trung binh");
		}
		else
		{
			if(dtb()<8)
			{
				strcpy(xeploai,"kha");
			}
			else
				strcpy(xeploai,"gioi");
		}
	}
}

void dssv::xuat()
{
	
	cout<<hoten<<setw(15)<<van<<setw(15)<<toan<<setw(15)<<dtb()<<setw(15)<<xeploai<<endl;
}



void dssv::diem_toan_gioi()
{
	if(toan>=8)
		xuat();
}


void dssv::cac_hs_yeu()
{
	int kiemtra = stricmp(xeploai,"yeu");
	if(kiemtra==0)
	{
		xuat();
	}
}

/*
bangdiem::bangdiem()
{
	dssv::dssv();
	n=0;
}

bangdiem::~dangdiem()
{
	cout<<endl;
}
void bangdiem::nhap()
{
	for(int i=0;i<n;i++)
	{
		dssv[i]::nhap();
	}
}
void bangdiem::xuat()
{
	for(int i=0;i<n;i++)
	{
		dssv[i]::xuat();
		cout<<endl;
	}
}

void bangdiem::xuattoangioi()
{
	
}
*/












