#include <iostream>
using namespace std;
int main()
{
	char c;
	cout << "Input char: ";
	cin >> c;
	int n = (int)c;
	if (n >= 48 && n <= 57)
		cout << "|0 – 9|48 – 57|: " << n; 
	else if (n >= 65 && n <= 90)
		cout << "|A – Z|65 – 90|: " << n;
	else if (n >= 97 && n <= 122)
		cout << "|a – z|97 – 122|: " << n; 
	else if (n >= 0 && n <= 47 | n >= 58 && n <= 64 | n >= 91 && n <= 96 | n >= 123 && n <= 127)
		cout << "|Special chars|0 - 47, 58 - 64, 91 - 96, 123 – 127|: " << n; 
	else
		cout << "|-|-|: " << n; 
	return 0;
}
