#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

void calculadora()
{
	setlocale(LC_ALL,""); 
	cout << "___________\n";
	cout << "CALCULADORA\n";
	cout << "___________\n";
	
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
}
