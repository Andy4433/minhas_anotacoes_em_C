using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Digite um número inteiro:");
        string input = Console.ReadLine();
        int num;
        
        if (int.TryParse(input, out num))
        {
            if (num == 12)
            {
                Console.WriteLine("Você digitou 12.");
            }
            else
            {
                Console.WriteLine("Você digitou um número, mas não é 12.");
            }
        }
        else
        {
            Console.WriteLine("Entrada inválida. Certifique-se de digitar um número inteiro.");
        }
    }
}
