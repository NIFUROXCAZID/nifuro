#include <iostream>
#include <stdlib.h>
using namespace std;

struct complex
{
	float x; //real
	float y; //imagine
};

int showChoice()
{
	system("cls");
	cout << "Оберiть пункт меню вводом вiдповiдної цифри 1-4, та натиснiть Enter, для задання арифметичної операцiї.\n";
	cout << "Потiм введiть реальну та уявну частину першого комплексного числа через пробiл i натиснiть Enter.\n";
	cout << "А потiм так само друге комплексне число.\nНижче буде виведено результат операцiї.\n";
	cout << "Для повернення до головного меню натиснiть будь-яку клавiшу.\n";
	cout << "1. Add (Додавання).\n";
	cout << "2. Substruct (Вiднiмання).\n";
	cout << "3. Multiply (Множення)\n";
	cout << "4. Divide (Дiлення)\n";
	cout << "5. Завершення програми\n";
}

complex add(complex a, complex b)
{
	complex c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}

complex substruct(complex a, complex b)
{
	complex c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	return c;
}

complex multiply(complex a, complex b)
{
	complex c;
	c.x = a.x * b.x - a.y * b.y;
	c.y = a.x * b.y + b.x * a.y;
	return c;
}

complex divide(complex a, complex b)
{
	complex c;
	float d;
	d = b.x * b.x + b.y * b.y;
	c.x = (a.x * b.x + a.y * b.y) / d;
	c.y = (b.x * a.y - a.x * b.y) / d;
	return c;
}

int main()
{
	int n = 0;
	complex a, b, c;
	setlocale(LC_ALL, "Rus");
	while (1)
		switch (n)
		{
			case 1:
				c = add(a, b);
				cout << c.x << " " << c.y << endl;
				system("pause");
				n = 0;
				break;
			case 2:
				c = substruct(a, b);
				cout << c.x << " " << c.y << endl;
				system("pause");
				n = 0;
				break;
			case 3:
				c = multiply(a, b);
				cout << c.x << " " << c.y << endl; 
				system("pause");
				n = 0;
				break;
			case 4:
				c = divide(a, b);
				cout << c.x << " " << c.y << endl; 
				system("pause");
				n = 0;
				break;
			case 5:
				return 0;		
			default:;
				showChoice();
				cin >> n;
				if (n != 5) cin >> a.x >> a.y >> b.x >> b.y;
		}
}
