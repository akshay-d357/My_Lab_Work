package Exception;


class Item{
	String member,name;
	int cost;
	Item(String member,String name,int cost)
	{
		this.member=member;
		this.name=name;
		this.cost=cost;
	}

	@Override
	 public String toString() {
	        return "["+member+"]"+"["+name+"]"+"["+cost+"]";
	    }
}
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Item i=new Item("Bag","Niky",1000);
		System.out.println(i);
	}

}
