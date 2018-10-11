#include <math.h>
#include <iostream>

using namespace std;
int main ()

{

	float a,b,c,delta;

	cout<<"Digite o valor de A: ";
	cin>>a;
	
	cout<<"Digite o valor de B: ";
	cin>>b;
	
	cout<<"Digite o valor de C: ";
	cin>>c;
	
	delta=b*b-4*a*c;
	
	
	cout<<"O valor do discriminante é: "<<delta;
 return 0;
	
}
