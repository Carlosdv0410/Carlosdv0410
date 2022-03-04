#include <iostream>
#include <locale.h>
#include <stdio.h>


using namespace std;

main(){
		
	setlocale(LC_ALL,""); 
	
	cout<<"\n_____________________";
	cout<<"\nINVERSÃO DE VARIÁVEIS";
	cout<<"\n_____________________";
	

	int n1, n2, n3;//n3 e uma variável para controle de valores, para não haver repetição na troca de n1 para n2
	
	cout<<"\nDigite o primeiro número: ";
	cin>>n1;
	cout<<"\nDigite o segundo número: ";
	cin>>n2;
	
	n3 = n2;
	n2 = n1;
	n1 = n3;
	
	cout<<"\nResultado: "<<n1<<", "<<n2;
}
