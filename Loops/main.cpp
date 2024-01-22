#include<iostream>
#include<conio.h>
using namespace std;

//#define FACTORIAL
//#define  MULTIPLICATION_TABLE
//#define PYTHAGORAS_TABLE


void main()
{
	setlocale(LC_ALL, "");

#ifdef FACTORIAL
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	int f = 1;
	for (int i = 1; i < n; i++)
	{
		cout << i << "!= ";
		f *= i;
		cout << f << "\n";
	}
	cout << endl;
#endif // FACTORIAL
#ifdef MULTIPLICATION_TABLE
	int n = 10;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << "*" << j << " = " << i * j << endl;
		}

		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

#ifdef PYTHAGORAS_TABLE
	int n = 10;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i * j << "\t";
		}

		cout << endl;
	}
#endif // PYTHAGORAS_TABLE


}

