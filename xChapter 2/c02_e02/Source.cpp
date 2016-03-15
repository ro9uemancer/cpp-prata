// name: c02_e02
// description: cin
// author: ro9uemancer

#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	int mile;

	cout << "Podaj odleglosc w milach morskich: ";
	cin >> mile;
	cout << mile << " mil morskich to: " << mile * 1852 << " metrow";

	_getch();
	return 0;
}