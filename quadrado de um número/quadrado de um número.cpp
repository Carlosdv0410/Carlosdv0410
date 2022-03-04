#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

main()
{
	setlocale(LC_ALL,""); 
	cout<<"\n_____________________";
	cout<<"\nQUADRADO DE UM NÚMERO";
	cout<<"\n_____________________";
	
	int n1, n2;
	
	cout<<"\nDigite o valor desejado: ";
	cin>>n1;
	
	n2 = n1*n1;
	
	cout<<"\nO quadrado de "<<n1<<" é "<<n2;
}
