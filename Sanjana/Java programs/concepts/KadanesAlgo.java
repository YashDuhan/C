package concepts;
// import java.util.*;
public class KadanesAlgo{

    //Kadane's algorithm
    public static int maxSubArray(int[] nums) {
        int max=Integer.MIN_VALUE;
        int sum=0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            max=Math.max(sum,max);
            if(sum<0){
                sum=0;
            }
        }
        return max;
    }
    public static void main(String[] args) {
        int arr[]={1,2,3,4};

//All subarrays using loops

        for(int i=0;i<arr.length;i++){
            for (int j= i; j < arr.length; j++) {
               for (int j2 = i; j2 <=j; j2++) {
                System.out.print(arr[j2]);
               } 
               System.out.println();       
        }
    }
  
    System.out.println(maxSubArray(arr));
}
}