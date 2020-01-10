#include <iostream>
#include <cmath>
#include "PhanSo.h"
using namespace std;

void PhanSo::set(int a, int b)
{
	this->tuSo = a;
	this->mauSo = b;
}


PhanSo PhanSo::rutgon()
{
	int z = UCLN(tuSo, mauSo);
	return PhanSo(tuSo / z, mauSo / z);
}

int PhanSo::UCLN(int a, int b)
{
	int r;
	while (a % b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return b;
}


PhanSo PhanSo::operator-()
{
	return PhanSo(-tuSo, mauSo);
}

void PhanSo::chuanhoa()
{
	this->rutgon();
	if (this->tuSo < 0 && this->mauSo < 0)
	{
		this->tuSo = abs(this->tuSo);
		this->mauSo = abs(this->mauSo);
	}
	else
		if (this->mauSo < 0)
		{
			this->tuSo = -abs(this->tuSo);
			this->mauSo = abs(this->mauSo);
		}
}

PhanSo PhanSo::operator++()
{
	*this = *this + 1;
	return *this;
}

PhanSo PhanSo::operator++(int)
{
	PhanSo tmp = *this;
	++(*this);
	return tmp;
}

PhanSo PhanSo::operator--()
{
	*this = *this - 1;
	return *this;
}

PhanSo PhanSo::operator--(int)
{
	PhanSo tmp = *this;
	--(*this);
	return tmp;
}

PhanSo::PhanSo()
{
	tuSo = 0;
	mauSo = 1;
}

PhanSo::PhanSo(int t, int m)
{
	set(t, m);
}

PhanSo::PhanSo(int t)
{
	set(t, 1);
}

PhanSo::~PhanSo()
{
}