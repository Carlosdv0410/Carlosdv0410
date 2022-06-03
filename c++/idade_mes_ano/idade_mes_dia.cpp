#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main()
{
	float anos, mes,dia, horas,minutos, segundos;
	setlocale(LC_ALL,""); 
	cout<<"\n====================";
	cout<<"\nIDADE ANO MÊS DIA...";
	cout<<"\n====================";
	
	cout<<"\nDigite sua idade em anos: ";
	cin>>anos;
	
	mes = anos*12;
	dia = anos*365;
	horas = anos *8760;
	minutos = anos * 525600;
	segundos = anos*31536000;
	
	printf("\n\nSua idade em: \nMês: %.2f\nDia: %.2f\nHoras: %.2f\nMinutos: %.2f\nSegundos: %.2f",mes,dia,horas,minutos,segundos);
	
}
