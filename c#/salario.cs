using System;

public class Media
{
    public static void Main(string[] args)
    {
        string nome, oper, oper2;
        double inss, vt, he, desc, salar, salaralt;
        do{
            Console.Write("\n=================");
            Console.Write("\n     Salario     ");
            Console.Write("\n=================");

            Console.Write("\nNome do funcionario: ");
            nome =Console.ReadLine();
            Console.Write("\nSalario do funcionario: ");
            salar = double.Parse(Console.ReadLine());
            Console.Write("\nModicar as alteracoes[S/N]");
            oper2 = Console.ReadLine();

            if(oper2 =="s" || oper2 =="S")
            {
                Console.Write("\n---------------------------------------------------------------------------------------------");
                Console.Write("\nDesconto INSS[%]: ");
                inss = double.Parse(Console.ReadLine());
                Console.Write("\nVale transporte[%]: ");
                vt = double.Parse(Console.ReadLine());
                Console.Write("\nAcrescentar hora extra[%]: ");
                he = double.Parse(Console.ReadLine());
                Console.Write("\nAcrescentar descanso[%]: ");
                desc = double.Parse(Console.ReadLine());
            }else
            {
                inss = 8;
                vt = 6;
                he = 33;
                desc = 30;
            }
            salaralt=salar+(salar/100)*he;
            
            salaralt = salaralt-(salar/100)*inss;

            salaralt = salaralt-(salar/100)*vt;

            salaralt = salaralt+(salaralt/100)*desc;
    

            Console.Write("\n---------------------------------------------------------------------------------------------\n");

            Console.Write("\nO salario alterado do funcionario "+nome+" foi: "+salaralt);

            Console.Write("\n---------------------------------------------------------------------------------------------\n");
            Console.Write("\nGostaria de realizar uma nova operacao?[S/N] ");
            oper = Console.ReadLine();
        }while (oper == "S" || oper == "s");
    }
}