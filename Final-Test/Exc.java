package Thread;

public class Exc implements Runnable {

	public static void main(String[] args) {
		Exc e=new Exc();
		Thread t1=new Thread(e);
		Thread t2=new Thread(e);
		Thread t3=new Thread(e);
		t1.start();
		t2.start();
		t3.start();
	}

	@Override
synchronized public void run() {
		int i=0;
		while(i<6) {
			System.out.println("EXEC "+i++);
		}
		
	}

}
