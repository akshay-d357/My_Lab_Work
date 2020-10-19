package Exception;

abstract class Game{
	
	abstract void play();
}
class Football extends Game
{
	void play()
	{
		System.out.println("In Football");
	}
}
class Tennis extends Game
{
	void play()
	{
		System.out.println("In Tennis");
	}
}
class Crircket extends Game
{
	void play()
	{
		System.out.println("In Crircket");
	}
}
public class GamesDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Game a[]= new Game[3];
		a[0]=new Football();
		a[1]=new Tennis();
		a[2]=new Crircket();
		
		for(int i=0;i<a.length;i++)
		{
			a[i].play();
		}
		
		
	}

}
