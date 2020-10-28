//Create a class Printer with a private constructor. Your application should give only one reference of the printer object.

using System;

namespace ClassLibraryPrinter1
{
    public class Printer
    {
        private static Printer prt;
        static Printer()
        {
            Console.WriteLine("\tCanon Printer");
        }
        private Printer()
        {
            prt = null;

        }
        public static Printer Instance()
        {
            if (prt == null)
                prt = new Printer();

            return prt;
        }
    }
}
