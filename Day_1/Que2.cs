//Q2. Declare 2  variable of a type byte and print product of it.
using System;


namespace ConsoleApplication2
{
    class Program
    {
        int product(byte x, byte y)
        {
            return x * y;
        }

        static void Main(string[] args)
        {
            byte x = 5;
            byte y = 15;
            Program myobj = new Program();
            int result = myobj.product(x, y);
            Console.WriteLine("result=" + result);
            Console.WriteLine("result={0}", myobj.product(5, 2));
            Console.ReadLine();
        }
    }
}
    

