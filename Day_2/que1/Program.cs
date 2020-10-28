using System;

namespace Addition
{
    class Program
    {
        static void Main(string[] args)
        {
            int Number1, Number2;
            Console.WriteLine("please enter the Number1");
            Number1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("please enter the Number2");
            Number2 = Convert.ToInt32(Console.ReadLine());
            int Result;
            Result = Number1 + Number2;
            Console.WriteLine("Sum of two Numbers:" + Result.ToString());
            Console.ReadLine();
        }
    }
}