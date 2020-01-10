#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;
#include"map.h"

game::game()
{
	ten= "";
	diem = 0;
}
void game::play()
{
	
	int random =1 + rand() % 6; // suc sac co 6 mat, random 1 gia tri 
	cout<<"Diem nhan duoc la : "<<random<<endl;
	diem +=random; // cong gia tri random vao diem
}




/* ---------- nguoi -----*/
gamer::gamer()
{
	::game();
}


/*----------- may --------*/
computer::computer()
{
	::game();
}

