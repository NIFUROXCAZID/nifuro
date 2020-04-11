#include <iostream>
using namespace std;
int main()
{
	int f;
	float c;
	cout << "Input fahrenheit: ";
	cin >> f;
	c = (float)9 / 5 * (f - 32);
	cout << "Temperature in celsius: " << c;
	return 0;
}
