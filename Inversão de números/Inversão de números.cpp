#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

main()
{
	float n1, n2, n3;
	setlocale(LC_ALL,""); 
	cout<<"\n________";
	cout<<"\nINVERS�O";
	cout<<"\n________";
	
	cout<<"\n\nDigite o primeiro n�mero: ";
	cin>>n1;
	cout<<"\nDigite o segundo n�mero: ";
	cin>>n2;
	cout<<"\nDigite o terceiro n�mero: ";
	cin>>n3;
	cout<<"\nResultado: "<<n1<<", "<<n2<<", "<<n3;

}
