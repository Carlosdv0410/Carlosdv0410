#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

void triangulo()
{
	system("cls");
	setlocale(LC_ALL,""); 
	int ope;
	float b, h, area, hipo, peri, fim;
	cout<<"===============================\n";
	cout<<"CALCULADORA TRI�NGULO RET�NGULO\n";
	cout<<"===============================\n";
	
	cout<<"\nQual a base do tri�ngulo ret�ngulo?(cm): ";
	cin>>b;
	cout<<"\nQual a altura do tri�ngulo ret�ngulo?(cm): ";
	cin>>h;
	
	area = (b*h)/2;
	hipo = b+h;
	peri = b+h+hipo;
	
	cout<<"\nQual opera��o deseja realizar?\n[1]�rea\n[2]Hipotenusa\n[3]Per�metro\n[4]Todas opera��es\nResposta: ";
	cin>>ope;
	
	if(ope == 1){
		cout<<"\nA �rea do tri�ngulo �: "<<area<< " cm�";
	}else if(ope == 2){
		cout<<"\nA hipotenusa do tri�ngulo �: "<<hipo<<" cm";
	}else if(ope == 3){
		cout<<"\nO per�metro do tri�ngulo �: "<<peri<<"cm";
	}else if(ope == 4){
		cout<<"\nA �rea do tri�ngulo �: "<<area<<" cm�";
		cout<<"\nA hipotenusa do tri�ngulo �: "<<hipo<<" cm";
		cout<<"\nO per�metro do tri�ngulo �: "<<peri<<" cm";
	}
	cout<<"\nenter para sair\n";
	system("\npause");
	
	
}
