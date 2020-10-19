package Thread;

public class MultiThreaded1 extends Thread {

	public static void main(String[] args) {
		MultiThreaded1 m1=new MultiThreaded1();
		MultiThreaded1 m2=new MultiThreaded1();
		m1.start();
		m2.start();

	}
 
    synchronized public void run() {
    	char a='a';
    	while(a<='j')
		System.out.println(a++);
	}
	
	
}
