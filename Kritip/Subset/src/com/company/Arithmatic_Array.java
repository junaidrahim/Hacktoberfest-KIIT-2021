package com.company;

import java.util.Scanner;

import static com.company.PrintSubsets.printArray;

public class Arithmatic_Array
{
    static int size=0;
    static void removeElement(int sub[])
    {
        int i;
        for(i=0;i<sub.length;i++)
        {
            if(sub[i]==0) {
                if (i - 1 != -1)
                    sub[i - 1] = 0;
                break;
            }
        }

        if(i==sub.length)
            sub[i-1]=0;
    }

    static int nonZeroSize(int sub[])
    {
        int count=0;
        for(int i=0;i<sub.length-1;i++)
            if(sub[i]!=0)
                count++;
        return count;
    }
    static void analyse(int sub[])
    {
        int i=0;
        int k=Math.abs(sub[0]-sub[1]);
        if(nonZeroSize(sub)>size) {
            for (i = 0; i < sub.length - 1; i++) {
                if (sub[i + 1] != 0) {
                    if (Math.abs(sub[i] - sub[i + 1]) != k)
                        break;
                }
            }
            if (i == sub.length - 1) {
                printArray(sub);
                size = nonZeroSize(sub);
            }
        }
    }

    static void subArray(int arr[], int index, int sub[])
    {
        if(index==arr.length)
        {
            analyse(sub);
            return;
        }

        subArray(arr, index+1, sub);
        subArray(arr,index+1 , addElement(sub, arr[index]));
        removeElement(sub);
    }

    private static int[] addElement(int[] sub, int ele)
    {
        for(int i=0;i<sub.length;i++)
            if(sub[i]==0)
            {
                sub[i]=ele;
                break;
            }
        return sub;
    }


    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[];
        for(int i=1;i<=n;i++)
        {
            int k=sc.nextInt();
            arr=new int[k];
            for(int j=0;j<k;j++)
                arr[j]=sc.nextInt();
            int sub[] = new int[arr.length];
            subArray(arr, 0, sub);
            System.out.println("Case #" +i+": "+ size);
        }
    }
}
