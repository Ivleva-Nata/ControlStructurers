#include<iostream>
#include<conio.h>
using namespace std;

#define tab "\t"

//#define NAMBER_TO_POWER
//#define ASCII
//#define Fibonacci_1
//#define Fibonacci_2
//#define Prime_nambers


void main()
{
	setlocale(LC_ALL, "Russian");



#ifdef NAMBER_TO_POWER
	int h, a, n;
	double H;
	cout << "Введите любое число: А= "; cin >> a;
	cout << "Введите показатель степени: n= "; cin >> n;

	h = 1;
	for (int i = 0; i < abs(n); i++)
	{
		h = h * a;
	}
	if (n >= 0)
	{
		cout << "Результат равен " << h << endl;
	}
	else //if (n < 0)
	{
		H = 1. / h;
		cout << "Результат равен " << H << endl;
		cout << '\t';
	}
#endif // NAMBER_TO_POWER

	
#ifdef ASCII

	cout << "Таблица ASCII-символов";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << i<< (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, " ");
#endif // ASCII

#ifdef Fibonacci_1
	int n;
	cout << "Введите предельное число ряда: "; cin >> n;
	for (int a = 0, b = 1, c = a = b; a < n; a = b, b = c, c = a, c = a + b)
		cout << a << "\t";
	cout << endl;

#endif // Fibonacci_1

#ifdef Fibonacci_2
	int n;
	cout << "Введите желаемое количество чисел ряда: "; cin >> n;
	for (long long int i = 0, a = 0, b = 1, c = a + b; i++ < n; a = b, b = c, c = a, c = a + b)
		cout << a << "\t";
	cout << endl;

#endif // Fibonacci_2

#ifdef Prime_nambers

	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << tab;

	}

	cout << endl;
#endif // Prime_nambers



}

