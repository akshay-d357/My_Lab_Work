/*
4)Define a class "DemoOb". 
create an instance of it.
now create a reference and assign the reference created in the above statement.
	Discuss what happens?
Now since u have 2 references, take one of the reference and assign a new instance of the class.
	Discuss what happens?
(For ur discussion, write necessary comments in the program)
*/

package Assignment2;
public class DemoOb{
static int cnt;
{
cnt++;
}

public DemoOb(){
System.out.println("in constructor");
}

public static void main(String[] args)
{
	DemoOb ob1=new DemoOb();  // first instance

	DemoOb ob2=ob1;  // ob2 is a reference to that instance where ob1 is referring to 

	ob1=new DemoOb();  // here ob1 will refer to a new instance created.
	
	System.out.println(cnt); //no of objects created

}
}
