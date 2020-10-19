//Q3. Declare a variable of a type float and print square of it after storing it in to a variable.

using System;

namespace ConsoleApplication3
{
    class Program
    {
        float square(float x)
        {
            return x*x;
        }

        static void Main(string[] args)
        {
            float x = 10.5f;
            Program myobj = new Program();
            float result = myobj.square(x);
            Console.WriteLine("Squqre of "+ x +" = " + result);
            Console.WriteLine("Square={0}", myobj.square(15.7f));
            Console.ReadLine();
        }
    }
}
