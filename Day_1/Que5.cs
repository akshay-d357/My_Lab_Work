//Q5. create a class demomaths having method Square , cube which will take float value and return square and cube of a number.
using System;

namespace ConsoleApplication4
{
    public class demomaths 
    {
        public float square(float val)
        {
            return val * val;
        }

        public float cube(float val)
        {
            return val * val * val;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            float a = 10.5f;
            float b = 15.7f; 
            demomaths dm = new demomaths();
            float ans1 = dm.square(a);
            float ans2 = dm.cube(b);
            Console.WriteLine("Squqre of " + a + " = " + ans1);
            //Console.WriteLine("Square={0}", dm.square(15.7f));
            Console.WriteLine("Cube of " + b + "= " + ans2);
            Console.ReadLine();
        }
    }
}
