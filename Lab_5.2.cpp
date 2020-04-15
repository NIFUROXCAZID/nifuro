#include <iostream>
using namespace std;

int main()
{
    int i, n, a[20];
	setlocale(LC_ALL, "Rus");
    cout << "Задайте кiлькiсть елементiв масиву: ";
    cin >> n;
	cout << "Введiть через пробiл елементи масиву у виглядi цiлих чисел: " << endl;
    for (i = 0; i < n; i++) cin >> a[i]; 
    for (i = 0; i < n / 2; i++) swap(a[i], a[n-i-1]); 
    cout << endl;
    for (i = 0; i < n; i++) cout << a[i] << " "; 
    cout << endl;
    return 0;
}
