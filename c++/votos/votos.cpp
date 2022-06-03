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

	cout<<"\nDigite o número total de eleitores: ";
	cin>>ntotal;
	cout<<"\nDigite o número de votos em branco: ";
	cin>>vb;
	cout<<"\nDigite o número de votos válidos: ";
	cin>>vv;	
	cout<<"\nDigite o número de votos nulos: ";
	cin>>vn;
	
	res = vb/ntotal*100;
	cout<<"\nVotos em Branco em relação ao total: "<<res<<"%";
	res = vv/ntotal*100;
	cout<<"\nVotos válidos em relação ao total: "<<res<<"%";
	res = vn/ntotal*100;
	cout<<"\nVotos nulos em relação ao total: "<<res<<"%";
	
	
}
