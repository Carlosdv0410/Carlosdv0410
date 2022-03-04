#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

main()
{
	float n1, n2, n3;
	setlocale(LC_ALL,""); 
	cout<<"\n________";
	cout<<"\nINVERSÃO";
	cout<<"\n________";
	
	cout<<"\n\nDigite o primeiro número: ";
	cin>>n1;
	cout<<"\nDigite o segundo número: ";
	cin>>n2;
	cout<<"\nDigite o terceiro número: ";
	cin>>n3;
	cout<<"\nResultado: "<<n1<<", "<<n2<<", "<<n3;

}
