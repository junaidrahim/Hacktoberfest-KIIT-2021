/*
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        if(n==1 && m==1)
            return 1;
        int arr[n][m];
        arr[n-1][m-1]=0;
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(i==m-1&&j==n-1)
                    arr[j][i]=0;
                else if((i==m-1 && j!=n-1)||(j==n-1&&i!=m-1))
                    arr[j][i]=1;
                else
                    arr[j][i]=arr[j+1][i]+arr[j][i+1];
                
            }
        }
        return arr[0][0];
    }
};
