#include <iostream>
#include <math.h>
using namespace std;
int main ()

{
	
	int distancia, volume, consumomedio;

	cout << "Qual a dist�ncia total percorrida pelo autom�vel: "<<endl;
	cin  >> distancia;
	
	cout << "Qual o volume do combust�vel consumido (medido em litros): "<<endl;
	cin  >> volume;
	
	consumomedio = distancia / volume;
	
	cout << "O consumo m�dio do autom�vel medido em (Km/l) �: "<<consumomedio <<endl;
	
	return 0;
	
	
}
