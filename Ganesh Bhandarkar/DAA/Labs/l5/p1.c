// Created by ganesh bhandarkar
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int BS(int l,int e,int *a,int k){
	if(l>e)return -1;
	int m = l+(e-l)/2;
	if(a[m]==k)return m;
	else if(a[m]>k) BS(l,m-1,a,k);
	else BS(m+1,e,a,k);	
}

void BSTest(int list[], int lo, int hi, int key)
{
    int mid;
 
    if (lo > hi)
    {
        printf("Key not found\n");
        return;
    }
    mid = (lo + hi) / 2;
    if (list[mid] == key)
    {
        printf("Key found\n");
    }
    else if (list[mid] > key)
    {
        BSTest(list, lo, mid - 1, key);
    }
    else if (list[mid] < key)
    {
        BSTest(list, mid + 1, hi, key);
    }
}

void bubble_sort(int list[], int size)
{
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

int LS(int *a, int n, int k){
	int ans;
	for(int i=0;i<n;i++){
		if(a[i]==k){
			ans = i;
			break;
		}
	}
	return ans;
}
int main(){
	srand(time(0));
	double rtimeB,rtimeL;
	clock_t startB,endB,startL,endL,timeL,timeB;
	int n;scanf("%d",&n);
	int k = rand()%n;;//scanf("%d",&k);
	int a[n];
	for(int i=0;i<=n;i++){
		a[i] = rand()%n;
	}

	startB = clock();
	//bubble_sort(a,n-1);		
	//BSTest(a,0,n-1,k);	
	endB = clock();
	startL = clock();		
	LS(a,n,k);
	endL = clock() - startL;
	//timeB = abs(startB - endB);
	//timeL = abs(startL - endL);
	//rtimeB = ((double)endB)/CLOCKS_PER_SEC;
	//rtimeL = ((double)endL)/CLOCKS_PER_SEC;
	//printf("%f \n",endB);
	printf("%f",endL/CLOCKS_PER_SEC);
	//printf("Time taken Binary: %f Sec\n",endB/CLOCKS_PER_SEC);
	//printf("Time taken Linear : %f Sec\n",endL/CLOCKS_PER_SEC);
	printf("%d",k);
	return 0;
}
