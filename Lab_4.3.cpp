#include <iostream>
#include <stdlib.h>
using namespace std;

int showChoice()
{
	system("cls");
	cout << "����i�� ����� ���� ������ �i����i��� ����� 1-4,\n�� ������i�� Enter, ��� ������� ����������� ������i�.";
	cout << "���i� ����i�� ��� ����� ����� ����i� i ������i�� Enter.\n����� ���� �������� ��������� ������i�.";
	cout << "��� ���������� �� ��������� ���� ������i�� ����-��� ����i��.\n";
	cout << "1. Add (���������).\n";
	cout << "2. Substruct (�i��i�����).\n";
	cout << "3. Multiply (��������)\n";
	cout << "4. Divide (�i�����)\n";
	cout << "5. ���������� ��������\n";
}

float add(float a, float b)
{
	return a + b;
}

float substruct(float a, float b)
{
	return a - b;
}

float multiply(float a, float b)
{
	return a * b;
}

float divide(float a, float b)
{
	return a / b;
}

int main()
{
	int n = 0;
	float a, b;
	setlocale(LC_ALL, "Rus");
	while (1)
		switch (n)
		{
			case 1:
				cout << add(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 2:
				cout << substruct(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 3:
				cout << multiply(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 4:
				cout << divide(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 5:
				return 0;		
			default:;
				showChoice();
				cin >> n;
				if (n != 5) cin >> a >> b;
		}
}

