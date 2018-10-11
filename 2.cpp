#include <iostream>
#include <math.h>
using namespace std;
int main ()

{ 

int m,n,l1,l2,h;
cout<<"Insira um valor inteiro positivo M: ";
cin>>m; 

cout<<"Insira um outro valor inteiro positivo N menor que o anterior: ";
cin>>n;

l1=m*m-n*n;
l2=2*m*n;
h=m*m+n*n;

cout<<"O valor do lado 1 é: "<< l1 <<"O Valor do lado 2 é:  "<< l2 <<"E o valor ds hipotenusa é: "<<h;

return 0;




}
