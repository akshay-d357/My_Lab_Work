/**
 * 
 */
package studpack;

/**
 * @author Akshay_D
 *
 */
public class Student {
	private String name,address;
	private int age;
	/**
	 * @param name
	 * @param address
	 * @param age
	 */
	
	public Student(String name, String address, int age) {
		super();
		this.name=name;
		this.address=address;
		this.age=age;
	}

	public Student() {
		super();
	}

	/**
	 * @return the name
	 */
	public String getName() {
		return name;
	}

	/**
	 * @param name the name to set
	 */
	public void setName(String name) {
		this.name = name;
	}

	/**
	 * @return the address
	 */
	public String getAddress() {
		return address;
	}

	/**
	 * @param address the address to set
	 */
	public void setAddress(String address) {
		this.address = address;
	}

	/**
	 * @return the age
	 */
	public int getAge() {
		return age;
	}

	/**
	 * @param age the age to set
	 */
	public void setAge(int age) {
		this.age = age;
	}
	
}
