#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
   string chuoi1 = "Hello";
   string chuoi2 = "Christmas";
   
   int n= 3;
   string s[3];
   for(int i=0;i<n;i++)
   {
   	getline(cin,s[i]);
   }
   
   for(int i=0;i<n;i++)
   {
   	cout<<s[i]<<endl;
   }

   return 0;
}
