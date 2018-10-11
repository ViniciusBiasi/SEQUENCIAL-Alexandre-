#include <iostream>
using namespace std;
int main()

{
	int idade,dia,horas,minutos,segundos;	
	
	setlocale(LC_ALL, "Portuguese");
		
cout<<("Entre com sua idade: ");
cin>>idade;

segundos=((((60*60)*24)*365.25)*idade);

cout<<"\nO seu coração bateu "<<segundos<<" vezes até hoje. \n\n";

system ("pause");
}
