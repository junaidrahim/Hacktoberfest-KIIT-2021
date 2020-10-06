import java.io.*;
import java.util.*;
public class pancake_sort {
	static int pancakeSort(int arr[]) {
		int a;
		int maximum=0;
		maximum=Arrays.stream(arr).max().getAsInt();
		for(int i=arr.length-1;i>=0;--i) {
			a=findmax(arr,i);
			
			if(a!=i) {
				flip(arr,a);
			
			flip(arr,i);
			}
		}
		return 0;
	}
	
	
	static int findmax(int arr[],int n) {
		int mi, i; 
        for (mi = 0, i = 0; i < n; ++i) 
            if (arr[i] > arr[mi]) 
                mi = i; 
        return mi; 
	}
	static void flip(int arr[], int i) {
		int temp=0;
		int s=0;
		while(s<i) {
			temp=arr[s];
			arr[s]=arr[i];
			arr[i]=temp;
			s++;
			i--;
		}
		
	}
	public static void main(String[] args) {
		int arr[]= {5,1,3,2,4};
		
		System.out.println("Array before sorting: ");
		for(int i=0;i<arr.length;i++) {
			System.out.print(arr[i]);
		}
		pancakeSort(arr);
		System.out.println("Array after sorting ");
		for(int i=0;i<arr.length;i++) {
			System.out.print(arr[i]);
		}
	}
}
