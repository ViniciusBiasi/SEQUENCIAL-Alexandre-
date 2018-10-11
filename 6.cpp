#include<math.h>
#include<iostream>
using namespace std;
int main ()
{
	float  raio, altura, area, volume;
	
	 cout << "Digite o valor do raio de um cilindro: "<<endl;
	 cin  >>  raio;
	 
	 cout << "Digite o valor da altura de um cilindro: "<<endl;
	 cin  >>  altura;
	 
	 area = 2 * 3.14 * raio * (altura + raio ); 
	 
	 cout << "O valor da área do cilindro é: " <<area <<endl;
	 cin  >> area;
	 
	 volume = 3.14 * raio * raio * altura;
	 
	 cout << "O valor do volume do cilindro é: " <<volume <<endl;
	  
	  return 0;
	 
}
