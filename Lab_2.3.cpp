#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	cout << "Input five grades [0..100] across space: ";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	f = (a + b + c + d + e) / (float)5;
	cout << "Average grade: " << f << endl;
	switch (f / 10)
	{
		case 10:
		case 9:
		case 8:
		case 7:
		case 6:
			cout << "1. Percentage higher than or equal to 60 - First division";
			break;
		case 5:
			cout << "2. Percentage between 50 and 59 - Second division";
			break;
		case 4:
			cout << "3. Percentage between 40 and 49 - Third division";
			break;
		default:
			cout << "4. Percentage less than 40 - Failure";
	}	
	return 0;
}
