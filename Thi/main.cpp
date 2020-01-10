#include <iostream>
#include<string>
#include"kiemtra.h"
using namespace std;

int main() 
{ 
	Hop_dong ds_hop_dong[10];
	int i =0;
	int chucnang;
	do
	{
		
		cout<<"\t\t\t\t\t1. Dang ki hop dong\n";
		cout<<"\t\t\t\t\t2. Xem thong bao hop dong\n";
		cout<<"\t\t\t\t\tChon chuc nang : ";
		cin>>chucnang;
		switch(chucnang)
		{
			case(1):
				{
					cin.ignore();
					dang_ky(ds_hop_dong[i]);
					i++;
					break;
				}
			case(2):
				{
					int temp;
					cout<<"Trong danh sach co "<<i<<" ban hop dong, nhap hop dong muon xem : ";
					cin>>temp;
					ds_hop_dong[temp-1].thong_bao();
					break;
				}
		}
	}
	while(chucnang!=0);
	
	return 0;
}
