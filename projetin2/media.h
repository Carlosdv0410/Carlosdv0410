#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

calcumedia()
{
	setlocale(LC_ALL,""); 
	char nome[100];
	float n1, n2, n3, n4, resul, fim;
	cout <<"==========================\n";
	cout << "   CALCULADOR DE MÉDIA   \n";
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
	
	cout << "\nA média do aluno "<<nome<<" é " << resul << "\n";
	
	if( resul >= 6)
	{
		cout << "\nO aluno foi aprovado!\n";
	}else
	{
		cout << "\nO aluno não foi aprovado\n";
	}
	
	cout<<"\nenter para sair\n";
	system("\npause");
}
