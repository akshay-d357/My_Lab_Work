//Accept a number from user and display its type and parent class 

using System;

namespace ConsoleAppStruct5
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Number: ");
            int no = int.Parse(Console.ReadLine());
            Console.WriteLine("Type of {0} is: {1}", no, no.GetType());
            Console.WriteLine("Parent Class of {0} is: {1}", no, no.GetType().BaseType);
            Console.ReadLine();
        }
    }
}