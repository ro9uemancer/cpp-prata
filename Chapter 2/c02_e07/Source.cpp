// name: c02_e07
// description: 
// author: ro9uemancer

#include <iostream>
#include <conio.h>

using namespace std;

void wyswietlCzas(int h, int m);

int main()
{
	int lgodzin, lminut;

	cout << "Podaj liczbe godzin: ";
	cin >> lgodzin;

	cout << "Podaj liczbe minut: ";
	cin >> lminut;

	wyswietlCzas(lgodzin, lminut);

	_getch();
	return 0;
}

void wyswietlCzas(int h, int m)
{
	cout << "Czas: " << h << ":" << m << endl;
}