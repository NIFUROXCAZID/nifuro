#include <iostream>
using namespace std;
int main()
{
    int n;
    int s = 0;
 
    cout << "Please, enter n = ";
    cin >> n;
    while (n != 0)
    {
        s += n % 10; 
        n /= 10; 
    }
    cout << "Sum = " << s << endl;
    return 0;
}
