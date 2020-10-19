package clientPro;

import Devpack.student;

public class clientApp {

	public static void main(String[] args) {
		student s1=new student();
		s1.setID(1);
		System.out.println(s1.getID());
		s1.setName("Shree");
		System.out.println(s1.getName());

	}

}
