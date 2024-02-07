
package concepts;
public class BinarySearch {
//Binary search for ascending order
    public static int binarySearch(int[] arr,int target){
            int s =0;
            int e=arr.length-1;
             //s+e if integer may exceed range of integer so use :s+(e-s)/2
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
            return-1;
    }


    //Binary search based on sorting order
    public static int orderBasedBinarySearch(int[] arr,int target) {
        int s=0;
        int e =arr.length-1;
        Boolean  isAsc=arr[s]<arr[e];
        int mid =(s+e)/2;  //s+e if integer may exceed range of integer so use :s+(e-s)/2
        while(s<=e){
            if (arr[mid]==target) {
                return mid;
            }
            if (isAsc) {
                if (target>arr[mid]){
                    s=mid+1;
                    mid=(s+e)/2;
                }
                else {
                    e=mid-1;
                    mid=(s+e)/2;
                }    
            } 
            else {
                if (target<arr[mid]){
                    s=mid+1;
                    mid=(s+e)/2;
                }
                else{
                    e=mid-1;
                    mid=(s+e)/2;
                }
                
            }
        }
        return -1;    
    }
    
    //Binary search using recursion
    public static int recursiveBinarySearch(int[] arr,int target,int s,int e){
            
            int mid= (s+e)/2;
            //Base case :
            if(s>e){
                return -1;
            }
            //check if ans found
                if(arr[mid]==target){
                 return mid;
                }
                if(arr[mid]>target){
                  return recursiveBinarySearch(arr, target, s, mid-1);
                }
                else {
                    return  recursiveBinarySearch(arr, target, mid+1,e);   
                }
            
            
    }
    public static void main(String[] args) {

        int[] nums={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
        // int[] nums2={9,8,7,6,5,4,3,2,1};
        int bs =binarySearch(nums, 100);
        int ans= recursiveBinarySearch(nums,99, 0, nums.length-1);
        System.out.println(bs);
        
       
        
    }
}
