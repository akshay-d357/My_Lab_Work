package second;

abstract class Animal
{
	abstract void makesound();
}
class Dog extends Animal{
	void makesound()
	{
		System.out.println("BArkkk");
	}
}
class Cat extends Animal{
	void makesound()
	{
		System.out.println("mewoo");
	}
}
class Tiger extends Animal{
	void hunting()
	{
		System.out.println("SAVDHAN Tiger shikar pe nikala hai");
	}
	void makesound()
	{
		System.out.println("Roarrrr");
	}
}
public class main {

	static void perform(Animal A)
	{
		if(A  instanceof Tiger)
		{
			Tiger t=(Tiger) A;  //Downcating
			t.hunting();
		}
	
		A.makesound();
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		perform(new Dog());
		perform(new Cat());
		perform(new Tiger());
	}

}
