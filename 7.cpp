#include<math.h>
#include<iostream>
using namespace std;
int main ()
{
	int a, b, c, r, s, d;
	
	cout << "\n Digite o valor de a: ";
	cin  >> a; 
	
	cout << "\n Digite o valor de b: ";
	cin  >> b; 
	
	cout << "\n Digite o valor de c: ";
	cin  >> c;
	
	r = (a+b)*(a+b);
	s = (b+c)*(b+c);
	
	cout << "\n \n O valor de r e s é: " <<r <<s;
	
	d = r + s/2; 
	
	cout << "\n O valor de d é: "<<d;
	
	return 0;
}

