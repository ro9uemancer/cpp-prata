// name: c02_e06
// description: 
// author: ro9uemancer

#include <iostream>
#include <conio.h>

using namespace std;

double func(float lataSwietlne);

int main()
{
	float lataSwietlne;

	cout << "Podaj liczbe lat swietlnych: ";
	cin >> lataSwietlne;

	cout << lataSwietlne << " lat swietlnych = " << func(lataSwietlne) << " jednostek astronomicznych." << endl;

	_getch();
	return 0;
}

double func(float lataSwietlne)
{
	return lataSwietlne * 63240;
}