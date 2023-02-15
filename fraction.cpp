#include <iostream>
#include <string>
#include <cstdio> // getchar()
#include <windows.h> // sytem()
#include <ctype.h> // isdigit()

using namespace std;

int main()
{
	while (true)
	{
		int numerator = 0;
		int denominator = 0;
		int whole = 0;
		while (denominator <= 0)
		{
			cout << "Enter numerator: "; cin >> numerator;
			cout << "Enter denominator: "; cin >> denominator;
		}

		while (numerator >= denominator)
		{
			whole++;
			numerator = numerator - denominator;
		}

		string wholetext;
		string denominatorspaces;
		string numeratortext;

		for (int i = 1; i <= denominator; i++)
			wholetext += "#";
		for (int i = 1; i <= denominator - numerator; i++)
			denominatorspaces += "_";
		for (int i = 1; i <= numerator; i++)
			numeratortext += "#";

		numeratortext += denominatorspaces;

		cout << "By default" << endl;
		for (int i = 0; i < whole; i++)
		{
			cout << "[" << wholetext << "] ";
		}
		if (numerator != 0)
			cout << "[" << numeratortext << "]";
		cout << endl << endl;

		cout << "Simplified" << endl;

		if (whole != 0)
			cout << whole << "[" << wholetext << "]";
		if (numerator != 0)
			cout << "[" << numeratortext << "]";

		cout << endl << endl;

		cout << "In percentages" << endl;
		cout << ((double(whole) * double(denominator) + double(numerator)) / double(denominator)) * 100 << "%" << endl;

		cout << "type \"n\" to reset: ";
		char ifClear = getchar();
		cin >> ifClear;
		if (ifClear == 'n')
			system("cls");
	}
}
