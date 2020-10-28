//Q4. Create class library “mycaculator” having instance method  add and product
//    which will return sum and product of two number.  Create shared assembly and 
//    use in your project. After  this add method cube  to a copy of class library 
//   “mycaculator” change the version and add it to GAC. Create a application to use
//   this new version of library. Ensure that your both console application works.


using System;
using ClassLibraryDllHell;


namespace ConsoleAppForVersion1
{
    class Program
    {
        static void Main(string[] args)
        {
            Class1 Obj = new Class1();
            int Add1 = Obj.add(25, 15);
            int Prod1 = Obj.Prod(5, 6);
            Console.WriteLine("From version 1\nAddition: {0}\nProduct: {1}", Add1, Prod1);
            Console.ReadLine();
        }
    }
}