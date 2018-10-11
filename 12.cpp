#include <iostream> 
#include <math.h>
using namespace std;
int main ()
 
 { 
           int m, v, deco, w;
           
           cout <<"Digite o valor da massa (ton) de um avião: "<<endl;
           cin  >> m;
           
           cout <<"Digite o valor da aceleração (m/s^2) do avião : "<<endl;
           cin  >> v;
           
           cout << "Digite o  valor do tempo (s) que levou do repouso até a decolagem: "<<endl;
           cin  >> deco;
           
           w = (m*v*v)/2; 
           
           cout <<"O valor da velocidade atingida (km/h): "<<w;
   
   return 0;       
      
  }    
      
      
      
      
        
