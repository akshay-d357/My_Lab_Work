// Java program for hashmap

/*create a HashMap for storing string moviename as key and lead actor
name as value.
Store at least 5 movies inside the HashMap.
display it using iterator.
 */

import java.util.*;
import java.util.Map.Entry;
import java.util.HashMap; 

public class Movies { 
	public static void main(String[] args) 
	{ 
		// Create an empty hash map 
		HashMap<String, String> map = new HashMap<>(); 

		// Add elements to the map 
		map.put("Iron Man", "Robert Downey jr"); 
		map.put("Captain America", "Chris Evans"); 
		map.put("Thor", "Chris Hemsworth"); 
		map.put("Spider Man", "Tom Holland");
		map.put("Black widow", "Scarlett Johansson"); 


		// Print size and content 
		System.out.println("Size of map is:- "+ map.size()); 

		Set<Entry<String,String>> set=map.entrySet();
		Iterator<Entry<String, String>> i=set.iterator();
		while(i.hasNext())
		{
			Map.Entry<String,String> me=(Entry<String, String>)i.next();
			System.out.print(me.getKey()+ ""+"\t");
			System.out.println(me.getValue());
		}
	} 
} 
