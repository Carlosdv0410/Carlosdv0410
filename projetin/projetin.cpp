#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
using namespace std;


void conversor()
{
	setlocale(LC_ALL,""); 
	
	int n1, n2, rep;//operadores l�gicos
	float val1, val2;
	do{
		
		system("cls");
		cout<<"\n====================================";
		cout<<"\nCONVERSOR CELSIUS FAHRENHEIT KELVIN";
		cout<<"\n====================================";
		
		cout<<"\n\nQual valor gostaria de converter?\n[1]Celsius\n[2]Fahrenheit\n[3]Kelvin\n\nResposta: ";
		cin>>n1;
		if(n1==1){
		
			cout<<"\n\nPara qual gostaria de converter?\n[1]Fahrenheit\n[2]Kelvin\n\nResposta: ";
			cin>>n2;
		}else if(n1==2){
			cout<<"\n\nPara qual gostaria de converter?\n[1]Celsius\n[2]Kelvin\n\nResposta: ";
			cin>>n2;
		}else if(n1==3){
			cout<<"\n\nPara qual gostaria de converter?\n[1]Celsius\n[2]Fahrenheit\n\nResposta: ";
			cin>>n2;
		}
	
	
	
		if((n1 == 1)&&(n2 == 1)){
			
			cout<<"\n\nDigite o valor em celsius: ";
			cin>> val1;
			val2 = (val1*1.8)+32;
			cout<<"\n\n"<<val1<<"�C equivalem � "<<val2<<"�F";
			
		}else if((n1 == 1)&&(n2 == 2)){
			
			cout<<"\n\nDigite o valor em celsius: ";
			cin>> val1;
			val2 = val1+273.15;
			cout<<"\n\n"<<val1<<"�C equivalem � "<<val2<<" K";
			
		}else if((n1 == 2)&&(n2 == 1)){
			
			cout<<"\n\nDigite o valor em fahrenheit: ";
			cin>> val1;
			val2 = (val1 - 32) * 5/9 ;
			cout<<"\n\n"<<val1<<"�F equivalem � "<<val2<<"�C";
			
		}else if((n1 == 2)&&(n2 == 2)){
			
			cout<<"\n\nDigite o valor em fahrenheit: ";
			cin>> val1;
			val2 = (val1 - 32) * 5/9+273.15 ;
			cout<<"\n\n"<<val1<<"�F equivalem � "<<val2<<" K";
			
		}else if((n1 == 3)&&(n2 == 1)){
			
			cout<<"\n\nDigite o valor em Kelvin: ";
			cin>> val1;
			val2 = val1-273.15;
			cout<<"\n\n"<<val1<<" K equivalem � "<<val2<<"�C";
			
		}else if((n1 == 3)&&(n2 == 2)){
			
			cout<<"\n\nDigite o valor em Kelvin: ";
			cin>> val1;
			val2 = ( val1 - 273,15) * 9/5 + 32;
			cout<<"\n\n"<<val1<<" K equivalem � "<<val2<<"�F";
			
		}
		cout<<"\n\nGostaria de ralizar outro c�lculo?\n[1]Sim\n[2]N�o\nResposta: ";
		cin>>rep;
	}while(rep == 1);
	cout<<"\nenter para sair\n";
	system("\npause");
}

void salario()
{
	system("cls");
	float salar, oper, porc, fim;
	setlocale(LC_ALL,""); 
	cout<<"================\n";
	cout<<"CALCULAR SAL�RIO\n";
	cout<<"================\n";
	
	cout<<"Qual o sal�rio do funcion�rio?: ";
	cin>>salar;
	
	cout<<"\nGostaria de alterar como?\n[1]Aumento\n[2]Redu��o\nResposta: ";
	cin>>oper;
	
	cout<<"Quanto gostaria de alterar em[%]: ";
	cin>>porc;
	if(oper == 1){
		salar=salar+(salar*porc/100);
	}else if(oper == 2){
		salar=salar-(porc*salar/100);
	}
	
	cout<<"\nO resultado da opera��o �: "<< salar;
	
	cout<<"\nenter para sair\n";
	system("\npause");

}

void calcumedia()
{
	system("cls");
	setlocale(LC_ALL,""); 
	char nome[100];
	float n1, n2, n3, n4, resul, fim;
	cout <<"==========================\n";
	cout << "   CALCULADOR DE M�DIA   \n";
	cout << "=========================\n";
	
	cout << "\nQual o nome do aluno? ";
	cin >> nome;
	cout << "\nDigite a primeira nota: ";
	cin >> n1;
	cout << "\nDigite a segunda nota: ";
	cin >> n2;	
	cout << "\nDigite a terceira nota: ";
	cin >> n3;	
	cout << "\nDigite a quarta nota: ";
	cin >> n4;
	
	resul = (n1 + n2 + n3 + n4 )/ 4;
	
	cout << "\nA m�dia do aluno "<<nome<<" e " << resul << "\n";
	
	if( resul >= 6)
	{
		cout << "\nO aluno foi aprovado!\n";
	}else
	{
		cout << "\nO aluno n�o fou aprovado\n";
	}
	
	cout<<"\nDigite qualquer valor para sair";
	cin>>fim;
	cout<<"\nenter para sair\n";
	system("\npause");
}

void circulo()
{
	system("cls");
	setlocale(LC_ALL,""); 
	int oper;
	float raio, area, circ, fim;
	
	cout<<"======================\n";
	cout<<"CALCULADORA DE C�RCULO\n";
	cout<<"======================\n";
	
	cout<<"\nQual o raio(r) do c�rculo?(cm): ";
	cin>>raio;
	
	area = 3.14+raio*raio;
	circ = 2*3.14*raio;
	
	cout<<"\n\nQual opera��o?\n[1]�rea\n[2]Circunfer�ncia\n[3]Todas opera��es\nResposta: ";
	cin>> oper;
	
	if(oper == 1){
		cout<<"\nA �rea do c�rculo de raio "<<raio<<" �: "<<area<<" cm�";
	}else if(oper == 2){
		cout<<"\nA Circunfer�ncia do c�rculo de raio "<<raio<<" �: "<<circ<<" cm";
	}else if(oper == 3){
		cout<<"\nA �rea do c�rculo de raio "<<raio<<" �: "<<area<<" cm�";
		cout<<"\nA Circunfer�ncia do c�rculo de raio "<<raio<<" �: "<<circ<<" cm";
	}
	cout<<"\nenter para sair\n";
	system("\npause");
}

void quadrado()
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
	cout<<"\nenter para sair\n";
	system("\npause");
}

void calculadora()
{
	system("cls");
	setlocale(LC_ALL,""); 
	cout << "===========\n";
	cout << "CALCULADORA\n";
	cout << "===========\n";
	
	int opera;
	float n1, n2, soma, sub, mult, divi;
	
	cout << "\nDigite o primeiro n�mero: ";
	cin >> n1;
	cout << "\nDigite o segundo n�mero: ";
	cin >> n2;
	
	soma = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	divi = n1 / n2;
	
	cout << "\n\n Qual opera��o deseja realizar?\n[1] Soma\n[2] Subtra��o\n[3] Multiplica��o\n[4] Divis�o\n[5] Todos os resultados\nResposta: ";
	cin >> opera;
	
	if(opera == 1){
		cout << "\nA soma de "<< n1 << " e " << n2 << " �: " << soma;
	}else if(opera == 2){
		cout << "\nA subtra��o de "<< n1 << " e " << n2 << " �: " << sub;
	}else if(opera == 3){
		cout << "\nA multiplica��o de "<< n1 << " e " << n2 << " �: " << mult;
	}else if(opera == 4){
		cout << "\nA divis�o de "<< n1 << " e " << n2 << " �: " << divi;
	}else if(opera == 5){
		cout << "\nA soma de "<< n1 << " e " << n2 << " �:  " << soma;
		cout << "\nA subtra��o de "<< n1 << " e " << n2 << " �:  " << sub;
		cout << "\nA multiplica��o de "<< n1 << " e " << n2 << " �:  " << mult;
		cout << "\nA divis�o de "<< n1 << " e " << n2 << " �:  " << divi;
	}
	cout<<"\nenter para sair\n";
	system("\npause");
}

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

void radian()
{
	float angulo, radi;
	system("cls");
	setlocale(LC_ALL,""); 
	cout<<"\n=================";
	cout<<"\nCONVERSOR RADIANO";
	cout<<"\n=================";
	
	cout<<"\nQuantos graus possui?: ";
	cin>> angulo;
	
	radi = angulo*3.14/180;
	
	cout<<"\nO total de radianos no seu circulo �: "<<radi<<" radi";
	cout<<"\nenter para sair\n";
	system("\npause");
}


int main()
{
	int oper;
	do{
		setlocale(LC_ALL,""); 
		system("cls");
		cout<<"\n===========================";
		cout<<"\n          CENTRAL          ";
		cout<<"\n===========================";
		
		cout<<"\n\nOque gostaria de fazer?\n[1]Converter temperaturas\n[2]Modificar sal�rio\n[3]Calcular m�dia\n[4]Calcular c�rculo\n[5]calcular quadrado\n[6]Utilizar calculadora\n[7]Calcular tri�ngulo\n[8]Calcular radiano\n[9]sair\n\nResposta: ";
		cin>>oper;
		
		if(oper == 1){
			conversor();
		}else if(oper == 2){
			salario();
		}else if(oper == 3){
			calcumedia();
		}else if(oper == 4){
			circulo();
		}else if(oper == 5){
			quadrado();
		}else if(oper == 6){
			calculadora();
		}else if(oper == 7){
			triangulo();
		}else if(oper == 8){
			radian();
		}
			
	}while(oper != 9);

}
