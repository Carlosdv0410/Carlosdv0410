// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler
    
using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        string nome, sobren, peso, altura, idade, dia, mes, ano;
        Console.Write("Digite seu nome: ");
        nome = Console.ReadLine();
        Console.Write("Digite seu sobrenome: ");
        sobren = Console.ReadLine();
        Console.Write("Digiten sua idade: ");
        idade = Console.ReadLine();
        Console.Write("Digite seu peso: ");
        peso = Console.ReadLine();
        Console.Write("Digite sua altura: ");
        altura = Console.ReadLine();
        Console.WriteLine("Digite sua data de nascimento[dd/mm/aaaa]: ");
        Console.Write("Dia: ");
        dia = Console.ReadLine();
        Console.Write("Mes: ");
        mes = Console.ReadLine();
        Console.Write("Ano: ");
        ano = Console.ReadLine();
        
        Console.WriteLine("Seu nome é: "+nome+" "+sobren);
        Console.WriteLine("A idade de "+nome+" é: "+idade);
        Console.WriteLine("O peso de "+nome+" é: "+peso);
        Console.WriteLine("A altura de "+nome+" é: "+altura);
        Console.WriteLine("A data de nascimento de "+nome+" é: "+dia+"/"+mes+"/"+ano);

        


    }
}