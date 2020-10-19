package second;

interface A{
	int num=100;
}
class B{
	int num1=200;
}
public class Child extends B implements A{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Child c=new Child();
System.out.println(c.num1);
System.out.println(c.num);
	}

}
