package com.company;
import static com.company.PrintSubsets.subsets;

// Java program to print all the subsets in an array
class Main {


    public static void main(String[] args)
    {
        int arr[]={1,2,3};
        int index=0;
        int sub[]=new int[3];


        subsets(arr,index,sub);

    }
}
// This code is contributed by 29AjayKumar
