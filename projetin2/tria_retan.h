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
	cout<<"CALCULADORA TRIÂNGULO RETÂNGULO\n";
	cout<<"===============================\n";
	
	cout<<"\nQual a base do triângulo retângulo?(cm): ";
	cin>>b;
	cout<<"\nQual a altura do triângulo retângulo?(cm): ";
	cin>>h;
	
	area = (b*h)/2;
	hipo = b+h;
	peri = b+h+hipo;
	
	cout<<"\nQual operação deseja realizar?\n[1]Área\n[2]Hipotenusa\n[3]Perímetro\n[4]Todas operações\nResposta: ";
	cin>>ope;
	
	if(ope == 1){
		cout<<"\nA área do triângulo é: "<<area<< " cm²";
	}else if(ope == 2){
		cout<<"\nA hipotenusa do triângulo é: "<<hipo<<" cm";
	}else if(ope == 3){
		cout<<"\nO perímetro do triângulo é: "<<peri<<"cm";
	}else if(ope == 4){
		cout<<"\nA área do triângulo é: "<<area<<" cm²";
		cout<<"\nA hipotenusa do triângulo é: "<<hipo<<" cm";
		cout<<"\nO perímetro do triângulo é: "<<peri<<" cm";
	}
	cout<<"\nenter para sair\n";
	system("\npause");
	
	
}
