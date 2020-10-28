
//Q4. Create class library “mycaculator” having instance method  add and product 
//which will return sum and product of two number.  Create shared assembly and 
//use in your project. After  this add method cube  to a copy of class library 
//“mycaculator” change the version and add it to GAC. Create a application to use 
//this new version of library. Ensure that your both console application works.

using System;

namespace ClassLibraryDllHell
{
    public class Class1
    {
        public int add(int num1, int num2)
        {
            return (num1 + num2);
        }
        public int Prod(int num1, int num2)
        {
            return (num1 * num2);
        }

    }
}