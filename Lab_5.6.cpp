#include <iostream>
using namespace std;

int main()
{
    int i, j, m, n, a[20][20], b[20][20], c[20][20];
	setlocale(LC_ALL, "Rus");
    cout << "������� ����i� ��������� ������i: ";
    cin >> m >> n;
	cout << "����i�� ����� ����i� �������� ������� ������ � ������i �i��� �����: " << endl;
    for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) cin >> a[i][j];
	cout << "����i�� ����� ����i� �������� ������� ������ � ������i �i��� �����: " << endl;
    for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) cin >> b[i][j];
	for (i = 0; i < m; i++) 
		for (j = 0; j < n; j++) c[i][j] = a[i][j] + b[i][j];
 	for (i = 0; i < m; i++)
	{	
		cout << endl;
		for (j = 0; j < n; j++) cout << c[i][j] << " ";
	}	 
    return 0;
}

