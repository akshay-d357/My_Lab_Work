//Create a class Employee having private instance member Id, Name Salary, netsalary. 
//Create method calculate_netsalary who’s job is to deduct 10% of TDS.. Write method display 
//which will display name and netsalary. This application will be classlibrary.
//Create console application and use this class library. Create at least two object of Employee class 


using System;


namespace ClassLibraryEmployee1
{
    public class Employee
    {
        int Id;
        string Name;
        int Salary;
        double NetSalary;
        static Employee()
        {
            Console.WriteLine("\tEmployee Payment Sheet\n");
        }
        public Employee(int id, string nm, int sal)
        {
            this.Id = id;
            this.Name = nm;
            this.Salary = sal;
        }
        public double Calculate()
        {
            double tds = 0.1;
            NetSalary = Salary - Salary * tds;
            return NetSalary;
        }
        public string Display()
        {
            double nsal = Calculate();
            return string.Format("Name: {0} Netsalary: {1}", Name, nsal);
        }

    }
}