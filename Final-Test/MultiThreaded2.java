package Thread;

public class MultiThreaded2 implements Runnable {

	public static void main(String[] args) {
		MultiThreaded2 m1=new MultiThreaded2();
		Thread t1=new Thread(m1);
		Thread t2=new Thread(m1);
		t1.start();
		t2.start();

	}
 
    synchronized public void run() {
    	char a='a';
    	while(a<='j')
		System.out.println(a++);
	}
	
	
}
