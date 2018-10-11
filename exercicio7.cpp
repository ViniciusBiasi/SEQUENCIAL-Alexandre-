#include <iostream>
#include <math.h>

using namespace std;
int main()

{
  
            
     		   float l1,l2,l3,t,area;
		    	
		cout<<"Digite o valor de l1: ";
		cin>>l1;
		
		cout<<"Digite o valor de l2: ";
		cin>>l2;
		
		cout<<"Digite o valor de l3: ";
		cin>>l3;    
		
			t=(l1+l2+l3)/2;
	      
	    area=pow(t*(t-l1)*(t-l2)*(t-l3),1/2.0);
	    
	    cout<<"A area do triângulo é:  "<<area;
 }
