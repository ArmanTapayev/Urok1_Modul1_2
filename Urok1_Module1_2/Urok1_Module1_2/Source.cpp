#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include<iomanip>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	system("color 1A");

	int n;

	do
	{
		cout << "\nВ работе содержится 5 заданий." << endl;
		cout << "\nДля выхода наберите 0." << endl;
		cout << endl;
		cout << "\nВведите номер задания: ";
		cin >> n;

		switch (n)
		{

			case 1:
			{
				cout << "\nЗадание №1" << endl;
				cout << endl;

				/*1. Найти значение функции y = 3*x^6 − 6*x^2 − 7 при данном значении x.*/

				double x;

					cout << "Введите действительное число x: ";
					cin >> x;

						cout << "3*x^6 - 6*x^2 - 7 = " << 3*pow(x, 6) - 6*pow(x, 2) - 7 << endl;

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 2:
			{
				cout << "\nЗадание №2" << endl;
				cout << endl;

				/*2. Найти значение функции y = 4*(x−3)^6 − 7*(x−3)^3 + 2 при данном значении x.*/

				double x, a;

				cout << "Введите действительное число x: ";
				cin >> x;

					a = x - 3;

					cout << "4*(x-3)^6 - 7*(x-3)^3 + 2 = " << 4 * pow(a, 6) - 7 * pow(a, 3) + 2 << endl;

				cout << endl;

				system("pause");
				system("cls");
			}
			break;

			case 3:
			{
				cout << "\nЗадание №3" << endl;
				cout << endl;

				/*3. Дано число A. Вычислить A^8, используя вспомогательную переменную
				и три операции умножения. Для этого последовательно находить A^2, A^4, A^8.
				Вывести все найденные степени числа A. */

				float A, x;

				cout << "Для вычисления значения А^8 введите значение А:\n";
				cout << "\nA = ";
				cin >> A;

					x = A*A;
					cout << "\nA^2 = " << x;

					x = x*x;
					cout << "\nA^4 = " << x;
				
					x = x*x;
					cout << "\nA^8 = " << x;

				cout << endl;

				system("pause");
				system("cls");

			}
			break;

		case 4:
		{
			cout << "\nЗадание №4" << endl;
			cout << endl;

			/*4. Дано число A. Вычислить A15, используя две вспомогательные переменные 
			и пять операций умножения. Для этого последовательно находить A2, A3, A5, A10, A15. 
			Вывести все найденные степени числа A.*/

			float A, x;
			cout << "Для вычисления значения А^15 введите значение А:\n";
			cout << "\nA = ";
			cin >> A;

				x = A*A;
				cout << "\nA^2 = " << x;

				A = A*x;
				cout << "\nA^3 = " << A;

				A = A*x;
				cout << "\nA^5 = " << A;

				x = A*A;
				cout << "\nA^10 = " << x;

				x = x*A;
				cout << "\nA^15 = " << x;

			cout << endl;

			system("pause");
			system("cls");

		}
		break;

		case 5:
		{
			cout << "\nЗадание №5" << endl;
			cout << endl;

			/*5. Дано значение температуры T в градусах Фаренгейта. 
			Определить значение этой же температуры в градусах Цельсия. 
			Температура по Цельсию TC и температура по Фаренгейту TF 
			связаны следующим соотношением: TC = (TF − 32)·5/9.*/

			float Tf, Tc;

			cout << "Программа переводит температуру из градусов Фаренгейта в градусы Цельсия.\n";
			cout << "Введите температуру в градусах Фаренгейта Tf:\n";
			cout << "\nTf = ";
			cin >> Tf;

				cout << endl;
				cout << "Температура Tf = " << Tf << " в градусах Цельсия Tc = " << (Tf - 32.0)*5.0 / 9.0 << endl;

			cout << endl;

			system("pause");
			system("cls");

		}
		break;

		}

	} while (n != 0);

	cout << endl;
	cout << "Спасибо!" << endl;
	cout << endl;

	system("pause");
}