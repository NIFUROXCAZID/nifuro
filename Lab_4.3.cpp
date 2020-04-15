#include <iostream>
#include <stdlib.h>
using namespace std;

int showChoice()
{
	system("cls");
	cout << "Оберiть пункт меню вводом вiдповiдної цифри 1-4,\nта натиснiть Enter, для задання арифметичної операцiї.";
	cout << "Потiм введiть два числа через пробiл i натиснiть Enter.\nНижче буде виведено результат операцiї.";
	cout << "Для повернення до головного меню натиснiть будь-яку клавiшу.\n";
	cout << "1. Add (Додавання).\n";
	cout << "2. Substruct (Вiднiмання).\n";
	cout << "3. Multiply (Множення)\n";
	cout << "4. Divide (Дiлення)\n";
	cout << "5. Завершення програми\n";
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

