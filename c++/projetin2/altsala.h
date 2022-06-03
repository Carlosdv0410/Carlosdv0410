#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

salario()
{
	system("cls");
	float salar, oper, porc, fim;
	setlocale(LC_ALL,""); 
	cout<<"================\n";
	cout<<"CALCULAR SALÁRIO\n";
	cout<<"================\n";
	
	cout<<"Qual o salário que deseja alterar?: ";
	cin>>salar;
	
	cout<<"\nGostaria de alterar como?\n[1]Aumento\n[2]Redulção\nResposta: ";
	cin>>oper;
	
	cout<<"Quanto gostaria de alterar em[%]: ";
	cin>>porc;
	if(oper == 1){
		salar=salar+(salar*porc/100);
	}else if(oper == 2){
		salar=salar-(porc*salar/100);
	}
	
	cout<<"\nO resultado da operação é: "<< salar;
	
	cout<<"\nenter para sair\n";
	system("\npause");

}
