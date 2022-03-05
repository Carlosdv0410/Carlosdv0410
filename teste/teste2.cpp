#include <stdio.h>
#include "teste1.cpp"
 
int main(){
    //Chamando a função para pegar o valor
    int aux = teste2();
 
    //Demonstrando valor lido e esperando usuário apertar o -Enter-
    printf("\n-->%d", aux);

 
    //Finalizando a rotina
    return 0;
}
