#include <cmath>
#include <iostream>
using namespace std;

int main()

{
        float x1,x2,D,y1,y2;
        
        cout<<"Qual é a distância entre x1: ";
        cin>>x1;
        
        cout<<"Qual é a distância entre x2: ";
        cin>>x2;
        
        cout<<"Qual é a distância entre y1: ";
        cin>>y1;
        
        cout<<"Qual é a distância entre y2: ";
        cin>>y2;
        
	
	D=sqrtf (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	
	cout<<"A distância entre a e b "<<D;
	
			return 0;
			
}
	
	
	
	

