#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
using namespace std;

char y;

void main()

{
	setlocale(LC_ALL, "Russian");

start:

	cout << "Введите номер задания: ";
	int nz;
	cin >> nz;


	if (nz == 11)
	{
		// 11. Вычислить значение логического выражения при всех возможных значениях логических величин X и Y :
		// a.не(X и не Y) или X;
		// b.Y и не X или не Y
		//c.не Y и не X или Y


		int pz;
		cout << "введите номер подзадания: ";
		cin >> pz;

	podz:


		if (pz == 1)
		{
			int x, y;
			cout << "введите х: ";
			cin >> x;
			cout << "введите y: ";
			cin >> y;

			if ((!(x && !y)) || x)
			{
				cout << "Истина" << endl;
			}

			else
			{
				cout << "Ложь" << endl;
			}
			
		}
		else if (pz == 2)
		{
			int x, y;
			cout << "введите х: ";
			cin >> x;
			cout << "введите y: ";
			cin >> y;

			if (y && !x || !y)
			{
				cout << "Истина" << endl;
			}

			else
			{
				cout << "Ложь" << endl;
			}
			
		}
		else if (pz == 3)
		{

			int x, y;
			cout << "введите х: ";
			cin >> x;
			cout << "введите y: ";
			cin >> y;

			if (!y && !x || y)
			{
				cout << "Истина" << endl;
			}

			else
			{
				cout << "Ложь" << endl;
			}

		}
		else
		{
			cout << "Ошибка!" << endl;
			goto start;
		}



	}

	else if (nz == 12)
	{
		//12.	Составление логических выражений
		//a.Записать логические выражения, которые имеют значение "Истина" только при выполнении указанных условий :
		//i.х > 2 и у > 3;
		//ii.х > 1 или y> -2;
		//iii.х >= 0 и у < 5;
		//iv.х > 3 или x < -1;
		//v.х > 3 и x < 10;
		char pz;
		cout << "введите букву подзадания: ";
		cin >> pz;

		if (pz == 'a')
		{
		vvh:

			int cf;
			cout << endl << "введите номер подзадания: ";
			cin >> cf;

			if (cf == 1)
			{
				int x, y;
				cout << "введите x: ";
				cin >> x;
				cout << "введите y: ";
				cin >> y;

				cout << "указанное условие х > 2 и у > 3" << endl;

				if ((x > 2) && (y > 3))
				{
					cout << "истина" << endl;
				}

				else
				{
					cout << "ошибка: условие не выполнено!" << endl;

				}
				goto vvh;
			}

			else if (cf == 2)
			{
				int x, y;
				cout << "введите x: ";
				cin >> x;
				cout << "введите y: ";
				cin >> y;

				cout << "указанное условие х > 1 или y> -2" << endl;

				if ((x > 1) || (y > -2))
				{
					cout << "истина" << endl;
				}

				else
				{
					cout << "ошибка: условие не выполнено!" << endl;
				}
				goto vvh;
			}

			else if (cf == 3)
			{
				int x, y;
				cout << "введите x: ";
				cin >> x;
				cout << "введите y: ";
				cin >> y;

				cout << "указанное условие х >=0 и у < 5" << endl;

				if ((x >= 0) && (y < 5))
				{
					cout << "истина" << endl;
				}

				else
				{
					cout << "ошибка: условие не выполнено!" << endl;
				}
				goto vvh;
			}

			else if (cf == 4)
			{
				int x;
				cout << "введите x: ";
				cin >> x;


				cout << "указанное условие х > 3 или x < -1" << endl;

				if ((x > 3) || (x < -1))
				{
					cout << "истина" << endl;
				}

				else
				{
					cout << "ошибка: условие не выполнено!" << endl;
				}
				goto vvh;
			}

			else if (cf == 5)
			{
				int x;
				cout << "введите x: ";
				cin >> x;

				cout << "указанное условие х > 3 и x < 10;" << endl;

				if ((x > 3) && (x < 10))
				{
					cout << "истина" << endl;
				}

				else
				{
					cout << "ошибка: условие не выполнено!" << endl;
				}

			}

			else
			{
				cout << "такого подзадания не существует!" << endl;
			}
		}
		else if (pz == 'b')
		{
		navh:

			int cf;
			cout << endl;
			cout << "введите номер подзадания: ";
			cin >> cf;

			if (cf == 1)
			{
				int a, b;
				cout << "введите значение для a: ";
				cin >> a;
				cout << "введите значение для b: ";
				cin >> b;
				cout << "условие: каждое из чисел больше 100." << endl;

				if (a > 100 && b > 100)
				{
					cout << "истина" << endl;
				}

				else
				{
					cout << "ошибка, условие не выполнено!" << endl;
				}
				goto navh;
			}

			else if (cf == 2)
			{
				int a, b;
				cout << "введите значение для a: ";
				cin >> a;
				cout << "введите значение для b: ";
				cin >> b;
				cout << "условие: только одно из чисел А и В четное" << endl;

				if ((a != 0) && b != 0)
				{
					if ((a % 2 == 0) && (b % 2 != 0))
					{
						cout << "истина" << endl;
					}

					else if ((a % 2 != 0) && (b % 2 == 0))
					{
						cout << "истина" << endl;
					}

					else if ((a % 2 == 0) && (b % 2 == 0))
					{
						cout << "ошибка, условие не выполнено!" << endl;
					}

					else
					{
						cout << "ошибка, условие не выполнено!" << endl;
					}
					goto navh;
				}
				else
				{
					cout << "ошибка! скорее всего вы ввели ноль для значений" << endl;
					goto navh;
				}
			}

			else if (cf == 3)
			{
				int a, b;
				cout << "введите значение для a: ";
				cin >> a;
				cout << "введите значение для b: ";
				cin >> b;
				cout << "условие: хотя бы одно из чисел А и В положительно" << endl;

				if (a > 0 && b < 0)
				{
					cout << "истина" << endl;
				}
				else if (a < 0 && b > 0)
				{
					cout << "истина" << endl;
				}
				else if (a == 0 && b > 0)
				{
					cout << "истина" << endl;
				}
				else if (a > 0 && b == 0)
				{
					cout << "истина" << endl;
				}
				else if (a > 0 && b > 0)
				{
					cout << "ошибка, оба ваших числа больше нуля" << endl;
				}


				else if (a == 0 && b == 0)
				{
					cout << "ошибка, условие не выполнено, т.к. оба ваших числа равны нулю" << endl;
				}
				else
				{
					cout << "ошибка, условие не выполнено" << endl;
				}
				goto navh;
			}

			else if (cf == 4)
			{
				int a, b, c;
				cout << "введите значение для a: ";
				cin >> a;
				cout << "введите значение для b: ";
				cin >> b;
				cout << "введите значение для c: ";
				cin >> c;
				cout << "условие: каждое из чисел А, В, С кратно трем" << endl;

				if ((a != 0) && (b != 0) && (c != 0))
				{
					if ((a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0))
					{
						cout << "истина" << endl;
					}


					else
					{
						cout << "ошибка, условие не выполнено" << endl;
					}

					goto navh;
				}
				else
				{
					cout << "ошибка, скорее всего вы ввели для значений ноль" << endl;
				}
				goto navh;
			}

			else if (cf == 5)
			{
				int a, b, c;
				cout << "введите значение для a: ";
				cin >> a;
				cout << "введите значение для b: ";
				cin >> b;
				cout << "введите значение для c: ";
				cin >> c;
				cout << "условие: только одно из чисел А, В и С меньше 50" << endl;

				if ((a < 50) && (b > 50) && (c > 50))
				{
					cout << "истина" << endl;
				}
				else if ((a > 50) && (b < 50) && (c > 50))
				{
					cout << "истина" << endl;
				}
				else if ((a > 50) && (b > 50) && (c < 50))
				{
					cout << "истина" << endl;
				}
				else
				{
					cout << "ошибка, условие не выполнено!" << endl;
				}

				goto navh;
			}

			else if (cf == 6)
			{
				int a, b, c;
				cout << "введите значение для a: ";
				cin >> a;
				cout << "введите значение для b: ";
				cin >> b;
				cout << "введите значение для c: ";
				cin >> c;
				cout << "условие: хотя бы одно из чисел А, В, С отрицательно." << endl;

				if ((a < 0) && (b > 0) && (c > 0))
				{
					cout << "истина" << endl;
				}
				else if ((a > 0) && (b < 0) && (c > 0))
				{
					cout << "истина" << endl;
				}
				if ((a > 0) && (b > 0) && (c < 0))
				{
					cout << "истина" << endl;
				}
				else
				{
					cout << "ошибка, условие не выполнено" << endl;
				}
			}

			else
			{
				cout << "такого подзадания не существует!" << endl;
			}
		}
		else if (pz == 'c')
		{
		qw:

			int cf;
			cout << endl;
			cout << "введите номер подзадания: ";
			cin >> cf;
			if (cf == 1)
			{
				int a, b;
				cout << "введите значение для x: ";
				cin >> a;
				cout << "введите значение для y: ";
				cin >> b;
				cout << "условие: каждое из чисел X и Y нечетное;" << endl;

				if ((a != 0) && b != 0)
				{
					if ((a % 2 != 0) && (b % 2 != 0))
					{
						cout << "истина" << endl;
					}

					else
					{
						cout << "ошибка, условие не выполнено!" << endl;
					}
					goto qw;
				}
				else
				{
					cout << "ошибка! скорее всего вы ввели ноль для значений" << endl;
					goto qw;
				}

			}
			else if (cf == 2)
			{
				int a, b;
				cout << "введите значение для x: ";
				cin >> a;
				cout << "введите значение для y: ";
				cin >> b;

				cout << "условие: только одно из чисел X и Y меньше 20" << endl;

				if ((a < 20) && (b > 20))
				{
					cout << "истина" << endl;
				}
				else if ((a > 20) && (b < 20))
				{
					cout << "истина" << endl;
				}
				else
				{
					cout << "ошибка, условие не выполнено!" << endl;
				}

				goto qw;
			}
			else if (cf == 3)
			{
				int x, y;
				cout << "введите значение для x: ";
				cin >> x;
				cout << "введите значение для y: ";
				cin >> y;

				cout << "условие: хотя бы одно из чисел X и Y равно нулю" << endl;

				if (x == 0 && y != 0)
				{
					cout << "истина" << endl;
				}
				else if (x != 0 && y == 0)
				{
					cout << "истина" << endl;
				}
				else
				{
					cout << "ошибка, условие не выполнено" << endl;
				}
				goto qw;
			}
			else if (cf == 4)
			{
				int x, y, z;
				cout << "введите значение для x: ";
				cin >> x;
				cout << "введите значение для y: ";
				cin >> y;
				cout << "введите значение для z: ";
				cin >> z;

				cout << "условие: каждое из чисел X, Y, Z отрицательное" << endl;

				if ((x < 0) && (y < 0) && (z < 0))
				{
					cout << "истина" << endl;
				}
				else
				{
					cout << "ошибка, условие не выполнено" << endl;
				}
				goto qw;

			}
			else if (cf == 5)
			{
				int x, y, z;
				cout << "введите значение для x: ";
				cin >> x;
				cout << "введите значение для y: ";
				cin >> y;
				cout << "введите значение для z: ";
				cin >> z;
				cout << "условие: только одно из чисел x, y, z кратно пяти" << endl;

				if ((x % 5 == 0) && (y % 5 != 0) && (z % 5 != 0) || (y == 0) || (z == 0))
				{
					cout << "истина" << endl;
				}
				else if ((x % 5 != 0) && (y % 5 == 0) && (z % 5 != 0) || (x == 0) || (z == 0))
				{
					cout << "истина" << endl;
				}
				else if ((x % 5 != 0) && (y % 5 != 0) && (z % 5 == 0) || (y == 0) || (x == 0))
				{
					cout << "истина" << endl;
				}
				else
				{
					cout << "ошибка, условие не выполнено" << endl;
				}
				goto qw;

			}
			else if (cf == 6)
			{
				int x, y, z;
				cout << "введите значение для x: ";
				cin >> x;
				cout << "введите значение для y: ";
				cin >> y;
				cout << "введите значение для z: ";
				cin >> z;
				cout << "условие: хотя бы одно из чисел X, Y, Z больше 100." << endl;

				if ((x > 100) && (y < 100) && (z < 100))
				{
					cout << "истина" << endl;
				}
				else if ((x < 100) && (y > 100) && (z < 100))
				{
					cout << "истина" << endl;
				}
				else if ((x < 100) && (y < 100) && (z > 100))
				{
					cout << "истина" << endl;
				}
				else
				{
					cout << "ошибка, условие не выполнено!" << endl;
				}


			}
			else
			{
				cout << "такого подзадания не существует!" << endl;
			}



		}
		else
		{
			cout << "такого задание нет!" << endl;
		}
	}

	else
	{
		cout << "такого задания не существует или оно было сделано в классе)" << endl;
	}

	cout << "Хотите продолжить y/n?";
	cin >> y;

	if (y == 'y')
	{
		system("cls");
		goto start;
	}

	else
	{
		cout << "ошибка!";
		goto start;

	}

}