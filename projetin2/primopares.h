#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <cmath>

using namespace std;

void primos(){
	
	system("cls");
	setlocale(LC_ALL,"");
	
	int oper, num, num1,cont;

	printf("\n======");
	printf("\nPRIMOS");	
	printf("\n======");
	
	printf("\n\nGostaria de decobrir:"
	"\n[1]Todos os n�meros primos"
	"\n[2]Apenas um numero"
	"\n[3]Sair"
	"\n\nResposta: ");
	scanf("%d",&oper);
	
	printf("Digite o n�mero que deseja descobrir: ");
	scanf("%d",&num);
	
	if(oper == 1){
		int aux, coun, div;
		cout<<"Os n�meros primos s�o: ";
	    for(aux=2 ; aux<=num ; aux++){
	        div=0;
	
	        for(coun=2 ; coun<=sqrt(aux) ; coun++)
	            if(aux%coun==0)
	                div++;
	
	        if(!div)
	            cout<<aux<<"   ";
	    }
	
	    system("pause");
	
	    
			
	}else if(oper == 2){
		int aux, div=0;

    for(aux=2 ; aux<=sqrt(num) ; aux++)
        if(num%aux==0)
            div++;

    if(div==0)
        cout<<"� primo"<<endl;
    else
        cout<<"N�o � primo"<<endl;
    
		
	}
	
	system("pause");
}

void pares(){
	
	system("cls");
	setlocale(LC_ALL,"");
	
	int n, res;
	
	cout<<"\n=========";
	cout<<"\nPAR �MPAR";
	cout<<"\n=========";
	
	cout<<"\nDigite o valor que deseja descobrir: ";
	cin>>n;
	
	res = n % 2;
	
	if(res == 0){
		cout<<"\nO n�mero � par!\n";
	}else{
		cout<<"\nO n�mero � �mpar!\n";
	}
	system("\n\npause");
}
void mainprimos(){
	int oper;
	do{
	
		system("cls");
		setlocale(LC_ALL,"");
	
		printf("\n====================");
		printf("\nPRIMOS PARES IMPARES");	
		printf("\n====================");
		
		printf("\n\nQual gostaria de realizar?"
		"\n[1]N�meros primos n�o primos"
		"\n[2]N�meros pares �mpares"
		"\n[3]Sair"
		"\nResposta: ");
		scanf("%d",&oper);
		
		if(oper == 1){
			primos();
		}else if(oper == 2){
			pares();
		}
		
			
	}while(oper != 3);
}
