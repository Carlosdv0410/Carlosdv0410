#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

alt_salario()
{
	float salar, oper, porc, fim;
	setlocale(LC_ALL,""); 
	
	cout<<"________________\n";
	cout<<"CALCULAR SALÁRIO\n";
	cout<<"________________\n";
	
	cout<<"Qual o salário do funcionário?: ";
	cin>>salar;
	
	cout<<"\nGostaria de alterar como?\n[1]Aumento\n[2]Redução\nResposta: ";
	cin>>oper;
	
	cout<<"Quanto gostaria de alterar em[%]: ";
	cin>>porc;
	if(oper == 1){
		salar=salar+(salar*porc/100);
	}else if(oper == 2){
		salar=salar-(porc*salar/100);
	}
	
	cout<<"\nO resultado da operação é: "<< salar;
	
	cout<<"\nDigite qualquer valor para sair";
	cin>>fim;

}
