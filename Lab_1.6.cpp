#include <iostream>
using namespace std;
int main()
{
	int y, m, d;
	cout << "Input count days: ";
	cin >> d;
	y = d / 365;
	m = (d % 365) / 30;
	d = (d % 365) % 30;
	cout << "Years: " << y << " Month: " << m << " Days: " << d << endl;
	return 0;
}
