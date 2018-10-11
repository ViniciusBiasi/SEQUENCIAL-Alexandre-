#include <iostream>
using namespace std;

string nome1; //!<  Nome da Primeira pessoa
float idade1; //!<  Idade da Primeira pessoa
float peso1; //!<  Peso da Primeira pessoa

string nome2; //!<  Nome da Segunda pessoa
float idade2; //!<  Idade da Segunda pessoa
float peso2; //!<  Peso da Segunda pessoa

string nome3; //!<  Nome da Terceira pessoa
float idade3; //!<  Idade da Terceira pessoa
float peso3; //!<  Peso da Terceira pessoa

float idade_m; //!<  Idade média
float peso_m; //!<  Peso médio

int main()
{
	//Configura o cout para fixar em 2 casas decimais quando for float
	cout.setf(std::ios::fixed);
	cout.precision(2);

	cout << "Entre com o Nome, Idade e Peso de três pessoas" << endl;

	// 1 pessoa
	cout << "Entre com o Nome da primeira pessoa: ";
	getline(cin, nome1);

	cout << "Entre com a Idade da primeira pessoa: ";
	cin >> idade1;

	cout << "Entre com o Peso da primeira pessoa: ";
	cin >> peso1;

	// 2 pessoa
	cout << endl << "Entre com o Nome da segunda pessoa: ";
	cin.ignore();
	getline(cin, nome2);

	cout << "Entre com a Idade da segunda pessoa: ";
	cin >> idade2;

	cout << "Entre com o Peso da segunda pessoa: ";
	cin >> peso2;

	// 3 pessoa
	cout << endl << "Entre com o Nome da terceira pessoa: ";
	cin.ignore();
	getline(cin, nome3);

	cout << "Entre com a Idade da terceira pessoa: ";
	cin >> idade3;

	cout << "Entre com o Peso da terceira pessoa: ";
	cin >> peso3;


	idade_m = (idade1 + idade2 + idade3) / 3;
	peso_m = (peso1 + peso2 + peso3) / 3;

	cout << endl << "Idade média dos 3 é de: "<<idade_m<<endl;
	cout << "Peso médio dos 3 é de: "<< peso_m<<endl;

	return 0;
}
