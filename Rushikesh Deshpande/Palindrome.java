import java.util.*;

public class palindrome
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String txt;
        String rev;
        rev = "";
        System.out.println("Enter the stirng");
        txt = in.nextLine();
        for(int i=txt.length()-1; i>=0 ; i--)
        {
            rev = rev + txt.charAt(i);
        }
        if(rev.equals(txt))
        {
            System.out.println("It is a palindrome");
        }
        else
        {
            System.out.println("It is not a palindrome");
        }
    }
}
