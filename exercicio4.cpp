
#include <iostream>
using namespace std;

float f_temp; //!< Temperatura em Fahrenheit
int c_temp; //!<  Temperatura em Celsius

float polegada; //!< Quantidade de chuva em Polegadas
float milimetros; //!< Quantidade de chuva em Milímetros

int main()
{
	//Configura o cout para fixar em 2 casas decimais quando for float
	cout.setf(std::ios::fixed);
	cout.precision(2);

	//conversao 1: Fahrenheit => Celsius
	cout << "Fahrenheit para Celsius" << endl;
	cout << "Entre com a temperatura em Fahrenheit: ";
	cin >> f_temp;

	c_temp = (f_temp - 32) * 5 / 9;

	cout << f_temp << " Fahrenheit = " << c_temp << " Celsius" << endl << endl;

	//conversao 2: Polegadas => Milimetros
	cout << "Polegadas para Milímetros" << endl;
	cout << "Entre com a quantidade de chuva em Polegadas: ";
	cin >> polegada;

	milimetros = polegada * 25.4;

	cout << polegada << " Polegadas = " << milimetros << " Milímetros" << endl;

	return 0;
}
