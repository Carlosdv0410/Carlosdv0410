using System;

public class exer1
{
    public static void Main(string[] args)
    {
        /*
        2) Desenvolva um sistema que exiba a soma de um número com o contador 100 vezes.
        */

        int n1, oper, res;
        oper = 1;
        Console.Write("\nDigite um numero: ");
        n1 = int.Parse(Console.ReadLine());
        
        while (oper <=100)
        {
            res = n1+oper;
            Console.Write("\n"+n1+" + "+oper+" = "+res);
            oper = oper + 1;
        }
    }
}