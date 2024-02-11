package Questions;

import java.util.Arrays;
//Question :Find the first and last index of an element in an sorted (asc.) array .
//sorted array,search element ====>Binary search
//Faceook problem
public class FirstAndLastOccurenceBS {
public static  int[] range ={-1,-1};
//Solution through recursion method
    public static int[] ranges(int[] arr,int target,int s,int e,boolean isStart){
    
            int mid =(s+e)/2;
            //Base case
            if(s>e){
                return range;
            }
            //To modify start index
            if(isStart){
                    if(arr[mid]==target){
                        range[0]=mid;
                        ranges(arr, target, s, mid-1,true);

                    }
                    else if(arr[mid]>target){
                        ranges(arr, target, s, mid-1,true);
                    }
                    else{
                    ranges(arr, target, mid+1, e,true);
                    }
            }
            isStart=false;
            //To modify end index
            if(!isStart){
                    if(arr[mid]==target){
                        range[1]=mid;
                        ranges(arr, target, mid+1,e,false);
                    }
                    else if(arr[mid]>target){
                        ranges(arr, target, s, mid-1,false);
                    }
                    else{
                    ranges(arr, target, mid+1, e,false);
                    }
            }
            return range;
    }

//Solution through loops
    public static int[] searchRange(int[] nums,int target){
        int[] ansr={-1,-1};
        ansr[0]=search(nums, target, true);
        if(ansr[0]!=0){
            ansr[1]=search(nums, target, false);
        }
       
        return ansr;
    }
    public static int search(int[] nums,int target,boolean isStarrt) {
            int ans=-1;
            int s=0;
            int e=nums.length-1;
            while(s<=e){
                int mid=(s+e)/2;

                if(nums[mid]>target){
                    e=mid-1;
                }
                else if(nums[mid]<target){
                    s=mid+1;
                }
                else{
                    ans=mid;
                    if (isStarrt) {
                        e=mid-1;
                    } else {
                        s=mid+1;
                    }
                }
            }
    return ans;
    }

    //Search an element in an infinite array====>Search in chunks and increase chunk exponentially
    public static int SearchInfiniteArray(int arr[],int target) {
            int s=0;
            int e=1;
            boolean isFound=false;
            while(!isFound){
                    if(e>=target){
                        while(s<=e){
                            int mid =(s+e)/2;
                            if (target>arr[mid]){
                                s=mid+1;
                                mid=(s+e)/2;
                            }
                            else if (target<arr[mid]){
                                e=mid-1;
                                mid=(s+e)/2;
                            }
                            else{
                                return mid;
                            }
                        }
                        isFound=true;
                        return-1;
                    }
                    else{
                            int temp=s;
                            s=e+1;
                            e=e+2*(e-temp+1);
                    }
            }
         return 0;
        }

        
       

    public static void main(String[] args) {
        int[] nums={5,7,7,7,7,8,8,10};
        // int[] ans=ranges(nums, 5, 0, nums.length-1,true);
        int[] ans=searchRange(nums, 7);

        int[] infinty ={1,2,3,4,5,6,7,8,9,10,11,12,13};
        int newans=SearchInfiniteArray(infinty, 18);
        System.out.println(newans);

        System.out.println(Arrays.toString(ans));

    }
    
}
