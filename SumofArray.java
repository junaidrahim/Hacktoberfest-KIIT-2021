import java.util.*;

class SumofArray
{
	public static void main (String[] args) 
	{
	    Scanner sc = new Scanner(System.in);
	    int T = sc.nextInt();
	    int i,j,s,N;
	    int sum[]=new int[T];
	    for(i=0;i<T;i++)
	    {
	        s=0;
	        N=sc.nextInt();
	        int a[] = new int[N];
	        for(j=0;j<N;j++)
	        {
	            a[j]=sc.nextInt();
	            s+=a[j];
	        }
	        sum[i]=s;
	    }
	    for(i=0;i<T;i++)
	    System.out.println(sum[i]);
	}
}