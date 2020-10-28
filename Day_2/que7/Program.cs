 //Accept a number and stored it in byte data type if it goes beyond range throw exception

using System;
namespace TypeConversions
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Number: ");
            string num = Console.ReadLine();
            // to throw an exception if overflow/underflow  takes place.
            checked
            {
                byte b = byte.Parse(num);
                Console.WriteLine("your no:"+b);
                Console.ReadLine();
            }
        }
    }
}
