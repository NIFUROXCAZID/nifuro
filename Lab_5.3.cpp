#include <iostream>
using namespace std;

int main()
{
    int i, n, x, y, a[20];
	setlocale(LC_ALL, "Rus");
    cout << "������� �i���i��� �������i� ������: ";
    cin >> n;
	cout << "����i�� ����� ����i� �������� ������ � ������i �i��� �����: " << endl;
    for (i = 0; i < n; i++) cin >> a[i];
	x = 2147483647;
	y = -2147483648; 
	for (i = 0; i < n; i++) 
	{
		if (x > a[i]) x = a[i];
		if (y < a[i]) y = a[i];
  	}
	cout << "�������� �������� �������� ������: " << x << endl;
	cout << "����i���� �������� �������� ������: " << y << endl;
    return 0;
}

