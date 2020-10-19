package Assignment3;

class S{
	S(){
		System.out.println("in class S");
	}
}
class D extends S{
	D(){
		System.out.println("In class D");
	}
}
public class Hierarchical extends S {

	Hierarchical(){
		System.out.println("in Hierarchical");
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Hierarchical h=new Hierarchical();
	}

}
