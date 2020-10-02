public class Permut_Easy
{
    public static void main(String[] args)
    {
        int arr[]={1,2,3};
        permut(arr, 0, arr.length-1);
    }

    private static void permut(int[] arr, int l, int h) {
        if (h - l == 0)
        {
            printArray(arr);
            return;
        }
        for(int i=l;i<=h;i++)
        {
            swap(arr,l,i);
            permut(arr, l+1, h);
            swap(arr,l,i);
        }
    }

    private static void printArray(int[] arr)
    {
        for(int i=0;i<arr.length;i++)
            System.out.print(arr[i]+", ");
        System.out.println();
    }

    private static void swap(int[] arr, int l, int i)
    {
        int t=arr[l];
        arr[l]=arr[i];
        arr[i]=t;
    }
}
