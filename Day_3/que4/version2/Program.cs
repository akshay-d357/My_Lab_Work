//Q4. Create class library “mycaculator” having instance method  add and product 
//   which will return sum and product of two number.  Create shared assembly and 
//  use in your project. After  this add method cube  to a copy of class library 
//  “mycaculator” change the version and add it to GAC. Create a application to use 
//   this new version of library. Ensure that your both console application works.



using System;
using ClassLibraryDllHell;

namespace ConsoleAppForVersion2
{
    class Program
    {
        static void Main(string[] args)
        {
            mycaculator m1 = new mycaculator();
            int Cube1 = m1.Cube(5);
            int Add1 = m1.add(15, 10);
            int Prod1= m1.Prod(5, 3);
            Console.WriteLine("From version 2\nCube: {0}\nAddition: {1}\nProduct: {2}", Cube1,Add1,Prod1);
            Console.ReadLine();
           
        }
    }
}