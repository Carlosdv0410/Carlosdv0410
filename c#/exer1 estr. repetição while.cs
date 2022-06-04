using System;

public class exer1
{
    public static void Main(string[] args)
    {
        /*
        1) Desenvolva um sistema que exiba 58 vezes um nome digitado pelo usuário.
        */
        string nome;
        int oper;
        oper = 1;
        Console.Write("\nDigite um nome: ");
        nome = Console.ReadLine();
        while (oper <= 58)
        {
            Console.Write("\n "+nome+" "+oper);
            oper = oper+1;
        }
    }
}