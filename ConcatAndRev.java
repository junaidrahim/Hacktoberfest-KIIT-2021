import java.util.*;

public class ConcatAndRev 
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		int i,j; 
		String s[]=new String[T];
		for(i=0;i<T;i++)
		{
			String A = sc.next();
			String B = sc.next();
			String S = A.concat(B);
			char ch;
			String wd = "";
			S=S+" ";
			for(j=0;j<S.length();j++)
			{
				ch=S.charAt(j);
				if(ch != ' ')
					wd=ch+wd;
				else
					break;
			}
			s[i]= wd;
			wd="";A="";B="";
			S="";
		}
		for(i=0;i<T;i++)
			System.out.println(s[i]);
	}
}
						
		