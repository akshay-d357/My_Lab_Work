/* 
3) Define a class "Emp" with private static member "int cnt".
How will u make sure that outsiders can read the value of cnt ?
*/
package Assignment2;
public class Emp
{
	private static int cnt=10;

 public static int getCnt(int cnt) 
	{
       		return cnt;
  	}


}
	
class TestEmp{
public static void main(String[] args){
//System.out.println(Emp.cnt); cnt cannot be accessed outside the class directly we need public static method
int a= Emp.getCnt(15);
System.out.println(a);
}
}