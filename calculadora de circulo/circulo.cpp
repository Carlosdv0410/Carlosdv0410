#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

void circul()
{
	setlocale(LC_ALL,""); 
	int oper;
	float raio, area, circ, fim;
	
	cout<<"______________________\n";
	cout<<"CALCULADORA DE CÍRCULO\n";
	cout<<"______________________\n";
	
	cout<<"\nQual o raio(r) do círculo?(cm): ";
	cin>>raio;
	
	area = 3.14+raio*raio;
	circ = 2*3.14*raio;
	
	cout<<"\n\nQual operação?\n[1]Área\n[2]Circunferência\n[3]Todas operações\nResposta: ";
	cin>> oper;
	
	if(oper == 1){
		cout<<"\nA área do círculo de raio "<<raio<<" é: "<<area<<" cm²";
	}else if(oper == 2){
		cout<<"\nA Circunferência do círculo de raio "<<raio<<" é: "<<circ<<" cm";
	}else if(oper == 3){
		cout<<"\nA área do círculo de raio "<<raio<<" é: "<<area<<" cm²";
		cout<<"\nA Circunferência do círculo de raio "<<raio<<" é: "<<circ<<" cm";
	}
	cout<<"\nDigite qualquer valor para sair";
	cin>>fim;
}
