// name: c02_e05
// description: 
// author: ro9uemancer

#include <iostream>
#include <conio.h>

using namespace std;

float reTemp(float tempC);

int main()
{
	float tempC;

	cout << "Podaj temperature w stopniach Celsjusza: ";
	cin >> tempC;
	
	cout << tempC << " stopnie Celsjusza to " << reTemp(tempC) << " stopni Fahrenheita.";

	_getch();
	return 0;
}

float reTemp(float tempC)
{
	float tempF;
	tempF = (1.8 * tempC) + 32.0;

	return tempF;
}