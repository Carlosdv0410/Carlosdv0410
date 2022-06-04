using System;

public class exer3
{
    public static void Main(string[] args)
    {
        /*
        3) Desenvolva um sistema com um menu com as seguintes opções:
        1-Digitar uma palvra e exibi-la;
        2-Digitar 2 números, somar e exibe a soma;
        0-Sair;
        */
        string palavra;
        int oper, n1, n2, res;
        
 
        do
        {
        Console.Write("\n--------------");
        Console.Write("\n     MENU     ");
        Console.Write("\n--------------");

        Console.Write("\n[1]Palavra\n[2]Soma\n[0]Sair\nResposta: ");
        oper = int.Parse(Console.ReadLine());
            switch (oper)
            {
                case 1:{
                    Console.Write("\nDigite uma palavra: ");
                    palavra = Console.ReadLine();
                    Console.Write("\nExibida: "+palavra);
                    break;
                }
                case 2:{
                    Console.Write("\nDigite o primeiro numero: ");
                    n1 = int.Parse(Console.ReadLine());
                    Console.Write("\nDigite o segundo numero: ");
                    n2 = int.Parse(Console.ReadLine());
                    res = n1 + n2;
                    Console.Write("\n O resultado da soma foi: "+res);
                    break;
                }
            }   
        } while (oper != 0);    
    }
}