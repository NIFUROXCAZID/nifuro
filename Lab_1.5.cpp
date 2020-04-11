#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Input a" << endl ;
	cin >> a;
	(a < 0) ? (cout << "the number is negative" << endl) : (a > 0)? (cout << "the number is positive" << endl) : (cout <<  "the number is zero" << endl );
	
	return 0;
}
