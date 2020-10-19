package Thread;

public class ClassLock implements Runnable {

	public static void main(String[] args) {
		ClassLock c=new ClassLock();
		Thread t1=new Thread(c);
		Thread t2=new Thread(c);
		t1.start();
		t2.start();
	}
	static int i=0;
	@Override
	public void run() {
		
		synchronized(this)
		{
			while(i<11)
			{
				notify();
				try {
					System.out.println(i++);
					wait();
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
			
			
		}
		
	}

}
