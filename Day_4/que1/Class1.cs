
//Create a class Account having private instance member Id, Name Balanceamt. Create method deposit who’s job is to increase Balanceamtby the amout deposited buy account holder. Create method withdraw who’s job is to decrease Balanceamtby the amout  withdrwan buy account holder. Write method display which will display name and Balanceamt. This application will be classlibrary.
//Create console application and use this class library. Create at least two object of account class and deposit and withdraw money.

using System;

namespace ClassLibraryBanking1
{
    public class Account
    {
        int Id;
        string Name;
        int Balanceamt;
        static Account()
        {
            Console.WriteLine("\tKolapur Bank\n");
        }
        public Account(int id, string name, int Balamt)
        {
            Id = id;
            Name = name;
            Balanceamt = Balamt;
        }
        public int Deposit(int upBal)
        {
            return Balanceamt = Balanceamt + upBal;
        }
        public int Withdraw(int dwBal)
        {
            return Balanceamt = Balanceamt - dwBal;
        }
        public string Display()
        {
            //double nsal= calculate ();
            return string.Format("\n\tID: {0} Name: {1} Balance: {2}", Id, Name, Balanceamt);
        }
    }
}