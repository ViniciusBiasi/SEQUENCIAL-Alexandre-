#include <math.h>
#include <iostream>
using namespace std;
int main()

    {
	  float raio, altura, alata, total, valor, pi;
	  pi=3.1415;
	  valor=100.00;
	  cout<<"Digite o valor do raio:"<<endl;
	  cin>>raio;
	  cout<<"Digite o valor da lata em metros:"<<endl;
	  cin>>altura;
	  alata=(pi*pow(raio,2)*2)+(2*pi*raio*altura);
	  total=alata*valor;
	  cout<<"O custo da lata de aluminio é R$ "<<total;
	  
  }
  
  
  

  
  
	
