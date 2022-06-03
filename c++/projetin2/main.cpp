#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include "circulo.h"
#include "radiano.h"
#include "quadrado.h"
#include "tria_retan.h"
#include "calculadora.h"
#include "altsala.h"
#include "conversor.h"
#include "media.h"
#include "primopares.h"
using namespace std;

int main()
{
	int oper;
	do{
		system("cls");
		setlocale(LC_ALL,""); 
		system("cls");
		cout<<"\n===========================";
		cout<<"\n          CENTRAL          ";
		cout<<"\n===========================";
		
		printf("\n\nOque gostaria de fazer?"
		"\n[1]Converter temperaturas"
		"\n[2]Modificar salário"
		"\n[3]Calcular média"
		"\n[4]Calcular círculo"
		"\n[5]calcular quadrado"
		"\n[6]Utilizar calculadora"
		"\n[7]Calcular triângulo"
		"\n[8]Calcular radiano"
		"\n[9]Descobrir primos pares"
		"\n[10]Sair"
		"\n\nResposta: ");
		scanf("%d",&oper);
		
		if(oper == 1){
			conv();
		}else if(oper == 2){
			salario();
		}else if(oper == 3){
			calcumedia();
		}else if(oper == 4){
			circul();
		}else if(oper == 5){
			quadrad();
		}else if(oper == 6){
			calculador();
		}else if(oper == 7){
			triangulo();
		}else if(oper == 8){
			radian();
		}else if(oper == 9){
			mainprimos();
		}
			
	}while(oper != 10);

}
