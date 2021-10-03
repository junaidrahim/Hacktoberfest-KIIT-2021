#include<stdio.h>
#include<math.h>
#include<limits.h>

void min_heapify(int *a, int i, int n){
	int left = 2*i;
	int right = 2*i+1;
	int l;
	if(left <=n && a[left]<a[i]){
		l = left;
	}else{
		l = i;
	}
	if(right <=n && a[right]<a[l]){
		l = right;
	}
	if(l != i){
    	int t = a[i];
       	a[i] = a[l];
       	a[l] = t;
    	min_heapify(a,l,n);
	} 
}
int build_heap(int *a, int n){
	for(int i = floor(n/2);i>=1;i--){
		min_heapify(a,i,n);
	}
}

void heapSort(int *a, int n){
	int heap_size = n;
    build_heap(a,n);
    for(int i=n;i>=2; i--){
       	int t = a[1];
       	a[1] = a[i];
       	a[i] = t;
        heap_size = heap_size-1;
        min_heapify(a, 1, heap_size);
    }
}
int main(){
	int n;scanf("%d",&n);

	int a[n];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}

	build_heap(a,n);
	heapSort(a,n);
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}