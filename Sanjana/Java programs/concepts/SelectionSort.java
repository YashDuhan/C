package concepts;

import java.util.Arrays;

public class SelectionSort {

    public static void selectionSorting(int[] arr){
        int n = arr.length;
        boolean isSorted=false;
       
        for (int i = 0; i < n-1; i++) {
            int max_index=0;
            for (int j = 0; j <=n-i-1; j++) {
                if(arr[max_index]<arr[j]){
                    max_index=j;
                }
            }
         
            int temp=arr[max_index];
            arr[max_index]=arr[n-1-i];
            arr[n-i-1]=temp;
        }
        System.out.println(Arrays.toString(arr));
       
    }
    public static void main(String[] args) {
        int a[]={5,4,3,2,1};
        selectionSorting(a);
    }
    
}
