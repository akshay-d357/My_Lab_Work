/*
6) define static initializers in the above A,B and C classes and check the order of their execution.
*/

package Assignment2;

class D
{
	private int num;
	private static int cnt=10;

static
{
System.out.println("in D's static initilizer");
}


	public D(){
	num=2;
	}

	public int getNum(){
		return num;
	}

	public void setNum(int num) {
		this.num = num;
	}
 	public static int getCnt() 
	{
       		return cnt;
  	}


}

class E
{
	private String s;
	private static String cnt="hello";

static
{
System.out.println("in E's static initilizer");
}

	public E(){
	s = "Akshay";
	}

	public String getS(){
		return s;
	}

	public void setS(String s) {
		this.s = s;
	}
 	public static String getCnt() 
	{
       		return cnt;
  	}


}

class F
{
	private String s1;
	private static int cnt=5;

static
{
System.out.println("in F's static initilizer");
}

	public F(){
	s1 = "Akshay";
	}

	public String getS1(){
		return s1;
	}

	public void setS1(String s1) {
		this.s1 = s1;
	}
 	public static int getCnt() 
	{
       		return cnt;
  	}


}

	
class DemoStatic{

static
{
System.out.println("in main's 1st static initilizer");
}

public static void main(String[] args){
D d1=new D();
System.out.println(d1.getNum());
int d= D.getCnt();
System.out.println(d);

E e1=new E();
System.out.println(e1.getS());
String e= E.getCnt();
System.out.println(e);

F f1=new F();
System.out.println(f1.getS1());
int f= F.getCnt();
System.out.println(f);

}
static
{
System.out.println("in main's 2nd static initilizer");
}

}