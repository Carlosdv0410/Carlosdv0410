#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

main()
{
	setlocale(LC_ALL,""); 
	float res,ntotal,vb,vv,vn;
	cout<<"\n=========";
	cout<<"\nELEITORES";
	cout<<"\n=========";

	cout<<"\nDigite o n�mero total de eleitores: ";
	cin>>ntotal;
	cout<<"\nDigite o n�mero de votos em branco: ";
	cin>>vb;
	cout<<"\nDigite o n�mero de votos v�lidos: ";
	cin>>vv;	
	cout<<"\nDigite o n�mero de votos nulos: ";
	cin>>vn;
	
	res = vb/ntotal*100;
	cout<<"\nVotos em Branco em rela��o ao total: "<<res<<"%";
	res = vv/ntotal*100;
	cout<<"\nVotos v�lidos em rela��o ao total: "<<res<<"%";
	res = vn/ntotal*100;
	cout<<"\nVotos nulos em rela��o ao total: "<<res<<"%";
	
	
}
