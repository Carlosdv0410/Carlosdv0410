#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

void quadrad()
{
	system("cls");
	int ope;
	float l, per, area,fim;
	
	setlocale(LC_ALL,""); 
	cout<<"=======================\n";
	cout<<"CALCULADORA DE QUADRADO\n";
	cout<<"=======================\n";
	
	cout<<"\nDigite o valor do lado do quadrado(cm): ";
	cin>>l;
	per = l*4;
	area = l*l;
	cout<<"\n[1]Perímetro\n[2]Área\n[3]Todas operações\nResposta: ";
	cin >> ope;
	if(ope == 1){
		cout<<"\n\nO perímetro do quadrado de lado "<< l << " é: "<<per<<" cm";
	}else if(ope ==2){
		cout<<"\n\nA área do quadrado de lado "<<l<<" é: "<<area<<" cm²" ;
	}else if(ope == 3){
		cout<<"\nO perímetro do quadrado de lado "<< l << " é: "<<per<<" cm";
		cout<<"\nA área do quadrado de lado "<<l<<" é: "<<area<<" cm²" ;
	}
	cout<<"\nenter para sair\n";
	system("\npause");
}
