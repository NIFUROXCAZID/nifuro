#include <iostream>
using namespace std;

int main()
{
    int i, j, n, a[20][20], l, r;
	setlocale(LC_ALL, "Rus");
    cout << "Задайте розмiр квадратної матрицi: ";
    cin >> n;
	cout << "Введiть через пробiл елементи масиву у виглядi цiлих чисел: " << endl;
    for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) cin >> a[i][j];
	l = 0; r = 0;
	for (i = 0; i < n; i++) l = l + a[i][i];
	for (i = 0; i < n; i++) r = r + a[i][n-i-1];
	cout << "Сума лiвої дiагоналi матрицi: " << l << endl;
	cout << "Сума правої дiагоналi матрицi: " << r << endl;
    return 0;
}


