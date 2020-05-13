#include <iostream>
#include <stdlib.h>
using namespace std;
// -v "100,2" -m "SecondsToHours"
int main(int argc, char *argv[])
{
	string v, m;
	float a, b;

	setlocale(LC_ALL, "Rus");
	if (argc < 5)
	{
		cout << "*** Êîíâåðòåð âåëè÷èí ***\n";
		cout << "** Ôóíêöiîíàë **\n";
		cout <<	"conv -v \"100\" -m \"HoursToSeconds\" - êîíâåðòóâàòè 100 ãîäèí â ñåêóíäè\n";
		cout << "conv -v \"100\" -m \"SecondsToHours\" - êîíâåðòóâàòè 100 ñåêóíä â ãîäèíè\n";
		cout <<	"conv -v \"100\" -m \"KmToSM\" - êîíâåðòóâàòè 100 êiëîìåòðiâ â ñàíòèìåòðè\n";
		cout << "Óñi âàðiàíòè:\n";
		cout << "HoursToSeconds | SecondsToHours | HoursToMillisec | MillisecToHours | SecondsToMillisec | MillisecToSeconds\n";
		cout << "KmToSM | SMToKm | KmToMM | MMToKm | SMToMM | MMToSM\n";
		cout << endl; 
	}
	else
	{
		v = argv[1]; m = argv[3];
		if ((v == "-v") && (m == "-m"))
		{
			v = argv[2]; m = argv[4];
		}
		else if ((m == "-v") && (v == "-m"))
		{
			v = argv[4]; m = argv[2];
		}
		else
		{
			cout << "Ïîìèëêà â êëþ÷àõ. Íå âêàçàíi -v -m." << endl;
			system("pause");
			return 1;
		}
		a = atof(v.c_str());
		if (m == "HoursToSeconds")
		{
			b = a * 3600;
			cout << a << " hours = " << b << " seconds." << endl;
		}
		else if (m == "SecondsToHours")
		{
			b = a / 3600;
			cout << a << " seconds = " << b << " hours." << endl;
		}
		else if (m == "HoursToMillisec")
		{
			b = a * 3600000;
			cout << a << " hours = " << b << " milliseconds." << endl; 
		}
		else if (m == "MillisecToHours")
		{
			b = a / 3600000;
			cout << a << " milliseconds = " << b << " hours." << endl; 
		}
		else if (m == "SecondsToMillisec")
		{
			b = a * 1000;
			cout << a << " seconds = " << b << " milliseconds." << endl; 
		}
		else if (m == "MillisecToSeconds")
		{
			b = a / 1000;
			cout << a << " milliseconds = " << b << " seconds." << endl;
		}
		else if (m == "KmToSM")
		{
			b = a * 100000;
			cout << a << " kilometers = " << b << " centimeters." << endl; 
		}
		else if (m == "SMToKm")
		{
			b = a / 100000;
			cout << a << " centimeters = " << b << " kilometers." << endl; 
		}
		else if (m == "KmToMM")
		{
			b = a * 1000000;
			cout << a << " kilometers = " << b << " milimeters." << endl; 
		}
		else if (m == "MMToKm")
		{
			b = a / 1000000;
			cout << a << " milimeters = " << b << " kilometers." << endl;
		}
		else if (m == "SMToMM")
		{
			b = a * 10;
			cout << a << " centimeters = " << b << " milimeters." << endl;
		}
		else if (m == "MMToSM")
		{
			b = a / 10;
			cout << a << " milimeters = " << b << " centimeters." << endl;
		}
		else
		{
			cout << "Ïîìèëêà â êîìàíäi. Íå âêàçàí ïðàâûëüíî êëþ÷ -m." << endl;
			system("pause");
			return 2;
		}
	}
	system("pause");
	return 0;
	
}
