import java.util.*;
public class SortAaray
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n,temp;
        System.out.println("Enter the size of array integer");
        n = in.nextInt();
        int a[] = new int[n];
        System.out.println("Enter the integer array elements");
        for(int i=0 ; i<n ; i++)
        {
            a[i] = in.nextInt();
        }
        for(int i=0 ; i<a.length-1 ; i++)
        {
            for(int j=0 ; j<a.length-1-i ; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        String s;
        System.out.println("Enter the string elements");
        s = in.nextLine();
        for(int i=0 ; i<s.length()-1 ; i++)
        {
            for(int j=0 ; j<s.length()-1-i ; j++ );

        }


        System.out.println("The sorted integer elemnts are : ");
        for(int i=0 ; i<a.length; i++)
        {
            System.out.print(a[i] + " ");
        }


    }
}
