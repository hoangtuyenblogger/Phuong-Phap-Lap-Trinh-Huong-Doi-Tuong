#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;
 
int main()
{
	int a, c;
	int b;
	do
	{
		
		cin>>b;
		system("cls");
		
		
		
		
		srand(time(0));
		c= 1 + rand() %(6-1+1);
		a =1+ rand() % (6-1+1);
		cout<<a<<endl;
		cout<<c;
	}
	while(b!=0);
	return 0;
}
