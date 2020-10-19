package Thread;

public class Main
{	
	public static void main(String args[])
	{
		A a=new A();
		B b=new B(a);
		C c=new C(a);
		Thread t1=new Thread(b);
		Thread t2=new Thread(c);
		t1.start();
		t2.start();
	}
}
class A{
	synchronized void no(int k)
	{
		System.out.println(k);		
	}
	
	synchronized void noo(int k)
	{
		System.out.println(k);
	}
}
class B implements Runnable{
	A a;
	B(A a)
	{
		this.a=a;
	}
	@Override
	public void run() {
		int i=1;
		while(i<=50) {
		a.no(i);
		++i;
	}
	
}
}
class C implements Runnable{
	A a;
	C(A a)
	{
		this.a=a;
	}
	
	@Override
	public void run() {
		int i=50;
		while(i>=1) 
		{
		a.noo(i);
		--i;
		}
	}
}