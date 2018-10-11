#include<math.h>
#include<iostream>
using namespace std;
int main ()
{
	float a11, a22, a21, a12, det;
	
	cout << "Digite o valor de a11: "<<endl;
	cin  >> a11;
	
	cout << "Digite o valor de a22: "<<endl;
	cin  >> a22;
	
	cout << "Digite o valor de a21: "<<endl;
	cin  >> a21;
	
	cout << "Digite o valor de a12: "<<endl;
	cin  >> a12;
	
	det = (a11 * a22) - (a21 * a12);
	
	cout << "O valor do determinante é: "<<det <<endl;
	
	return 0;
	
}
