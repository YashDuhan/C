package Questions;
import java.util.*;

public class Leetcode {

    public static int arrayPairSum(int[] nums) {
        int result = 0;
        Arrays.sort(nums);
        for(int i = 0;i < nums.length ; i += 2){
            result += nums[i];
        }
        return result;
    }


    //To check whether array is monotone or not
    public static boolean isMonotone(int[] arr){
        boolean ans=true;
        int i=0;
        if(arr[i]>arr[i+1]){
                for (int j = 0; j < arr.length-1; j++) {
                    if(arr[j]<arr[j+1]){
                        ans=false;
                        return ans;
                    }
                }
        }
        else{
            for (int j = 0; j < arr.length-1; j++) {
                if(arr[j]>arr[j+1]){
                    ans=false;
                    return ans;
                }
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        int[] arr={3,2,4,5};
        // int ans=arrayPairSum(arr);
        boolean ans=isMonotone(arr);
        System.out.println(ans);
    }

    
}
