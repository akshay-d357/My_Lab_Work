//Create a class calculator having  static method square, cube, absolute, floor,ceil 
//who’s job is to find square, cube, absolute (-2.2 ==2.2)floor(eg. 2.7==O/P==2) , Ceil(eg 2.9==3) value respectively.


using System;
namespace ConsoleAppCalculator
{
    public class Calculator
    {
        static Calculator()
        {
            Console.WriteLine("\tCalculator\n");
        }
        public static int Square(int s)
        {
            return (s * s);
        }
        public static int Cube(int c)
        {
            return (c * c * c);
        }
        public static double absolute(double n)
        {
            return Math.Abs(n);
        }
        public static double floor(double n)
        {
            return Math.Floor(n);
        }
        public static double ceil(double n)
        {
            return Math.Ceiling(n);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            int Sq = Calculator.Square(2);
            int Cu = Calculator.Cube(2);
            double ab = Calculator.absolute(-2.2);
            double f = Calculator.floor(2.7);
            double c = Calculator.ceil(2.9);

            Console.WriteLine("Square: {0}\nCube: {1}\nAbsolute: {2}\nFloor: {3}\nCeil: {4}", Sq, Cu, ab,f,c);

            Console.ReadLine();
        }
    }
}