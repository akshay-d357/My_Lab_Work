package Assignment3;

class Z{
	Z(){
		System.out.println("in class Z");
	}
	
}
class B
{
	B(int i)
	{
		System.out.println("in class B");
	}
}
class c extends B{
	c()
	{
		super(10);
		System.out.println("In class c");
	}
	
}
public class Multilevel {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		c c1=new c();
	}

}
