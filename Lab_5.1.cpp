#include <iostream>
using namespace std;

int main()
{
    int i, n, s, a[20];
	float v;
	setlocale(LC_ALL, "Rus");
    cout << "������� �i���i��� �������i� ������: ";
    cin >> n;
	cout << "����i�� ����� ����i� �������� ������ � ������i �i��� �����: " << endl;
    for (i = 0; i < n; i++) cin >> a[i]; 
	s = 0; v = 0;
	for (i = 0; i < n; i++) s = s + a[i];
	if (n != 0) v = (float)s / n;
	cout << "����� �������i� ������: " << s << endl;
	cout << "������ �������� �������i� ������: " << v << endl;
    return 0;
}
