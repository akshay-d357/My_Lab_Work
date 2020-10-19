import java.util.*;
import java.io.*;

public class Employee implements Serializable {
	
	private int empid;
	private String empname,desig,basic;

	public Employee(int empid,String empname,String desig,String basic) {
		// TODO Auto-generated constructor stub
	this.empid=empid;
	this.empname=empname;
	this.desig=desig;
	this.basic=basic;
	}
public void disp()
{
System.out.println("empid-"+empid + "  "+ "empname"+empname +"  "+ "desig"+ desig +"  "+ "basic"+basic + "\t");
}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List<Employee> e= new ArrayList();
		e.add(new Employee(1,"AKshay","devloper","basic1"));
		e.add(new Employee(2,"ganesh","manager","basic2"));
		e.add(new Employee(3,"bipin","owner","basic3"));
		e.add(new Employee(4,"Aditya","tester","basic3"));
		
		try(FileOutputStream fos=new FileOutputStream("d:\\newakshay.txt"))
		{
		try(ObjectOutputStream oos=new ObjectOutputStream(fos))
		{
		oos.writeObject(e); //Serialization
		
		}
		}
		catch(Exception ee)
		{
			ee.printStackTrace();
		}
		
try(FileInputStream fis= new FileInputStream("d:\\newakshay.txt"))
{
	try(ObjectInputStream ois= new ObjectInputStream (fis))
	
	{
	
		List e1=(List) ois.readObject();
		System.out.println("reading");
		Iterator itr = e1.iterator();
		while(itr.hasNext())
		{
			((Employee)itr.next()).disp();
		}
}
	}
catch(Exception ee)
{
	ee.printStackTrace();
}
	

	}
}
