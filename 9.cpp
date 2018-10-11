#include <iostream>
using namespace std;

int reais; 
int n100; 
int n50;
int n10; 
int n5; 
int n1; 

int main()
{
	cout << "Entre com o valor em Reais: ";
	cin >> reais;

	n100 = reais / 100;
	reais -= n100 * 100;

	n50 = reais / 50;
	reais -= n50 * 50;

	n10 = reais / 10;
	reais -= n10 * 10;

	n5 = reais / 5;
	reais -= n5 * 5;

	n1 = reais;

	cout << "O valor pode ser decomposto em:" << endl;
	cout << n100 << " notas de 100 reais" << endl;
	cout << n50 << " notas de 50 reais" << endl;
	cout << n10 << " notas de 10 reais" << endl;
	cout << n5 << " notas de 5 reais" << endl;
	cout << n1 << " notas de 1 real" << endl;

	return 0;
}
