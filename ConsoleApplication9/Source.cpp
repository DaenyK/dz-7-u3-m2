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

	cout << "������� ����� �������: ";
	int nz;
	cin >> nz;


	if (nz == 11)
	{
		// 11. ��������� �������� ����������� ��������� ��� ���� ��������� ��������� ���������� ������� X � Y :
		// a.��(X � �� Y) ��� X;
		// b.Y � �� X ��� �� Y
		//c.�� Y � �� X ��� Y


		int pz;
		cout << "������� ����� ����������: ";
		cin >> pz;

	podz:


		if (pz == 1)
		{
			int x, y;
			cout << "������� �: ";
			cin >> x;
			cout << "������� y: ";
			cin >> y;

			if ((!(x && !y)) || x)
			{
				cout << "������" << endl;
			}

			else
			{
				cout << "����" << endl;
			}
			
		}
		else if (pz == 2)
		{
			int x, y;
			cout << "������� �: ";
			cin >> x;
			cout << "������� y: ";
			cin >> y;

			if (y && !x || !y)
			{
				cout << "������" << endl;
			}

			else
			{
				cout << "����" << endl;
			}
			
		}
		else if (pz == 3)
		{

			int x, y;
			cout << "������� �: ";
			cin >> x;
			cout << "������� y: ";
			cin >> y;

			if (!y && !x || y)
			{
				cout << "������" << endl;
			}

			else
			{
				cout << "����" << endl;
			}

		}
		else
		{
			cout << "������!" << endl;
			goto start;
		}



	}

	else if (nz == 12)
	{
		//12.	����������� ���������� ���������
		//a.�������� ���������� ���������, ������� ����� �������� "������" ������ ��� ���������� ��������� ������� :
		//i.� > 2 � � > 3;
		//ii.� > 1 ��� y> -2;
		//iii.� >= 0 � � < 5;
		//iv.� > 3 ��� x < -1;
		//v.� > 3 � x < 10;
		char pz;
		cout << "������� ����� ����������: ";
		cin >> pz;

		if (pz == 'a')
		{
		vvh:

			int cf;
			cout << endl << "������� ����� ����������: ";
			cin >> cf;

			if (cf == 1)
			{
				int x, y;
				cout << "������� x: ";
				cin >> x;
				cout << "������� y: ";
				cin >> y;

				cout << "��������� ������� � > 2 � � > 3" << endl;

				if ((x > 2) && (y > 3))
				{
					cout << "������" << endl;
				}

				else
				{
					cout << "������: ������� �� ���������!" << endl;

				}
				goto vvh;
			}

			else if (cf == 2)
			{
				int x, y;
				cout << "������� x: ";
				cin >> x;
				cout << "������� y: ";
				cin >> y;

				cout << "��������� ������� � > 1 ��� y> -2" << endl;

				if ((x > 1) || (y > -2))
				{
					cout << "������" << endl;
				}

				else
				{
					cout << "������: ������� �� ���������!" << endl;
				}
				goto vvh;
			}

			else if (cf == 3)
			{
				int x, y;
				cout << "������� x: ";
				cin >> x;
				cout << "������� y: ";
				cin >> y;

				cout << "��������� ������� � >=0 � � < 5" << endl;

				if ((x >= 0) && (y < 5))
				{
					cout << "������" << endl;
				}

				else
				{
					cout << "������: ������� �� ���������!" << endl;
				}
				goto vvh;
			}

			else if (cf == 4)
			{
				int x;
				cout << "������� x: ";
				cin >> x;


				cout << "��������� ������� � > 3 ��� x < -1" << endl;

				if ((x > 3) || (x < -1))
				{
					cout << "������" << endl;
				}

				else
				{
					cout << "������: ������� �� ���������!" << endl;
				}
				goto vvh;
			}

			else if (cf == 5)
			{
				int x;
				cout << "������� x: ";
				cin >> x;

				cout << "��������� ������� � > 3 � x < 10;" << endl;

				if ((x > 3) && (x < 10))
				{
					cout << "������" << endl;
				}

				else
				{
					cout << "������: ������� �� ���������!" << endl;
				}

			}

			else
			{
				cout << "������ ���������� �� ����������!" << endl;
			}
		}
		else if (pz == 'b')
		{
		navh:

			int cf;
			cout << endl;
			cout << "������� ����� ����������: ";
			cin >> cf;

			if (cf == 1)
			{
				int a, b;
				cout << "������� �������� ��� a: ";
				cin >> a;
				cout << "������� �������� ��� b: ";
				cin >> b;
				cout << "�������: ������ �� ����� ������ 100." << endl;

				if (a > 100 && b > 100)
				{
					cout << "������" << endl;
				}

				else
				{
					cout << "������, ������� �� ���������!" << endl;
				}
				goto navh;
			}

			else if (cf == 2)
			{
				int a, b;
				cout << "������� �������� ��� a: ";
				cin >> a;
				cout << "������� �������� ��� b: ";
				cin >> b;
				cout << "�������: ������ ���� �� ����� � � � ������" << endl;

				if ((a != 0) && b != 0)
				{
					if ((a % 2 == 0) && (b % 2 != 0))
					{
						cout << "������" << endl;
					}

					else if ((a % 2 != 0) && (b % 2 == 0))
					{
						cout << "������" << endl;
					}

					else if ((a % 2 == 0) && (b % 2 == 0))
					{
						cout << "������, ������� �� ���������!" << endl;
					}

					else
					{
						cout << "������, ������� �� ���������!" << endl;
					}
					goto navh;
				}
				else
				{
					cout << "������! ������ ����� �� ����� ���� ��� ��������" << endl;
					goto navh;
				}
			}

			else if (cf == 3)
			{
				int a, b;
				cout << "������� �������� ��� a: ";
				cin >> a;
				cout << "������� �������� ��� b: ";
				cin >> b;
				cout << "�������: ���� �� ���� �� ����� � � � ������������" << endl;

				if (a > 0 && b < 0)
				{
					cout << "������" << endl;
				}
				else if (a < 0 && b > 0)
				{
					cout << "������" << endl;
				}
				else if (a == 0 && b > 0)
				{
					cout << "������" << endl;
				}
				else if (a > 0 && b == 0)
				{
					cout << "������" << endl;
				}
				else if (a > 0 && b > 0)
				{
					cout << "������, ��� ����� ����� ������ ����" << endl;
				}


				else if (a == 0 && b == 0)
				{
					cout << "������, ������� �� ���������, �.�. ��� ����� ����� ����� ����" << endl;
				}
				else
				{
					cout << "������, ������� �� ���������" << endl;
				}
				goto navh;
			}

			else if (cf == 4)
			{
				int a, b, c;
				cout << "������� �������� ��� a: ";
				cin >> a;
				cout << "������� �������� ��� b: ";
				cin >> b;
				cout << "������� �������� ��� c: ";
				cin >> c;
				cout << "�������: ������ �� ����� �, �, � ������ ����" << endl;

				if ((a != 0) && (b != 0) && (c != 0))
				{
					if ((a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0))
					{
						cout << "������" << endl;
					}


					else
					{
						cout << "������, ������� �� ���������" << endl;
					}

					goto navh;
				}
				else
				{
					cout << "������, ������ ����� �� ����� ��� �������� ����" << endl;
				}
				goto navh;
			}

			else if (cf == 5)
			{
				int a, b, c;
				cout << "������� �������� ��� a: ";
				cin >> a;
				cout << "������� �������� ��� b: ";
				cin >> b;
				cout << "������� �������� ��� c: ";
				cin >> c;
				cout << "�������: ������ ���� �� ����� �, � � � ������ 50" << endl;

				if ((a < 50) && (b > 50) && (c > 50))
				{
					cout << "������" << endl;
				}
				else if ((a > 50) && (b < 50) && (c > 50))
				{
					cout << "������" << endl;
				}
				else if ((a > 50) && (b > 50) && (c < 50))
				{
					cout << "������" << endl;
				}
				else
				{
					cout << "������, ������� �� ���������!" << endl;
				}

				goto navh;
			}

			else if (cf == 6)
			{
				int a, b, c;
				cout << "������� �������� ��� a: ";
				cin >> a;
				cout << "������� �������� ��� b: ";
				cin >> b;
				cout << "������� �������� ��� c: ";
				cin >> c;
				cout << "�������: ���� �� ���� �� ����� �, �, � ������������." << endl;

				if ((a < 0) && (b > 0) && (c > 0))
				{
					cout << "������" << endl;
				}
				else if ((a > 0) && (b < 0) && (c > 0))
				{
					cout << "������" << endl;
				}
				if ((a > 0) && (b > 0) && (c < 0))
				{
					cout << "������" << endl;
				}
				else
				{
					cout << "������, ������� �� ���������" << endl;
				}
			}

			else
			{
				cout << "������ ���������� �� ����������!" << endl;
			}
		}
		else if (pz == 'c')
		{
		qw:

			int cf;
			cout << endl;
			cout << "������� ����� ����������: ";
			cin >> cf;
			if (cf == 1)
			{
				int a, b;
				cout << "������� �������� ��� x: ";
				cin >> a;
				cout << "������� �������� ��� y: ";
				cin >> b;
				cout << "�������: ������ �� ����� X � Y ��������;" << endl;

				if ((a != 0) && b != 0)
				{
					if ((a % 2 != 0) && (b % 2 != 0))
					{
						cout << "������" << endl;
					}

					else
					{
						cout << "������, ������� �� ���������!" << endl;
					}
					goto qw;
				}
				else
				{
					cout << "������! ������ ����� �� ����� ���� ��� ��������" << endl;
					goto qw;
				}

			}
			else if (cf == 2)
			{
				int a, b;
				cout << "������� �������� ��� x: ";
				cin >> a;
				cout << "������� �������� ��� y: ";
				cin >> b;

				cout << "�������: ������ ���� �� ����� X � Y ������ 20" << endl;

				if ((a < 20) && (b > 20))
				{
					cout << "������" << endl;
				}
				else if ((a > 20) && (b < 20))
				{
					cout << "������" << endl;
				}
				else
				{
					cout << "������, ������� �� ���������!" << endl;
				}

				goto qw;
			}
			else if (cf == 3)
			{
				int x, y;
				cout << "������� �������� ��� x: ";
				cin >> x;
				cout << "������� �������� ��� y: ";
				cin >> y;

				cout << "�������: ���� �� ���� �� ����� X � Y ����� ����" << endl;

				if (x == 0 && y != 0)
				{
					cout << "������" << endl;
				}
				else if (x != 0 && y == 0)
				{
					cout << "������" << endl;
				}
				else
				{
					cout << "������, ������� �� ���������" << endl;
				}
				goto qw;
			}
			else if (cf == 4)
			{
				int x, y, z;
				cout << "������� �������� ��� x: ";
				cin >> x;
				cout << "������� �������� ��� y: ";
				cin >> y;
				cout << "������� �������� ��� z: ";
				cin >> z;

				cout << "�������: ������ �� ����� X, Y, Z �������������" << endl;

				if ((x < 0) && (y < 0) && (z < 0))
				{
					cout << "������" << endl;
				}
				else
				{
					cout << "������, ������� �� ���������" << endl;
				}
				goto qw;

			}
			else if (cf == 5)
			{
				int x, y, z;
				cout << "������� �������� ��� x: ";
				cin >> x;
				cout << "������� �������� ��� y: ";
				cin >> y;
				cout << "������� �������� ��� z: ";
				cin >> z;
				cout << "�������: ������ ���� �� ����� x, y, z ������ ����" << endl;

				if ((x % 5 == 0) && (y % 5 != 0) && (z % 5 != 0) || (y == 0) || (z == 0))
				{
					cout << "������" << endl;
				}
				else if ((x % 5 != 0) && (y % 5 == 0) && (z % 5 != 0) || (x == 0) || (z == 0))
				{
					cout << "������" << endl;
				}
				else if ((x % 5 != 0) && (y % 5 != 0) && (z % 5 == 0) || (y == 0) || (x == 0))
				{
					cout << "������" << endl;
				}
				else
				{
					cout << "������, ������� �� ���������" << endl;
				}
				goto qw;

			}
			else if (cf == 6)
			{
				int x, y, z;
				cout << "������� �������� ��� x: ";
				cin >> x;
				cout << "������� �������� ��� y: ";
				cin >> y;
				cout << "������� �������� ��� z: ";
				cin >> z;
				cout << "�������: ���� �� ���� �� ����� X, Y, Z ������ 100." << endl;

				if ((x > 100) && (y < 100) && (z < 100))
				{
					cout << "������" << endl;
				}
				else if ((x < 100) && (y > 100) && (z < 100))
				{
					cout << "������" << endl;
				}
				else if ((x < 100) && (y < 100) && (z > 100))
				{
					cout << "������" << endl;
				}
				else
				{
					cout << "������, ������� �� ���������!" << endl;
				}


			}
			else
			{
				cout << "������ ���������� �� ����������!" << endl;
			}



		}
		else
		{
			cout << "������ ������� ���!" << endl;
		}
	}

	else
	{
		cout << "������ ������� �� ���������� ��� ��� ���� ������� � ������)" << endl;
	}

	cout << "������ ���������� y/n?";
	cin >> y;

	if (y == 'y')
	{
		system("cls");
		goto start;
	}

	else
	{
		cout << "������!";
		goto start;

	}

}