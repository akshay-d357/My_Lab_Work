using System;
//Q1. Create a struct Math having two static method square and cube. Using struct variable call this method and print square and cube of a number

namespace ConsoleAppStruct1
{
    struct Math
    {
        public static int Square(int s)
        {
            return (s * s);
        }
        public static int Cube(int c)
        {
            return (c * c * c);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            int S = Math.Square(2);
            int C = Math.Cube(2);
            Console.WriteLine("Square: {0}\nCube: {1}",S,C);
            Console.ReadLine();
        }
    }
}
