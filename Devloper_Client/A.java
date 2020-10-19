
package Assignment3;

class shape
{
	private int width;
	private int height;
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
	
}
public class A {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		shape s=new shape();
		s.setHeight(100);
		s.setWidth(50);
		System.out.println(s.getHeight());
		System.out.println(s.getWidth());
	}

}
