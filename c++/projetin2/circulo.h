#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

void circul()
{
	system("cls");
	setlocale(LC_ALL,""); 
	int oper;
	float raio, area, circ, fim;
	
	cout<<"======================\n";
	cout<<"CALCULADORA DE C?RCULO\n";
	cout<<"======================\n";
	
	cout<<"\nQual o raio(r) do c?rculo?(cm): ";
	cin>>raio;
	
	area = 3.14+raio*raio;
	circ = 2*3.14*raio;
	
	cout<<"\n\nQual opera??o?\n[1]?rea\n[2]Circunfer?ncia\n[3]Todas opera??es\nResposta: ";
	cin>> oper;
	
	if(oper == 1){
		cout<<"\nA ?rea do c?rculo de raio "<<raio<<" ?: "<<area<<" cm?";
	}else if(oper == 2){
		cout<<"\nA Circunfer?ncia do c?rculo de raio "<<raio<<" ?: "<<circ<<" cm";
	}else if(oper == 3){
		cout<<"\nA ?rea do c?rculo de raio "<<raio<<" ?: "<<area<<" cm?";
		cout<<"\nA Circunfer?ncia do c?rculo de raio "<<raio<<" ?: "<<circ<<" cm";
	}
	cout<<"\nenter para sair\n";
	system("\npause");
}
