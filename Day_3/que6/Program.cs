
//Create a class having instance member salary. Create a object of a class. Print data type of reference of a class also print parent class name.

using System;
namespace ConsoleAppStruct6
{
    class Emp
    {
        public int salary;
        /*public Emp(int sal)
        {
            salary = sal;
        }*/
    }
    class Program
    {
        static void Main(string[] args)
        {
            Emp e1 = new Emp();
            Console.WriteLine("Data type of Reference: {0}\nParent Class Name: {1}", e1.GetType(), e1.GetType().BaseType);
            Console.ReadLine();
        }
    }
}