using System;
//Accept a number from user and pass it to static method of a struct calculator it should print all factor of a number.
namespace ConsoleAppStruct2
{
    struct calculator
    {
        public static void factor(int x)
        {
            for (int i = 1; i < x; i++)
            {
                if (x % i == 0)
                {
                    Console.Write(" " + i);
                }
            }
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Number: ");
            int no = int.Parse(Console.ReadLine());
            Console.WriteLine("Factors: ");
            calculator.factor(no);
            Console.ReadLine();
        }
    }
}