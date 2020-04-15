#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c, d, x1, x2;
	cout << "Input a b c to find the roots of the equation: ";
	cin >> a;
	cin >> b;
	cin >> c;
	d = pow(b, 2) - 4 * a * c;
	if (d < 0)
	{
		cout << "No roots real numbers." << endl;
		return 1;
	}
	cout << "Discriminant: " << d << endl;
	if (d == 0)
	{
		x1 = -b / (2 * a);
		cout << "One root: " << x1;
	}
	else
	{
		x1 = (-b - sqrt(d)) / (2 * a);
		x2 = (-b + sqrt(d)) / (2 * a);
		cout << "First root: " << x1 << endl;
		cout << "Second root: " << x2 << endl;
	}
	return 0;
}
