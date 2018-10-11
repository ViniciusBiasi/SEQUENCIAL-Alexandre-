#include <iostream>
#include <math.h>
using namespace std;
int main ()

{
	
	int valoratualizadodaprestacao, valordaprestacao, taxadejuros, tempodeatraso; 
	
	cout << "Qual o valor da Prestação em atraso: " <<endl;
	cin  >> valordaprestacao;
	
	cout << "Qual a Taxa de Juros da Prestação em atraso: "<<endl;
	cin  >> taxadejuros;
	
	cout <<"Qual o Tempo de Atraso da Prestação que era a ser paga: "<<endl;
	cin  >> tempodeatraso;
	
	valoratualizadodaprestacao = valordaprestacao + (valordaprestacao*(taxadejuros/100.0)*tempodeatraso);
	
	cout << "O valor atualizado da Prestação é: "<<valoratualizadodaprestacao  <<endl;
	
return 0;	
}

