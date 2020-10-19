package Exception;


class MyArithException extends Exception 
{
	MyArithException(String s)
	{
		super(s);
	}
}
class Calculator{
	int caldouble(int a) throws MyArithException
	{
		if(a<=0)
		{
			throw new MyArithException("Value less than or equal to 0");
		}
		return 2*a;
	}
}
public class MyCalcApp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Calculator c=new Calculator();
		try {
			System.out.println(c.caldouble(-5));
		}
		catch(MyArithException e)
		{
			System.out.println(e);
		}
		
	}

}
