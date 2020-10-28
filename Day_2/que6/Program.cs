using System;
//Accept a number and stored it in byte data type check what happen if you enter 258?
namespace ConsoleAppStoredInByte
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Number: ");
            string num = Console.ReadLine();
            byte b = byte.Parse(num);
            /*
             System.OverflowExcepion {"Value was either too large or too small for an unsigned byte."} 
             */

            Console.WriteLine("Data: " + b);
            Console.ReadLine();
        }
    }
}