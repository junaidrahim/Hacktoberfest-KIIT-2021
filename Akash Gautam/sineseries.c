#include<stdio.h>
#include<math.h>
float sineseries(int x,int n);
void main()
{
	int n,x;
	printf("Enter n \n");
	scanf("%d",&n);
	printf("Enter the value of x \n");
	scanf("%d",&x);
	float sum=sineseries(x,n);
	printf("The sum of the series is %f",sum);
}
		float sineseries(int x,int n)
			{
				int fact(int k);
				float sum=0.0f;
				int i=1;
				for(int j=1;i<=n;j=j+2,i++)
				{
					if(i%2!=0)
						sum=sum+pow(x,j)/fact(j);
					else
						sum=sum-pow(x,j)/fact(j);
                 }
                 return sum;
		     }
		     	int fact(int j)
		     	{
		     		int fact=1;
		     		for(int i=1;i<=j;i++)
		     			fact=fact*i;
		     		return fact;
		     	}		

		
	