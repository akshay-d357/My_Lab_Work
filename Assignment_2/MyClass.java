/*
2) Define a class "MyClass" and make sure clients can instantiate it , 
a) without any argument
b) with one int argument
c) with two int arguments
*/

package Assignment2;
public class MyClass {
	
	private int num1,num2;


	public MyClass() {  // default constructor
      	num1=5;
	num2=10;
  	}
	
	public MyClass(int num1) {  // 1 param  constructor
      	this.num1= num1;
	num2= 10;
  	}

	public MyClass(int num1,int num2) {  // 2 param   constructor
      	this.num1= num1;
	this.num2= num2;
  	}
	

	public int getNum1() {
		return num1;
	}

	public void setNum1(int num1) {
		this.num1 = num1;
	}

	
	public int getNum2() {
		return num2;
	}

	
	public void setNum2(int num2) {
		this.num2 = num2;
	}
}

	
	class TestMyClass
{
//main

	public static void main(String[] args) {
     	MyClass m1= new MyClass();
      	System.out.println(" num1 = "+ m1.getNum1()+" num2 = "+ m1.getNum2());
      	MyClass m2= new MyClass(15);
      	System.out.println(" num1 = "+ m2.getNum1()+" num2 = "+ m2.getNum2());
	MyClass m3= new MyClass(20,25);
      	System.out.println(" num1 = "+ m3.getNum1()+" num2 = "+ m3.getNum2());
	}

	
}
