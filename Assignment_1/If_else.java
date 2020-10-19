package Assignment1;

public class If_else
{
	public static void main(String[] args)
	{
		int marks=57;
		if(marks>=67 && marks<=100)
		{
			System.out.println("Distinction");
		}
		else if(marks>=60 && marks<67)
		{
			System.out.println("1st class");
		}
		else if(marks>=50 && marks<60)
		{
			System.out.println("2nd class");
		}
		else if(marks>=40 && marks<50)
		{
			System.out.println("pass");
		}
		else if(marks>=0 && marks<40)
		{
			System.out.println("fail");
		}
		else
		{
			System.out.println("invalid");
		}

	}
}