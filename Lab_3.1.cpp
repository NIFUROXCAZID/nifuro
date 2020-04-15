#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c;
	float s, q;
	cout << "Input sides of the triangle: ";
	cin >> a;
	cin >> b;
	cin >> c;
	s = ((float) a + b + c) / 2;
	q = sqrt ((float)s*(s-a)*(s-b)*(s-c));
	cout << "The area is " << q;
return 0;
}
