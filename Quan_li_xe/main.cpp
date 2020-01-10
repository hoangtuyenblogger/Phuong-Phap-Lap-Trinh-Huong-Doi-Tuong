#include<iostream>
#include"tuyen.h"
using namespace std;


int main()
{
	xe *contro_xe;
	xe *contro[1];

	
	contro_xe = new xe();
	contro_xe->xuat();
	delete contro_xe;
	
	contro_xe = new xetai();
	contro_xe->xuat();
	return 0;
}
