package Assignment3;

class Top1{
	void disp1(){
		System.out.println("In top1");
	}
}
class Bottom1 extends Top1 {
	void disp1()
	{
		System.out.println(("In Bottom1"));
	}
}
class Bottom2 extends Top1 {
	void disp1()
	{
		System.out.println(("In Bottom2"));
	}
}
class Bottom3 extends Top1 {
	void disp1()
	{
		System.out.println(("In Bottom3"));
	}
}
public class DynamicPolymorphism {

	static void perform(Top1 t)
	{
		t.disp1();
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		perform(new Bottom1());
		perform(new Bottom2());
		perform(new Bottom3());
		
	}

}
