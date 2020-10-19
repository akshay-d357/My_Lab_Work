//Q1. Declare 2 variable of a type short and store sum of it in a variable and print it.
using System;

namespace ConsoleApplication1
{
    class Program
    {
        int sum(short x, short y)
        {
            return x + y;        }
        static void Main(string[] args)
        {
            short x = 10;
            short y = 20;
            Program myobj = new Program();
            int result= myobj.sum(x, y);
            Console.WriteLine("result=" + result);
            Console.WriteLine("result={0}", myobj.sum(10,2));
            Console.ReadLine();
        }
    }
}
