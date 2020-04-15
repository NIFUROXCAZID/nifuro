#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
	int b;
	srand(time(NULL));
	int a = rand() % 100;
	cout << "Guess the number" << endl;
        while(b != a)
{
		cin >> b;
        if(b > a)
            cout << "Bolshe" << endl; 
        else if(b < a)
            cout << "Menshee" << endl; 
        else if(b == a)
        	cout << "Vi ugadali chislo" << endl;        
}
 	  return 0;
}


