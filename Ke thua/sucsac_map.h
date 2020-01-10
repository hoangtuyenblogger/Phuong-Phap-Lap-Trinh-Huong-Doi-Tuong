#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;

class game
{
	protected:
		int diem;
		string ten;
	public:
		game();
		void play();
		friend void nhap(game &a);
		friend void xuat(game a);
		friend int get_diem(game a);
		
};

class gamer : public game
{
	public:
		gamer();
};

class computer : public game
{
	public:
		computer();
};
