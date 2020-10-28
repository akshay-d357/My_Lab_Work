//Create struct emp having member name and salary, using constructor initialized member. Write display method which will display name and salary

using System;

namespace ConsoleAppStruct3
{
    struct emp
    {
        string name;
        int salary;
        public emp(String nm, int Sal)
        {
            name = nm;
            salary = Sal;
        }
        public void Display()
        {
            Console.WriteLine("Name: " + name);
            Console.WriteLine("Salary: " + salary);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            emp e1 = new emp("Bipin", 90000);
            e1.Display();
            Console.ReadLine();
        }
    }
}