package Questions;
//To find pivot
public class RotatedBinarySearch {
    public static int findPivot(int[] arr){
        int pivot=-1;
        int s=0;
        int e=arr.length-1;
        while(s<e){
            int mid =(s+e)/2;

            if (mid<e && arr[mid]>arr[mid+1]) {
                pivot=mid;
                return pivot;
            } 
            else if(mid>0 && arr[mid]<arr[mid-1]){
                pivot=mid-1;
                return pivot;
            }
            else if(arr[s]>arr[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return pivot;
    }


    public static int binarySearch(int[] arr,int target,int s,int e){
       
         //s+e  integer may exceed range of integer so use :s+(e-s)/2
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
//to find index of target element in rotated array containg unique elements
    public static int findTargetInRotatedArray(int[] rotatedArray,int target){
        int pivot=findPivot(rotatedArray);
        if(pivot==-1){
            return binarySearch(rotatedArray, target, 0, rotatedArray.length-1);
        }
        else{
            if(target==rotatedArray[pivot]){
                return pivot;
            }
            else if(target>rotatedArray[0]){
                    return binarySearch(rotatedArray, target, 0, pivot);
            }
            else{
                return binarySearch(rotatedArray, target, pivot, rotatedArray.length-1);
            }
        }
    }
//To  find number of rotations
public static void numberOfRotations(int[] Rarr) {
    
    int pivot=findPivot(Rarr);
    int rotations =pivot +1;
    System.out.println(rotations);
    
}    


    public static void main(String[] args) {
        // int[] arr={9,3,9,9,9};
        //In above case we have all s ,e,mid same .so it will not be able to find pivot y above method 
        //so just set s=s+1 and e=e-1

     int[] arr={5,1,2,3,4};
        int pivotIndex=findPivot(arr);
        System.out.println(pivotIndex);

        int targetIndex=findTargetInRotatedArray(arr, 2);
        System.out.println(targetIndex);

        numberOfRotations(arr);
       
    }
    
}
