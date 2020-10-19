package second;

interface Game{
	void play();
}
class Cricket implements Game{
	public void play()
	{
		System.out.println("playing cricket");
	}
}
class Football implements Game{
	public void play()
	{
		System.out.println("playing football");
	}
}
class Tennis implements Game{
	public void play()
	{
		System.out.println("playing Tennis");
	}
}
public class Demo {

	static void perform(Game g)
	{
		g.play();
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		perform(new Cricket());
		perform(new Football());
		perform(new Tennis());
	}

}
