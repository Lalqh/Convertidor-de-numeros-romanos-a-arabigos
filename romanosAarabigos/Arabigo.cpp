#include "Arabigo.h"

int Arabigo::romToDec(char rom[])
{
    int resulatdo = 0, valor{};

	for (int i = 0; i < strlen(rom); i++)
	{
		if (rom[i] == 'I' && rom[i + 1] == 'V' && strlen(rom) == 2) {
			resulatdo = 4;
			break;
		}
		else if(rom[i]=='V' && rom[i+1]=='I' && strlen(rom)==2) {
			resulatdo = 6;
			break;
		}

		switch (rom[i]) {
		case 'I':
			valor = 1;
			break;
		case 'V':
			valor = 5;
			break;
		case 'X':
			valor = 10;
			break;
		case 'L':
			valor = 50;
			break;
		case 'C':
			valor = 100;
			break;
		case 'D':
			valor = 500;
			break;
		case 'M':
			valor = 1000;
			break;
		default:
			break;
		}
		resulatdo += valor;
	}
    return resulatdo;
}
