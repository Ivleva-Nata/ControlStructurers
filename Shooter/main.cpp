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
	/*��
	� Solution 'ControlStructures' �������� ������ 'Shooter', � � ���� ������� ����������� ���������,
   ����������� �� ������� ������:
	w - ������=119
	s - �����=115
	a - �����=97
	d - ������=100
	space - ������=32
	enter - �����=13
	*/
	char key;
	do
	{
		key = _getch();
		if (key == 'w' || key == 'W' || key == UpArrow)cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow) cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow) cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow) cout << "������" << endl;
		else if (key == ' ')cout << "������" << endl;
		else if (key == Enter) cout << "�����" << endl;
	} while (key != Escape);
		


}


	
	 
		







