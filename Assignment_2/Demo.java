/*5) Define 3 classes A , B and C
in all these classes create static and nonstatic variables as well as methods.
Now Define a class "Demo" ,in which define "main" function. 
From this main function try to access all the members of A ,B  and C.
*/


package Assignment2;

class A
{
	private int num;
	private static int cnt=10;


	public A(){
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

class B
{
	private String s;
	private static String cnt="hello";



	public B(){
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

class C
{
	private String s1;
	private static int cnt=5;

	public C(){
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

	
class Demo{
public static void main(String[] args){
A a1=new A();
System.out.println(a1.getNum());
int a= A.getCnt();
System.out.println(a);

B b1=new B();
System.out.println(b1.getS());
String b= B.getCnt();
System.out.println(b);

C c1=new C();
System.out.println(c1.getS1());
int c= C.getCnt();
System.out.println(c);


}
}