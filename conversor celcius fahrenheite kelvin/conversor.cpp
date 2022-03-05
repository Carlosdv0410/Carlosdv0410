#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <cstdlib>
using namespace std;

main()
{
	setlocale(LC_ALL,""); 
	
	int n1, n2, rep;//operadores lógicos
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
			cout<<"\n\n"<<val1<<"°C equivalem à "<<val2<<"°F";
			
		}else if((n1 == 1)&&(n2 == 2)){
			
			cout<<"\n\nDigite o valor em celsius: ";
			cin>> val1;
			val2 = val1+273.15;
			cout<<"\n\n"<<val1<<"°C equivalem à "<<val2<<" K";
			
		}else if((n1 == 2)&&(n2 == 1)){
			
			cout<<"\n\nDigite o valor em fahrenheit: ";
			cin>> val1;
			val2 = (val1 - 32) * 5/9 ;
			cout<<"\n\n"<<val1<<"°F equivalem à "<<val2<<"°C";
			
		}else if((n1 == 2)&&(n2 == 2)){
			
			cout<<"\n\nDigite o valor em fahrenheit: ";
			cin>> val1;
			val2 = (val1 - 32) * 5/9+273.15 ;
			cout<<"\n\n"<<val1<<"°F equivalem à "<<val2<<" K";
			
		}else if((n1 == 3)&&(n2 == 1)){
			
			cout<<"\n\nDigite o valor em Kelvin: ";
			cin>> val1;
			val2 = val1-273.15;
			cout<<"\n\n"<<val1<<" K equivalem à "<<val2<<"°C";
			
		}else if((n1 == 3)&&(n2 == 2)){
			
			cout<<"\n\nDigite o valor em Kelvin: ";
			cin>> val1;
			val2 = ( val1 - 273,15) * 9/5 + 32;
			cout<<"\n\n"<<val1<<" K equivalem à "<<val2<<"°F";
			
		}
		cout<<"\n\nGostaria de ralizar outro cálculo?\n[1]Sim\n[2]Não\nResposta: ";
		cin>>rep;
	}while(rep == 1);
	cout<<"\nenter para sair\n";
	system("\npause");
}
