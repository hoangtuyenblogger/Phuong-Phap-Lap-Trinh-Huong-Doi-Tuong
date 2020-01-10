#pragma once
#include <iostream>
using namespace std;
class PhanSo
{
private:
	int tuSo;
	int mauSo;
	int UCLN(int, int);
public:
	PhanSo();
	PhanSo(int t, int m);
	PhanSo(int t);
	~PhanSo();
	void set(int, int);
	PhanSo rutgon();
	void chuanhoa();
	friend PhanSo operator+(PhanSo a, PhanSo b);
	friend PhanSo operator-(PhanSo a, PhanSo b);
	friend PhanSo operator*(PhanSo a, PhanSo b);
	friend PhanSo operator/(PhanSo a, PhanSo b);

	friend bool operator == (PhanSo a, PhanSo b);
	friend bool operator != (PhanSo a, PhanSo b);
	friend bool operator > (PhanSo a, PhanSo b);
	friend bool operator >= (PhanSo a, PhanSo b);
	friend bool operator < (PhanSo a, PhanSo b);
	friend bool operator <= (PhanSo a, PhanSo b);

	PhanSo operator ++();
	PhanSo operator ++(int);
	PhanSo operator --();
	PhanSo operator --(int);

	PhanSo operator-();

	friend ostream& operator << (ostream& os, PhanSo a);
	friend istream& operator >> (istream& is, PhanSo& a);
};