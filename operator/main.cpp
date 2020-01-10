
#include <iostream>
#include "hoangtuyen.h"
using namespace std;


int main()
{
    phanso a, b, c;
    cin>>a;
    cin>>b;
    c = a + b;
    cout<<"a + b ="<<a<<" + "<<b<<" = "<<c;
    return 0;
}

phanso operator+(phanso a, phanso b)
{
    a = a.rutgon();
    b = b.rutgon();
    phanso temp(a.tuso*b.mauso + a.mauso*b.tuso, a.mauso*b.mauso);
    temp = temp.rutgon();
    return temp;
}
 
phanso operator-(phanso a, phanso b)
{
    return phanso(a.rutgon()+b.rutgon()*-1).rutgon();
}
 
phanso operator*(phanso a, phanso b)
{
    a = a.rutgon();
    b = b.rutgon();
    phanso temp(a.tuso*b.tuso, a.mauso*b.mauso);
    temp = temp.rutgon();
    return temp;
}
 
phanso operator/(phanso a, phanso b)
{
    b = b.rutgon();
    return phanso(a.rutgon() * phanso(b.mauso, b.tuso)).rutgon();
}

ostream& operator << (ostream &out, phanso a)
{
    	if(a.mauso==1)
    	cout<<a.tuso<<endl;
    	else
    	cout<<a.tuso<<"/"<<a.mauso;
}
istream& operator >> (istream &in, phanso &a)
{
    
    cout<<"Nhap tu so : ";
    cin>>a.tuso;
    cout<<"Nhap mau so : ";
    cin>>a.mauso;
    while(a.mauso==0)
    {
    	cout<<"Mau so khong duoc bang 0, nhap lai mau so : ";
    	cin>>a.mauso;
	}
    return in;
}






















 /*
bool operator==(phanso a, phanso b)
{
    return (a.tuso*b.mauso == a.mauso*b.tuso);
}
 
bool operator!=(phanso a, phanso b)
{
    return !(a == b);
}
 
bool operator>(phanso a, phanso b)
{
    return (a.tuso*b.mauso>a.mauso*b.tuso);
}
 
bool operator>=(phanso a, phanso b)
{
    return (a > b || a == b);
}
 
bool operator<(phanso a, phanso b)
{
    return (a.tuso*b.mauso<a.mauso*b.tuso);
}
bool operator<=(phanso a, phanso b)
{
    return (a < b || a == b);
}
*/
