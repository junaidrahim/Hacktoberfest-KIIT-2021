/*
 *  Author: Ganesh Bhandarkar ganesh@mx 1.0 
 *  Date: 05.08.2020 16:12:06 IST
 */


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void insertionSort(int a[],int n){
	for(int i=1;i<=n;i++){
		int j = i-1;
		int key = a[i];
		while(j>=0 && a[j]>key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}

int main(){
	srand(time(0));
	double rtime_best,rtime_worst;
	clock_t startbest,endbest,startworst,endworst,timeBest,timeWorst;
	int n;scanf("%d",&n);
	int a[n],a_asc[n],a_dec[n];
	for(int i=0;i<=n;i++){
		a[i] = rand()%n;
	}		
	insertionSort(a,n);	
	// Acc
	for(int i=0;i<=n;i++) a_asc[i]=a[i];	
	startbest = clock();		
	insertionSort(a_asc,n);	
	endbest = clock();	
	for(int i=0;i<=n;i++){
		printf("%d ",a_asc[i]);
	}
	printf("\n");
	// Dec
	int k = n;
	for(int i=0;i<=n;i++){
		a_dec[k--] = a[i];
	}
	for(int i=0;i<=n;i++) printf("%d ",a_dec[i]); 
	printf("\n");
	startworst = clock();		
	insertionSort(a_dec,n);	
	endworst = clock();
	for(int i=0;i<=n;i++) printf("%d ",a_dec[i]);
	printf("\n");
	timeBest = abs(startbest - endbest);
	timeWorst = abs(startworst - endworst);
	rtime_best = ((double)timeBest)/CLOCKS_PER_SEC;
	rtime_worst = ((double)timeWorst)/CLOCKS_PER_SEC;
	printf("Time taken Best : %f Sec\n",rtime_best);
	printf("Time taken Worst : %f Sec\n",rtime_worst);	
	return 0;
}
