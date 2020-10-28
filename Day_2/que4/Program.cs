using System;
//Accept two name from user and concat.
namespace ConctinationOfString
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Two Name: ");
            String str1 = Console.ReadLine();
            String str2 = Console.ReadLine();
            Console.WriteLine(str1 + str2);
            Console.ReadLine();
        }
    }
}
