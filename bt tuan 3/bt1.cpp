#include<iostream>
using namespace std;
#include<string.h>


class bus
{
	private:
		char tenxe[256];
		char nhanhieu[256];
		int cho_ngoi;
	public:
		bus();
		bus(char ten[],char nhan[],int cho);
		~bus();
		void nhap();
		void xuat();
		friend void operator >>(operator&in, bus &b)
		{
			cout<<"Nhap xe!"<<endl;
			cout<<"Ten xe :";
			in.getline(tenxe,256);
			
			cout<<"Nhan hieu : ";
			in.getline(nhanhieu,256);
			
			cout<<"So cho ngoi :";
			in>>cho_ngoi;
			in.ignore();
		}
};


int main()
{
	bus b1, b2;
	b1.nhap();
	b2.nhap();
	b1.xuat();
	b2.xuat();
	return 0;
}

bus::bus()
{
	strcpy(tenxe,"");
	strcpy(nhanhieu,"");
	cho_ngoi=0;
}


bus::bus(char ten[],char nhan[],int cho)
{
	strcpy(tenxe,ten);
	strcpy(nhanhieu,nhan);
	cho_ngoi=cho;
}

void bus::nhap()
{
	cout<<"Nhap xe!"<<endl;
	cout<<"Ten xe :";
	cin.getline(tenxe,256);
	
	cout<<"Nhan hieu : ";
	cin.getline(nhanhieu,256);
	
	cout<<"So cho ngoi :";
	cin>>cho_ngoi;
	cin.ignore();
}

void bus::xuat()
{
	cout<<tenxe<<endl<<nhanhieu<<endl<<cho_ngoi<<endl;
}

bus::~bus(){
	cout<<endl;
}
















