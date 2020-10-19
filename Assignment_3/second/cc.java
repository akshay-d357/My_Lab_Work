package second;




interface a{
	void disp1();
}
interface b extends a{
	void disp2();
}
public class cc implements b {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		cc c=new cc();
		c.disp1();
		c.disp2();
	}

	@Override
	public void disp1() {
		// TODO Auto-generated method stub
		System.out.println("In C");
	}

	@Override
	public void disp2() {
		// TODO Auto-generated method stub
		System.out.println("in c");
	}

}
