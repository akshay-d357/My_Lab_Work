/*1) Define a class "Product" with following members
id, name, price,qty.
Define a parameterised constructor which will take all these values while
creating an instance.
Also define "disp()" method which will display all these details.
create 4 products and save them in "ArrayList".
Now save this "ArrayList" in a file.
Open the file, read "ArrayList" , traverse ArrayList using iterator and call
"disp()" for all the objects.
*/



import java.io.*;
import java.util.*;

public class Product implements Serializable {
	int id,price,qty;
	String name;
	
	public Product(int id,String name,int price, int qty) {
		super();
		this.id = id;
		this.name = name;
		this.price = price;
		this.qty = qty;
	}
	void disp()
	{
		System.out.println("id-"+id+" name-"+name+"  price-"+price+"  qty-"+qty);
	}
	public static void main(String[] args) {
		
		List<Product> l=new ArrayList();
		l.add(new Product(1,"book",500,10));
		l.add(new Product(2,"bag",1000,20));
		l.add(new Product(3,"cycle",1500,30));
		l.add(new Product(4,"charger",2000,40));
		
		try(FileOutputStream fos=new FileOutputStream("d:\\ad.txt"))
		{
		try(ObjectOutputStream oos=new ObjectOutputStream(fos))
		{
		oos.writeObject(l); //Serialization
		
		}
		}
		catch(Exception ee)
		{
			ee.printStackTrace();
		}
		
		try(FileInputStream fis=new FileInputStream("d:\\ad.txt"))
		{
		try(ObjectInputStream ois=new ObjectInputStream(fis))
		{
			List l1=(List) ois.readObject();
			System.out.println("Ridding from file");
			Iterator itr=l1.iterator();
			while(itr.hasNext())
			{
				((Product) itr.next()).disp();
			}
		}
		}
	catch(Exception ee)
	{
		ee.printStackTrace();
	}
	

	}

}