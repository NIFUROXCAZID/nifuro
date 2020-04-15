#include <iostream>
using namespace std;

int main()
{
    int i, n, s, a[20];
	float v;
	setlocale(LC_ALL, "Rus");
    cout << "Задайте кiлькiсть елементiв масиву: ";
    cin >> n;
	cout << "Введiть через пробiл елементи масиву у виглядi цiлих чисел: " << endl;
    for (i = 0; i < n; i++) cin >> a[i]; 
	s = 0; v = 0;
	for (i = 0; i < n; i++) s = s + a[i];
	if (n != 0) v = (float)s / n;
	cout << "Сумма елементiв масиву: " << s << endl;
	cout << "Середнє значення елементiв масиву: " << v << endl;
    return 0;
}
