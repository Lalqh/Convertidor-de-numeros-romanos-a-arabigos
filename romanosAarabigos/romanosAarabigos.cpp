#include <iostream>
#include "Arabigo.h"

using namespace std;

int main()
{
	char rom[20];
	char op;
	Arabigo * arabio = new Arabigo();

	cout << "Bienvenido a el programa\n";

	do {
		cout << "Ingrese el numero romano: ";
		cin >> rom;

		cout<<"El numero arabigo es: "<< arabio->romToDec(rom)<<endl;

		cout << "Desea repetir el programa? (S/N): ";
		cin >> op;

	} while ((op != 'N') && (op != 'n'));
}

