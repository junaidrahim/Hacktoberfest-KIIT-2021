#include<stdio.h>
#include<math.h>
#include<limits.h>
void increase_value(int *a, int i, int v){
    if(v<a[i]){
        printf("Cant put");
        return;
    }
    a[i] = v;
    while(i>0 && a[i/2]<a[i])
    {
        int t = a[i/2];
        a[i/2] = a[i];
        a[i] = t;
        i/=2;
    }
}
void insert_value(int *a, int v,int l){
    int s = sizeof(a)/sizeof(int);
    s++;
    a[s]=-1;
    increase_value(a,s,v);
}
void del(int *a,int i){
	int s = sizeof(a)/sizeof(int);
    if(a[i]<a[s]){
        increase_value(a,i,a[s]);
        s--;
    }else{
        a[i] = a[s];
        s--;
        max_heapify(a,i);
    }    
}
int main(){
	int n;scanf("%d",&n);

	int a[n];
	int v;scanf("%d",&v);
	for(int i=0;i<=n;i++){
		scanf("%d",&a[i]);
	}
	insert_value(a,5,n);
	for(int i=0;i<=n;i++){
		printf("%d ",a[i]);
	}
	del(6);
	
	return 0;
}