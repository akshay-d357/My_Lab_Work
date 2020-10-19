package Assignment3;

abstract class shape1{
	
	abstract void draw();
}
class Traingle extends shape1{
	void draw()
	{
		System.out.println(("Draw Traingle"));
	}
}
class Polygon extends shape1{
	void draw()
	{
		System.out.println(("Draw polygon"));
	}
}
class Circle extends shape1{
	void draw()
	{
		System.out.println(("Draw Circle"));
	}
}
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		shape1 arr[]=new shape1[3];
		arr[0]=new Traingle();
		arr[1]=new Polygon();
		arr[2]=new Circle();
		for(int i=0;i<3;i++)
		{
			arr[i].draw();
		}
	}

}
