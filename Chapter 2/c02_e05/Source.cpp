// name: c02_e05
// description: 
// author: ro9uemancer

#include <iostream>
#include <conio.h>

using namespace std;

float tempCIntoF(float tempC);

int main()
{
	float tempC;

	cout << "Podaj temperature w stopniach Celsjusza: ";
	cin >> tempC;
	
	cout << tempC << " stopnie Celsjusza to " << tempCIntoF(tempC) << " stopni Fahrenheita.";

	_getch();
	return 0;
}

float tempCIntoF(float tempC)
{
	return (1.8 * tempC) + 32.0;
}