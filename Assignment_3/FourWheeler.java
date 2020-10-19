package Assignment3;

class Vehicle{
	public void start()
	{
		System.out.println("In Vehicle start");
	}
}
public class FourWheeler extends Vehicle {

	public void start()
	{
		System.out.println("In Fourwheeler start");
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Vehicle v=new FourWheeler();
		v.start();
	}

}
