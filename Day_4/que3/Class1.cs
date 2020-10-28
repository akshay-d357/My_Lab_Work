//Create a class customer having member Id, name, billamount. 
//When you create a object allow to have default value. Print default value of id,name, billamount.

using System;

namespace ClassLibraryCustomer1
{
    public class Customer
    {
        int Id;
        string name;
        int billamount;
        static Customer()
        {
            Console.WriteLine("\tCustomer Bill");
        }
        public Customer()
        {
            Id = 0;
            name = "NA";
            billamount = 0;
        }
        public string display()
        {
            return string.Format("Id: {0}\nname: {1}\nbillamount: {2}", Id, name, billamount);
        }
    }
}
