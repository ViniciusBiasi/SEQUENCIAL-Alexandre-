#include <iostream>
#include <math.h>
using namespace std;
int main ()

{
	
	int distancia, volume, consumomedio;

	cout << "Qual a distância total percorrida pelo automóvel: "<<endl;
	cin  >> distancia;
	
	cout << "Qual o volume do combustível consumido (medido em litros): "<<endl;
	cin  >> volume;
	
	consumomedio = distancia / volume;
	
	cout << "O consumo médio do automóvel medido em (Km/l) é: "<<consumomedio <<endl;
	
	return 0;
	
	
}
