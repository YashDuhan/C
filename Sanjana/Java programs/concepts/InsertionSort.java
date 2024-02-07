package concepts;

import java.util.Arrays;

public class InsertionSort {

    public static void  insertionSorting(int[] arr){
            int n=arr.length-1;
            for (int i = 1; i <= n; i++) {
                for (int j = i; j >0; j--) {
                    System.out.println(i+" "+j);
                    if(arr[j]<arr[j-1]){
                        int temp=arr[j];
                        arr[j]=arr[j-1];
                        arr[j-1]=temp;
                    }
                    else{
                        break;
                    }
                }
                System.out.println(i);
                
            }
            System.out.println(Arrays.toString(arr));

    }

    public static void main(String[] args) {
        int[] arr={4,5,-9,0,33};
        insertionSorting(arr);
    }
    
}
