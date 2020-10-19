
package Assignment3;

public class DemoArr {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		DemoArr a[]=new DemoArr[4];
		for(int i=0;i<a.length;i++)
		{
			a[i]=new DemoArr();
		}
		for(int i=0;i<a.length;i++)
		{
			a[i].display();
		}
		
	}

	private void display() {
	System.out.println("From disp");
		
	}

}
