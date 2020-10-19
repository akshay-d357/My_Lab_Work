/*1)create a class "Shape" with 2 attributes, "width" and "height". Make sure one can not access these attributes directly.
provide accessor methods on these attributes and allow them to call from outside of your class.

*/
package Assignment2;

public class Shape {
	
	private int width,height;


	public Shape() {  // default constructor
      	width=5;
	height=10;
  	}
	
	public Shape(int width,int height) {  // param constructor
      	this.width= width;
	this.height= height;
  	}
	

	public int getWidth() {
		return width;
	}

	public void setWidth(int width) {
		this.width = width;
	}

	
	public int getHeight() {
		return height;
	}

	
	public void setHeight(int height) {
		this.height = height;
	}

	public int Area() {
      	return width*height;
   	}
}

	class TestShape
{
//main

	public static void main(String[] args) {
     	Shape s1 = new Shape();
      	System.out.println(" width = "+ s1.getWidth()+" height =  "+ s1.getHeight());
	s1.Area();
	System.out.println(" area = "+ s1.Area());
      	Shape s2 = new Shape(10,7);
      	System.out.println(" width = "+ s2.getWidth()+" height =  "+ s2.getHeight());
	s2.Area();
	System.out.println(" area = "+ s2.Area());
	}

	
}
