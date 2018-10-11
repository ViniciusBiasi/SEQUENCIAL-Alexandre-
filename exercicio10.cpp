#include <iostream>
using namespace std;

int num; //!<  Número de 3 algarismos
int resultado; //!<  Número de 4 algarismos
int dc; //!<  Digito de controle
int a1; //!< Primeiro algarismo
int a2; //!<  Segundo algarismo
int a3; //!<  Terceiro algarismo

int main()
{
	cout << "Entre com o Número de 3 algarismos: ";
	cin >> num;

	resultado = num;

	a3 = num % 10;
	num = num / 10;

	a2 = num % 10;
	num = num / 10;

	a1 = num;

	dc = (a1 + a2 * 3 + a3 * 5) % 7;

	resultado = resultado * 10 + dc;

	cout << "Número de 4 algarismos: " << resultado << endl;

	return 0;
}
