#include <iostream>
using namespace std;
const int n = 20;
int main()
{
    int i, n, a[20], x = 0, y = 0, z = 0;
	cout << "Input count elements: ";
    cin >> n;
    for (i = 0; i < n; i++) cin >> a[i];
	for (i = 0; i < n; i++)
		if (a[i] < 0)
			x++;
		else if (a[i] > 0)
			y++;
		else
			z++;
    cout << "Count negative " << x << " Count positive " << y << " Count zero " << z << endl;
    return 0;
}
