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
	
	
	
	cout << "\n\nQual operação deseja realizar?\n[1] Soma\n[2] Subtração\n[3] Multiplicação\n[4] Divisão\n[5] Todas\nResposta: ";
	cin >> opera;
	
	cout << "\nDigite o primeiro número: ";
	cin >> n1;
	cout << "\nDigite o segundo número: ";
	cin >> n2;
	
	soma = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	divi = n1 / n2;
	
	if(opera == 1){
		cout << "\nA soma de "<< n1 << " e " << n2 << " é: " << soma;
	}else if(opera == 2){
		cout << "\nA subtração de "<< n1 << " e " << n2 << " é: " << sub;
	}else if(opera == 3){
		cout << "\nA multiplicação de "<< n1 << " e " << n2 << " é: " << mult;
	}else if(opera == 4){
		cout << "\nA divisão de "<< n1 << " e " << n2 << " é: " << divi;
	}else if(opera == 5){
		cout << "\nA soma de "<< n1 << " e " << n2 << " é:  " << soma;
		cout << "\nA subtração de "<< n1 << " e " << n2 << " é:  " << sub;
		cout << "\nA multiplicação de "<< n1 << " e " << n2 << " é:  " << mult;
		cout << "\nA divisão de "<< n1 << " e " << n2 << " é:  " << divi;
	}
	cout<<"\n\nGostaria de ralizar outro cálculo?\n[1]Sim\n[2]Não\nResposta: ";
		cin>>rep;
	cout<<"\nenter para sair\n";
	system("\npause");
}
