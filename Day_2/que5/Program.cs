using System;
// Accept a number from user and print square of it, if input is not valid give appropriate message
namespace ConsoleAppAppropriateNumber
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Number: ");
            string no = Console.ReadLine();
            int res;
            bool temp = int.TryParse(no, out res);
            if (temp == true)
                Console.WriteLine("Square: " + (res * res));
            else
                Console.WriteLine("Invalid Input");

            Console.ReadLine();
        }
    }
}