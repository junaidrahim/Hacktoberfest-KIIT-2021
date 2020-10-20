#include<stdio.h>
#include<stdlib.h>
int rowc;
int main()
{
    int r1,c1,r2,c2,count1=0,count2=0;    
    printf("Enter the no.of rows and columns of 1st and 2nd matrix\n");
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    int arr1[r1][c1],arr2[r2][c2];
    printf("Enter the elements of 1st matrix\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
            if(arr1[i][j]!=0)
            ++count1;
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&arr2[i][j]);
            if(arr2[i][j]!=0)
            ++count2;
        }
    }
    int sparse_1[count1+1][3],sparse_2[count2+1][3];
    sparse_1[0][0]=r1;
    sparse_1[0][1]=c1;
    sparse_1[0][2]=count1; 
    sparse_2[0][0]=r2;
    sparse_2[0][1]=c2;
    sparse_2[0][2]=count2;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            if(arr1[i][j]!=0)
            {
                sparse_1[++rowc][0]=i;
                sparse_1[rowc][1]=j;
                sparse_1[rowc][2]=arr1[i][j];                                
            }
        }
    }
    rowc=0;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            if(arr2[i][j]!=0)
            {
                sparse_2[++rowc][0]=i;
                sparse_2[rowc][1]=j;
                sparse_2[rowc][2]=arr2[i][j];                                
            }
        }
    }
    printf("1st Sparse Matrix\n");  
    for(int i=0;i<count1+1;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",sparse_1[i][j]);
        }        
        printf("\n");
    }
   printf("2nd Sparse Matrix\n"); 
    for(int i=0;i<count2+1;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",sparse_2[i][j]);
        }        
        printf("\n");
    } 
    if((sparse_1[0][0]==sparse_2[0][0]) && (sparse_1[0][1]==sparse_2[0][1]))
    {
        int sparse_3[count1+count2][3];
        sparse_3[0][0]=r1;
        sparse_3[0][1]=c1;
        sparse_3[0][2]=count1+count2;
        int i=1,j=1,k=1;
        while(i<=count1 || j<=count2)
        {
                if(i>count1)            
                {
                while(j<=count2) 
                {
                    sparse_3[k][0]=sparse_2[j][0];
                    sparse_3[k][1]=sparse_2[j][1];
                    sparse_3[k++][2]=sparse_2[j][2];
                    j++; 
                }
                break;
                }
                else if(j>count2)
                {
                    while(i<=count1) 
                    {
                    sparse_3[k][0]=sparse_1[i][0];
                    sparse_3[k][1]=sparse_1[i][1];
                    sparse_3[k++][2]=sparse_1[i][2];
                    i++; 
                    }
                break;                
                }             
                else if(sparse_1[i][0]>sparse_2[j][0])
                {
                    sparse_3[k][0]=sparse_2[j][0];
                    sparse_3[k][1]=sparse_2[j][1];
                    sparse_3[k++][2]=sparse_2[j][2];
                    j++;                    
                }
                else if(sparse_1[i][0]<sparse_2[j][0])
                {
                    sparse_3[k][0]=sparse_1[i][0];
                    sparse_3[k][1]=sparse_1[i][1];
                    sparse_3[k++][2]=sparse_1[i][2];
                    i++; 
                }
                else
                {
                    if(sparse_1[i][1]>sparse_2[j][1])
                    {

                        sparse_3[k][0]=sparse_2[j][0];
                        sparse_3[k][1]=sparse_2[j][1];
                        sparse_3[k++][2]=sparse_2[j][2];
                        j++;
                    }
                    else if(sparse_1[i][1]<sparse_2[j][1])
                    {
                        sparse_3[k][0]=sparse_1[i][0];
                        sparse_3[k][1]=sparse_1[i][1];
                        sparse_3[k++][2]=sparse_1[i][2];
                        i++; 
                    }
                    else
                    {
                        sparse_3[k][0]=sparse_2[j][0];
                        sparse_3[k][1]=sparse_2[j][1];
                        sparse_3[k++][2]=sparse_1[i][2]+sparse_2[j][2];
                        i++;j++; 
                    }
                    
                }
        }
        sparse_3[0][2]=k-1;
        printf("Printing the Sparse Matrix After Addition\n");
        for(int i=0;i<=k-1;i++)
        {for(int j=0;j<3;j++)
        printf("%d ",sparse_3[i][j]);
        printf("\n");
        }

    }
    else
    {
        printf("Wrong Dimensions Entered\n");
        exit(1);
    }
    return 0;
}