#include<iostream>
using namespace std;

int main()
{
	int matrix[6][6],i,j,m,n;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cin>>matrix[i][j];
			if(matrix[i][j]==1)
			{
				m=i;
				n=j;
			}
		}
	}
cout<<abs(m-3)+abs(n-3)<<endl;

	return 0;
}