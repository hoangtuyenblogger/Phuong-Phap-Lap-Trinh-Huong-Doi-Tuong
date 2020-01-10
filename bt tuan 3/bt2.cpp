#include<iostream>
using namespace std;

class Tong
{
	private:
			int n;
			int s;
	public:
			Tong()
				{
					n=0;
					s=0;
				}
			void nhap()
				{
					cout<<"Nhap n = ";
					cin>>n;
				}
			int sum()
				{
					for(int i=1;i<n+1;i++)
					{
						s+=i;
					}
					return s;
				}
};

int main()
{
	Tong s1;
	s1.nhap();
	cout<<"Tong la "<<s1.sum();
}
