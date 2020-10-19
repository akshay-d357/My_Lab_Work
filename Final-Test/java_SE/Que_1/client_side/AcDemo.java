/**
 * 
 */
package clientside;

import mypack;


/**
 * @author Akshay
 *
 */
public class AcDemo {

	/**
	 * @param args
	 
	 */
	static void perform(Advertisement ref)
	{
      if (ref intanceof Magazine)
      {
    	  Magazine m1= (Magazine)ref;
    	  m1.subscribe();
      }
       ref.publish();
	}
	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
			perform(new Banner());
			perform(new NewsPaper());
			perform(new Magzine());
			}
}