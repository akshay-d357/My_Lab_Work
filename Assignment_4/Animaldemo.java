class Animal{
	void makesound() {
		
	}
}
class Dog extends Animal{
	void makesound() {
		System.out.println("bow bow bow");
		
	}
	
}
class Cat extends Animal{
	void makesound() {
		System.out.println("meow meow meow");
		
	}
	
}
class Tiger extends Animal{
	void makesound() {
		System.out.println("hoaaaaaaaaaaaaaaaaaaaaaaa");
		
	}
	void hunting() {
		System.out.println("attack");
	}
	
}
public class Animaldemo {
	static void perform(Animal ref) {
		if(ref instanceof Tiger) {
			Tiger ob=(Tiger)ref;
			ob.hunting();
		}
		ref.makesound();
	}

	public static void main(String[] args) {
		perform(new Dog());
		perform(new Cat());
		perform(new Tiger());

	}

}
