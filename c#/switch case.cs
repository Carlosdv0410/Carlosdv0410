using System;

public class main
{
    public static void Main(string[] args)
    {
        int opcao;
       do
       {
            Console.Write("\n\n-----------\n ATIVIDADE\n-----------\n\n[1]Calculo Idade\n[2]Ano de nascimento\n[3]Calculo maior idade\n[4]IMC\n[0]Sair\nResposta:");
            opcao = int.Parse(Console.ReadLine());
            switch(opcao)
            {
                case 1:
                    int anonasc,aux_ano,idade;
                    Console.Write("\nDigite seu ano de nascimento: ");
                    anonasc = int.Parse(Console.ReadLine());
                    Console.Write("\nDigite o ano atual: ");
                    aux_ano =int.Parse(Console.ReadLine());
                    idade = aux_ano - anonasc;
                    Console.Write("\nSua idade e: "+idade);
                break;
                case 2:
                    int idade2, anoatual2, anonasc2;
                    Console.Write("\nDigite sua idade: ");
                    idade2 = int.Parse(Console.ReadLine());
                    Console.Write("\nDigite o ano atual: ");
                    anoatual2 = int.Parse(Console.ReadLine());
                    anonasc2 = anoatual2 - idade2;
                    Console.Write("\nvoce nasceu em: "+anonasc2);
                break;
                case 3:
                    int idade3;
                    Console.Write("\nDigite sua idade: ");
                    idade3 = int.Parse(Console.ReadLine());
                    if(idade3 >=18){
                        Console.Write("\nVoce e maior de idade!\n");
                    }else{
                        Console.Write("\nVoce e menor de idade!\n");
                    }
                break;
				case 4:
                    double peso, altura, imc;
					Console.Write("\nDigite seu peso: ");
					peso = double.Parse(Console.ReadLine());
					Console.Write("\nDigite sua altura(Metros):") ;
					altura = double.Parse(Console.ReadLine());
					imc = peso/(altura*altura);
					Console.Write("\nSeu IMC: "+imc.ToString("N1"));
					if(imc < 18.5){
					    Console.Write("\nBaixo peso\n");
					}else if(imc >= 18.5 && imc <=24.9){
					    Console.Write("\nPeso normal\n");
					}else if(imc >= 25 && imc<=29.9){
					    Console.Write("\nSobrepeso\n");
					}else if(imc >= 30 && imc<= 34.9){
					    Console.Write("\nObesidade grau I\n");
					}else if(imc >=35 && imc <= 39.9){
					    Console.Write("\nObesidade grau II\n");
					}else if(imc >=40){
					    Console.Write("\nObesidade Mórbida\n");
					}
				break;	
            }
             Console.Clear();
       }while(opcao != 0);
        Console.WriteLine("\nsaindo...");
    }
}