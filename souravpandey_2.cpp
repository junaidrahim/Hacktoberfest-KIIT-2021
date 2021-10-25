#include<iostream>
using namespace std;
void bubble_sort(int array[],int n)
{
    int counter=1;
    while (counter<n-1)
    {
    for (int i = 0; i < n-counter; i++)
    {
        if (array[i]>array[i+1])
        {
            int temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
        }
        
    }
    counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    bubble_sort(array,n);
    return 0;
}
