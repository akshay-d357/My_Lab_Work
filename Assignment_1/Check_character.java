package Assignment1;

public class Check_character
{
   public static void main(String[ ] arg)
   {
	boolean isVowel=false;
	
	char ch= 'i'; 

	switch(ch)
	{
	   case 'a' : isVowel = true;
	   case 'e' : isVowel = true;
    	   case 'i' : isVowel = true;
	   case 'o' : isVowel = true;
	   case 'u' : isVowel = true;
	   case 'A' : isVowel = true;
	   case 'E' : isVowel = true;
	   case 'I' : isVowel = true;
	   case 'O' : isVowel = true;
	   case 'U' : isVowel = true;
	}
	if(isVowel == true) {
	   System.out.println(ch+" is  a Vowel");
	}
	else {
	   if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		System.out.println(ch+" is a Consonant");
	   else
		System.out.println("Input is not an alphabet");		
        }
   }
}