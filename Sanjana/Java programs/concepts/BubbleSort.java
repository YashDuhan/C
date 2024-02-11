package concepts;

import java.util.Arrays;
//Time comlplexity =O(N) for best case and O(N^2) for worst case
//Minimum comparisons= N-1
public class BubbleSort {
    public static void bubbleSort(int[] arr){
        int n=arr.length;
        boolean isSwaped=false;
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {           // j=1;j<n-i;j++

                if(arr[j]>arr[j+1]){                    // j < j-1
                    int temp=arr[j];                     // swap j and j-1   
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                    isSwaped=true;
                }    
            }    
            if(!isSwaped){
                break;
            }
        }
        System.out.println(Arrays.toString(arr));

    }
public static void main(String[] args) {
    int[] nums={1,2,3,4};
    bubbleSort(nums);
}

}
