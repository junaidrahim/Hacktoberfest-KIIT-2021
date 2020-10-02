import java.util.*;
public class Anagram 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		String s1 = sc.next();
		String s2 = sc.next();
		int a[] = new int[256];
		int i,index=0;
		char c;
		boolean check = true;
		for(i=0;i<s1.length();i++)
		{
			c=s1.charAt(i);
			index = (int)c;
			a[index] = a[index]+1;
		}
		for(i=0;i<s2.length();i++)
		{
			c=s2.charAt(i);
			index = (int)c;
			a[index] = a[index]-1;			
		}
		for(i=0;i<256;i++)
		{
			if(a[i] != 0)
			{
				check = false;
				break;
			}
		}
		if(check == true)
			System.out.println("Anagram");
		else
			System.out.println("Not an Anagram");
	}
}
