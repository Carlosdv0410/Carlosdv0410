#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

void calculador()
{
	setlocale(LC_ALL,""); 
	cout << "===========\n";
	cout << "CALCULADORA\n";
	cout << "===========\n";
	
	int opera, rep;
	float n1, n2, soma, sub, mult, divi;
	
	
	
	cout << "\n\nQual opera��o deseja realizar?\n[1] Soma\n[2] Subtra��o\n[3] Multiplica��o\n[4] Divis�o\n[5] Todas\nResposta: ";
	cin >> opera;
	
	cout << "\nDigite o primeiro n�mero: ";
	cin >> n1;
	cout << "\nDigite o segundo n�mero: ";
	cin >> n2;
	
	soma = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	divi = n1 / n2;
	
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
	cout<<"\n\nGostaria de ralizar outro c�lculo?\n[1]Sim\n[2]N�o\nResposta: ";
		cin>>rep;
	cout<<"\nenter para sair\n";
	system("\npause");
}
