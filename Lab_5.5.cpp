#include <iostream>
using namespace std;

int main()
{
    int i, j, n, a[20][20], l, r;
	setlocale(LC_ALL, "Rus");
    cout << "������� ����i� ��������� ������i: ";
    cin >> n;
	cout << "����i�� ����� ����i� �������� ������ � ������i �i��� �����: " << endl;
    for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) cin >> a[i][j];
	l = 0; r = 0;
	for (i = 0; i < n; i++) l = l + a[i][i];
	for (i = 0; i < n; i++) r = r + a[i][n-i-1];
	cout << "���� �i�� �i������i ������i: " << l << endl;
	cout << "���� ����� �i������i ������i: " << r << endl;
    return 0;
}


