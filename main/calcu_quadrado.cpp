#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

calcu_quadrado()
{
	int ope;
	float l, per, area,fim;
	
	setlocale(LC_ALL,""); 
	cout<<"_______________________\n";
	cout<<"CALCULADORA DE QUADRADO\n";
	cout<<"_______________________\n";
	
	cout<<"\nDigite o valor do lado do quadrado(cm): ";
	cin>>l;
	per = l*4;
	area = l*l;
	cout<<"\n[1]Per�metro\n[2]�rea\n[3]Todas opera��es\nResposta: ";
	cin >> ope;
	if(ope == 1){
		cout<<"\n\nO per�metro do quadrado de lado "<< l << " �: "<<per<<" cm";
	}else if(ope ==2){
		cout<<"\n\nA �rea do quadrado de lado "<<l<<" �: "<<area<<" cm�" ;
	}else if(ope == 3){
		cout<<"\nO per�metro do quadrado de lado "<< l << " �: "<<per<<" cm";
		cout<<"\nA �rea do quadrado de lado "<<l<<" �: "<<area<<" cm�" ;
	}
	cout<<"Digite qualquer valor para sair";
	cin>>fim;
}
