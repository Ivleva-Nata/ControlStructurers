#include<iostream>
#include<conio.h>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define CHANGING_SIGNS
//#define TRIANGLE_4
//#define STAR_RHOMBUS // не полый, но - из двух треугольников.....
//#define CHESS // но без рамочки.....

#define STAR_CHESS_RAW // сырой, без окантовки
//#define EMPTY_RHOMBUS_WITH_SLASHES

void main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "Введите размер фигуры: "; cin >> n; cout << '\n';
#ifdef SQUARE
	int n, k;
	cout << "Введите высоту прямоугольника n=  ";   cin >> n;
	cout << "Введите ширину прямоугольника k=  ";   cin >> k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif // SQUARE
#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1
#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;

	}

#endif // TRIANGLE_2
#ifdef TRIANGLE_3

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";

		cout << endl;
	}
#endif // TRIANGLE_3
#ifdef CHANGING_SIGNS

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == j % 2)cout << "+ "; else cout << "- ";
		}
		cout << endl;
	}
#endif // CHANGING_SIGNS

	//ДЗ от 17.12.2023

#ifdef TRIANGLE_4

	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";

		cout << endl;
	}

#endif // TRIANGLE_4
	
#ifdef STAR_RHOMBUS// НО - он НЕ полый!!!!!!!!!!!...........
	int a = 0, k;
	cout << endl;
	for (int i = 8; i > 0; i--)
	{

		for (int j = 0; j < i; j++)
		{
			cout << ' ';
		}
		for (k = 0; k <= a * 2; k++)
		{
			cout << '*';

		}
		cout << endl;
		a++;

	}
	for (int i = 0; i <=8; i++)
	{

		for (int j = 0; j < i; j++)
		{
			cout << ' ';
		}
		for ( int k = 0; k <= a * 2; k++)
		{
			cout << '*';

		}
		cout << endl;
		a--;

	}




#endif // STAR_RHOMBUS


#ifdef CHESS
		setlocale(LC_ALL, "C");
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if ((j % 2 == 0 && i % 2 == 0) || (j % 2 != 0 && i % 2 != 0))
					cout << (char)219;
				else
					cout << " ";
			}
			cout << endl;
		}
		setlocale(LC_ALL, " ");
#endif // CHESS


#ifdef STAR_CHESS_RAW
		int k;
		//cout << "Введите количество клеток n= "; cin >> n;
		cout << "Введите размер клетки k = "; cin >> k;

		for (int i = 0; i < k * n; i++)
		{
			for (int l = 0; l < n; l++)
			{
				if (((i / k) % 2 + l) % 2 == 0)
				{
					for (int j = 0; j < k; j++)
						cout << "* ";
				}
				else
				{
					for (int j = 0; j < k; j++)
						cout << "  ";
				}
			}
			cout << endl;
		}

#endif // STAR_CHESS_RAW

#ifdef EMPTY_RHOMBUS_WITH_SLASHES

		int i;
		//cout << "Введите длину стороны ромба  n = ";		cin >> n;

		for (i = 0; i < n; ++i)
		{
			for (int j = 0; j < n - i - 1; ++j)	cout << " ";cout << "/";
			for (int j = 0; j < i * 2; ++j)		cout << " ";cout << "\\";
			cout << endl;
		}
		for (--i; i >= 0; --i)
		{
			for (int j = 0; j < n - i - 1; ++j)	cout << " ";cout << "\\";
			for (int j = 0; j < i * 2; ++j)		cout << " "; cout << "/";
			cout << endl;
		}


#endif // EMPTY_RHOMBUS_WITH_SLASHES


		

		
}


			
		
	

//Ctrl + F7 - компиляция
//Ctrl + F5 - запуск
