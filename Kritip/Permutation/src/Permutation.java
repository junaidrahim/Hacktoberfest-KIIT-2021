
import java.util.Scanner;

public class Permutation {

    public static void permut(String deleted,String extracted)
    {
        if(extracted.length()==1)
            System.out.println(extracted);

        else if(extracted.length()==2)
        {
            System.out.println(deleted+extracted);
            System.out.println(deleted+rev(extracted));
        }

        else {
            deleted+=""+extracted.charAt(0);
            extracted=extracted.substring(1);
            for (int i = 0; i <= extracted.length(); i++) {

                permut(deleted,extracted);
                String temp=deleted.substring(deleted.length()-1);
                deleted=deleted.substring(0,deleted.length()-1)+extracted.charAt(0);
                extracted=extracted.substring(1)+temp;

            }
        }
    }

    public static String rev(String re)
    {
        StringBuffer stringBuffer=new StringBuffer(re);
        stringBuffer.reverse();
        return stringBuffer.toString();
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a String:- ");
        String str=sc.next();
        permut("",str);
    }
}
