package Questions;
//Time cmplexity == O(log n);
public class BinarySearchProblems {

//to calculate ceil of a number in the array 
    public static int ceiling(int[] arr,int target){
        int s =0;
        int e=arr.length-1;
         int mid=(s+e)/2; 

         if(target>arr[arr.length-1]){
            System.out.println("ceiling number not present");
            return -1;
        }    
        while(s<=e){
             if (target>arr[mid]){
                s=mid+1;
                mid=(s+e)/2;
            }
            else if (target<arr[mid]){
                e=mid-1;
                mid=(s+e)/2;
            }
            else{
                return arr[mid];
            }
        }
        return arr[s];
}
//To calculate floor of a number
public static int floor(int[] arr,int target){
    int s =0;
    int e=arr.length-1;
     int mid=(s+e)/2; 

     if(target<arr[0]){
        System.out.println("floor is number not present");
        return -1;
    }    
    while(s<=e){
         if (target>arr[mid]){
            s=mid+1;
            mid=(s+e)/2;
        }
        else if (target<arr[mid]){
            e=mid-1;
            mid=(s+e)/2;
        }
        else{
            return arr[mid];
        }
    }
    return arr[e];
}
public static void main(String[] args) {
    int[] nums={2,3,5,9,14,16,18};
    //    int ceil= ceiling(nums,2);
    //    System.out.println(ceil);
       int floor =floor(nums,119);
       System.out.println(floor);
}
}
