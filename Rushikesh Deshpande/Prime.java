import java.util.Scanner;
public class Prime
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n,flag = 0;
        System.out.println("Enter a number");
        n=in.nextInt();
        for(int i=2 ; i<n ; i++)
            if(n%i==0)
            {
                flag = 1;
                break;
            }
        if(flag==0)
        {
            System.out.println("It is a prime number");
        }
        else
        {
            System.out.println("It in not a prime number");
        }
    }
}