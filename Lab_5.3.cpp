#include <iostream>
using namespace std;

int main()
{
    int i, n, x, y, a[20];
	setlocale(LC_ALL, "Rus");
    cout << "Задайте кiлькiсть елементiв масиву: ";
    cin >> n;
	cout << "Введiть через пробiл елементи масиву у виглядi цiлих чисел: " << endl;
    for (i = 0; i < n; i++) cin >> a[i];
	x = 2147483647;
	y = -2147483648; 
	for (i = 0; i < n; i++) 
	{
		if (x > a[i]) x = a[i];
		if (y < a[i]) y = a[i];
  	}
	cout << "Найменше значення елементу масива: " << x << endl;
	cout << "Найбiльше значення елементу масива: " << y << endl;
    return 0;
}

