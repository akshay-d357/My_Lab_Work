

 interface Course {
 
	void start();
}
class Dac implements Course
{
	public void start()
	{
		System.out.println("DAC");
	}
	
}
class PgDbda implements Course
{
	public void start()
	{
		System.out.println("PgDbda");
	}
	
}
class MSCIT implements Course
{
	public void start()
	{
		System.out.println("MSCIT");
	}
	
}


public class CourseDemo {
	
	public static void main(String args[])
	{
		Course arr[]=new Course[3];
		arr[0]=new Dac();
		arr[1]=new PgDbda();
		arr[2]=new MSCIT();
		for(int i=0;i<arr.length;i++)
		{
			arr[i].start();
		}
	}
}