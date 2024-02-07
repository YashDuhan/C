package Questions;

//Mountain array :number of elem >=3

public class PeakOfBitonicArray {
    public static int findPeakIndex(int[] arr){
        int ans=-1;
        int s=0;
        int e=arr.length-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(arr[mid]>arr[mid+1]){
                ans=mid;
                e=mid;
            }
            else{
                ans=mid+1;
                s=mid+1;
            }
        }
     return ans;
    }
    public static int SearchInMoutntarr(int[] arr,int target){
        int ans=-1;
        int peak=findPeakIndex(arr);
        if(target>arr[peak]){
            return -1;
        }
        int s=0;
        int e=peak;
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
                   ans=mid;
                   return ans;
                }
            }
            s=peak;
            e=arr.length-1;
            while(s<=e){
                int mid =(s+e)/2;
                if (target<arr[mid]){
                   s=mid+1;
                   mid=(s+e)/2;
               }
               else if (target>arr[mid]){
                   e=mid-1;
                   mid=(s+e)/2;
               }
               else{
                  ans=mid;
                  return ans;
               }
           }

            return-1;
        }
      
   
    public static void main(String[] args) {
        int[] Bitonicarray={1,2,3,4,6,7,8,7,6,5,4};
        int peakIndex=findPeakIndex(Bitonicarray);
        int targetIndex=SearchInMoutntarr(Bitonicarray,9);
        System.out.println("peak index :"+peakIndex);
        System.out.println("Target index :"+targetIndex);
    }
    
}
