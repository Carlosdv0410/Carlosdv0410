#include <iostream>
#include <locale.h>
#include <stdio.h>


using namespace std;

main(){
		
	setlocale(LC_ALL,""); 
	
	cout<<"\n_____________________";
	cout<<"\nINVERS�O DE VARI�VEIS";
	cout<<"\n_____________________";
	

	int n1, n2, n3;//n3 e uma vari�vel para controle de valores, para n�o haver repeti��o na troca de n1 para n2
	
	cout<<"\nDigite o primeiro n�mero: ";
	cin>>n1;
	cout<<"\nDigite o segundo n�mero: ";
	cin>>n2;
	
	n3 = n2;
	n2 = n1;
	n1 = n3;
	
	cout<<"\nResultado: "<<n1<<", "<<n2;
}
