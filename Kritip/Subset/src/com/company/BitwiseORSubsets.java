package com.company;

/*
Given an array of positive integers.
The task is to find the size of the smallest subset such that the Bitwise OR of that set is Maximum possible.

Examples:

Input : arr[] = {5, 1, 3, 4, 2}
Output : 2
7 is the maximum value possible of OR,
5|2 = 7 and 5|3 = 7

Input : arr[] = {2, 6, 2, 8, 4, 5}
Output : 3
15 is the maximum value of OR and set
elements are 8, 6, 5
import java.io.*;
**/

import java.util.*;

class BitwiseORSubsets {
    static int max;
    static int maxsub[];
    static
    {
        int max=0;
    }

    static void analyse(int sub[])
    {

        int or=0;
        for(int i=0;i<sub.length;i++)
        {
            if(sub[i]!=0)
                or = or | sub[i];
        }


        if(or>=max)
        {

            max=or;
            for(int i=0;i<maxsub.length;i++)
                maxsub[i]=sub[i];
        }
    }

    static int[] add(int sub[], int ele)
    {
        for(int i=0;i<sub.length;i++)
        {
            if(sub[i]==0)
            {
                sub[i]=ele;
                break;
            }
        }

        return sub;
    }

    static void remove(int sub[])
    {
        int i=0;
        for(i=0;i<sub.length;i++)
        {
            if(sub[i]==0)
            {
                if(i-1!=-1)
                    sub[i-1]=0;
                break;
            }
        }

        if(i==sub.length)
            sub[i-1]=0;
    }


    static void subsets(int arr[], int index, int sub[])
    {
        if(index==arr.length)
        {
            analyse(sub);
            return;
        }

        subsets(arr, index+1, add(sub, arr[index]));
        remove(sub);
        subsets(arr, index+1, sub);
    }

    static int countNonZero(int maxsub[])
    {
        int count=0;
        for(int i=0;i<maxsub.length;i++)
            if(maxsub[i]!=0)
                count++;

        return count;
    }

    public static void main (String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        maxsub=new int[n];
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();

        int index=0;
        int sub[]=new int[arr.length];
        subsets(arr, index, sub);
        System.out.println(countNonZero(maxsub));


    }
}
