#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Input 1 corner of a triangle: ";
	cin >> a; 
	cout << "Input 2 corner of a triangle: ";
	cin >> b;
	cout << "Input 3 corner of a triangle: ";
	cin >> c;
	if (a + b + c == 180) 
		cout << "The triangle is valid" << endl;
	else
		cout << "The triangle is not valid" << endl;
	return 0;
}
