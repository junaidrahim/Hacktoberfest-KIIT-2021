import java.util.*;
import java.io.*;
public class stack_app {
	public static void main(String[] args) {
		Stack<Integer> s1=new Stack<Integer>();
		Stack<Integer> s2=new Stack<Integer>();
		int arr[]= {9,5,7,3,4,8,1};
		s1.push(-1);
		s2.push(-1);
		s1.push(arr[0]);
		int max_num=arr[0];
		for(int i=1;i<arr.length;i++) {
			if(arr[i]>max_num) {
				max_num=arr[i];
				while(s1.peek()<max_num) {
					if(s1.peek()==-1) {
						break;
					}
					s2.push(s1.pop());
				}
				s1.push(max_num);
				while(s2.peek()!=-1) {
					s1.push(s2.pop());
				}
			}
			if(arr[i]<max_num) {
				while(s1.peek()<arr[i]) {
					if(s1.peek()==-1) {
						break;
					}
					s2.push(s1.pop());
				}
				s1.push(arr[i]);
				while(s2.peek()!=-1) {
					s1.push(s2.pop());
				}
				}
			}
			
		
		while(s1.peek()!=-1) {
			System.out.println(s1.pop());
		}
	}
}
