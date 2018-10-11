#include <iostream>
#include <math.h>
 
 using namespace std;
int main()

{
	int i, m, d;
	
	cout << "\n Digite a sua idade em anos: ";
	cin  >> i;
	
	m = 12 * i;
	d = 365,25 * i;
	
	cout << " A sua idade expressa em anos:  " << i <<endl;
    cout << " A usa idade expressa em meses:  "  <<m <<endl; 	
	cout << "A sua idade expressa em dias:  "<<d <<endl;
	
	
 system ("pause");
 
}
