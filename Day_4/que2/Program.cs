//Create a class Employee having private instance member Id, Name Salary, netsalary.
//Create method calculate_netsalary who’s job is to deduct 10% of TDS.. Write method display
//which will display name and netsalary. This application will be classlibrary.
//Create console application and use this class library. Create at least two object of Employee class 

using System;
using ClassLibraryEmployee1;

namespace ConsoleAppForEmployee1
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee e1 = new Employee(15, "Bipin", 90000);
            Console.WriteLine(e1.Display());

            Employee e2 = new Employee(25, "Ketan", 200000);
            Console.WriteLine(e2.Display());

            Console.ReadLine();
        }
    }
}