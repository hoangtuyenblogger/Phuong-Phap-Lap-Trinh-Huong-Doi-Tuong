#include<iostream>
#include<math.h>
using namespace std;

class tamgiac
{
	private:
		float a, b, c;
	public:
		tamgiac();
		tamgiac(float& A, float& B, float& C);
		~tamgiac();
		void nhap();
		void xuat();
		float chuvi();
		float s();
		void phanloai();
			
};

int main()
{
	tamgiac abc;
	abc.nhap();
	abc.xuat();
	
	abc.phanloai();
	cout<<endl;
	cout<<"Chu vi tam giac abc la "<<abc.chuvi()<<endl;
	cout<<"Dien tich tam giac abc la "<<abc.s()<<endl;
	return 0;
}


tamgiac::tamgiac()
{
	a=0;
	b=0;
	c=0;
}

tamgiac::tamgiac(float& A, float& B, float& C)
{
	a=A;
	b=B;
	c=C;
}
tamgiac::~tamgiac()
{
	cout<<endl;
}


void tamgiac::nhap()
{
	cout<<"Nhap 3 canh cua tam giac :";
	cin>>a>>b>>c;
	while(a+b<c || a+c<b ||b+c<a)
	{
		cout<<"Tam giac vua nhap khong dung !"<<endl;
		cout<<"Nhap lai 3 canh cua tam giac :";
		cin>>a>>b>>c;
	}
}
void tamgiac::xuat()
{
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	cout<<"c= "<<c<<endl;
}
float tamgiac::chuvi()
{
	return a+b+c;
}
float tamgiac::s()
{
	float p=(a+b+c)/2.0;
	double dientich = p*(p-a)*(p-b)*(p-c);
	return sqrt(dientich);
}
void tamgiac::phanloai()
{
	if( a<b+c && b<a+c && c<a+b ){
        if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
            cout<<"Day la tam giac vuong";
        else if(a==b==c)
            cout<<"Day la tam giac deu";
        else if(a==b || a==c || b==c)
            cout<<"Day la tam giac can";
        else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)    
            cout<<"Day la tam giac tu";
        else
            cout<<"Day la tam giac nhon";
    }
    else
        cout<<"Ba canh a, b, c khong phai la ba canh cua mot tam giac";
}

