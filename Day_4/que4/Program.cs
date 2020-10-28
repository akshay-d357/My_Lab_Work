//Create a class Printer with a private constructor. Your application should give only one reference of the printer object.

using System;
using ClassLibraryPrinter1;


namespace ConsoleAppForPrinter1
{
    class Program
    {
        static void Main(string[] args)
        {
            Printer p1 = Printer.Instance();
            Printer p2 = Printer.Instance();
            if (p1 == p2)
                Console.WriteLine("App have only one referance");

            Console.ReadLine();
        }
    }
}