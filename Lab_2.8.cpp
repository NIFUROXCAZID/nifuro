#include <iostream>
using namespace std;
int main()
{
	int i, n;
	float s;
	cout << "Input count members: ";
	cin >> n;
	s = 1;
	for (i = 2; i <= n; i++) s = s + (float)1 / i;
	cout << "Summa: 1 + 1/2 + ... + 1/n: " << s << endl;		
	return 0;
}
