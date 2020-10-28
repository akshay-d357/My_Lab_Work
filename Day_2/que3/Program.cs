using System;
using ClassLibrary2;


namespace ConsolePvtApp
{
    class Program
    {
        static void Main(string[] args)
        {
            SqrCube m = new SqrCube();
            int S = m.sqr(2);
            int C = m.cube(2);
            Console.WriteLine("Square: {0}\nCube: {1}", S, C);
            Console.ReadLine();
        }
    }
}