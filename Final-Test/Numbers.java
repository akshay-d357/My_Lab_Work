public class Numbers
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
		try {
			wait();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		notifyAll();
				
	}
	
	synchronized void noo(int k)
	{
		
		System.out.println(k);
		notifyAll();
		try {
			wait();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
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
		while(i<=30) {
		a.no(i);
		i=i+2;
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
		int i=2;
		while(i<=30) 
		{
		a.noo(i);
		i=i+2;
		}
	}
}