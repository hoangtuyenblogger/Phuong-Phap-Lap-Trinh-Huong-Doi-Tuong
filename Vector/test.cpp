#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int x=-1;
	vector<int> vector_ne;
	while(x!=0)
	{
		cout<<"Nhap gia tri : ";
		cin>>x;
		vector_ne.push_back(x);
	}
	cout<<"Vector co do dai la : "<<vector_ne.size()<<endl;
	vector<int>::iterator i;
	for(i = vector_ne.begin();i != vector_ne.end();i++)
	{
		cout<<*i<<" ";
	}
	return 0;
}
