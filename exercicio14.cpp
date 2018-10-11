#include<math.h>
#include<iostream>
using namespace std;
int main ()
{
	int charrete, preco1, preco2, precof;
	
	cout << "Digite a quantidade de horas (.) que a charrete foi usada: "<<endl;
	cin  >> charrete;
	
	  preco1 = charrete%3*5;
	  preco2 = charrete/3*10;
	  
    cout << "O cliente terá que pagar R$: " <<precof <<endl;
    
    precof = preco1 + preco2; 
    
    return 0;
	
}
