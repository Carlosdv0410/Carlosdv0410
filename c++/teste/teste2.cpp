#include <stdio.h>
#include "teste1.cpp"
 
int main(){
    //Chamando a fun��o para pegar o valor
    int aux = teste2();
 
    //Demonstrando valor lido e esperando usu�rio apertar o -Enter-
    printf("\n-->%d", aux);

 
    //Finalizando a rotina
    return 0;
}
