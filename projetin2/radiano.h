#include<iostream>

using namespace std;

radian()
{
	float angulo, radi;

	cout<<"\n=================";
	cout<<"\nCONVERSOR RADIANO";
	cout<<"\n=================";
	
	cout<<"\nQuantos graus possui?: ";
	cin>> angulo;
	
	radi = angulo*3.14/180;
	
	cout<<"\nO total de radianos no seu circulo e: "<<radi<<" radi";
	cout<<"\nenter para sair\n";
	system("\npause");
}
