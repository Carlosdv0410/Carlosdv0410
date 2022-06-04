using System;

public class Media
{
    public static void Main(string[] args)
    {
        string nome, oper;
        double n1, n2, n3, n4, media;
        do{
            Console.Write("\n===============");
            Console.Write("\n     Media     ");
            Console.Write("\n===============");

            Console.Write("\nNome do aluno: ");
            nome=Console.ReadLine();
            Console.Write("\nPrimeira nota: ");
            n1 = double.Parse(Console.ReadLine());
            Console.Write("\nSegunda nota: ");
            n2 = double.Parse(Console.ReadLine());
            Console.Write("\nTerceira nota: ");
            n3 = double.Parse(Console.ReadLine());
            Console.Write("\nQuarta nota: ");
            n4 = double.Parse(Console.ReadLine());
            
            media = (n1+n2+n3+n4)/4;

            Console.Write("A media do aluno "+nome+" foi "+media.ToString("N1"));
            if (media>=7.0)
            {
                Console.Write("O aluno foi APROVADO!");
            }else
            {
                Console.Write("O aluno foi REPROVADO!");
            }
            Console.Write("\nGostaria de realizar uma nova operação?[S/N]");
            oper = Console.ReadLine();
        }while (oper == "S" || oper == "s");
    }
}