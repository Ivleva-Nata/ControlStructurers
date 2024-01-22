#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
#define Enter 13
#define Escape 27
#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77

	setlocale(LC_ALL, "Russian");
	/*ДЗ
	В Solution 'ControlStructures' добавить проект 'Shooter', и в этом проекте реализовать программу,
   реагирующую на нажатие клавиш:
	w - вперед=119
	s - назад=115
	a - влево=97
	d - вправо=100
	space - прыжок=32
	enter - огонь=13
	*/
	char key;
	do
	{
		key = _getch();
		if (key == 'w' || key == 'W' || key == UpArrow)cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow) cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow) cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow) cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == Enter) cout << "Огонь" << endl;
	} while (key != Escape);
		


}


	
	 
		







