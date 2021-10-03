import java.util.*;
public class Rev 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int j;
        String s,stt="",w="";
        char c;
        System.out.println("Enter the sentance");
        s=sc.nextLine();
        for(j=0;j<s.length();j++)
        {
                c=s.charAt(j);
                if(c != ' ')
                    w=c+w;
                else
                {
                    stt=stt+w+" ";
                    w="";
                }
        }
        System.out.println(stt);
    }
}
