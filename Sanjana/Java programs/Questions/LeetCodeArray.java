package Questions;
import java.util.Scanner;

// import java.util.Scanner;
public class LeetCodeArray {
// Index number of elements that sums up to target 
    public static int[] findPair(int[] arr,int target) {
         int[] index ={-1,-1};
        for (int i = 0; i < arr.length; i++) {
                if(arr[i]>target){
                    continue;
                }
                for (int 
                j = i+1; j < arr.length; j++) {
                    if (arr[i]+arr[j]==target) {
                        index[0]=i;
                        index[1]=j;
                        return index;
                    }
                    
                }
            }
            return index;

    }
    //Number of pairs for target sum
    public static int findNumOfPairs(int[] arr,int target) {
        int  count=0;
       for (int i = 0; i < arr.length; i++) {
            for (int j = i+1; j < arr.length; j++) {
                if (arr[i]+arr[j]==target) {
                      count++;
                 }
                   
            }
        }
        return count;
    }
     //To find triplet to sum
    public static int[] findTriplet(int[] arr,int target) {
        int[] index={-1,-1,-1};
        for (int i = 0; i < arr.length; i++) {
                if (arr[i]>target) {
                 continue;
                }
                for (int j=i+1; j<arr.length;j++) {
                    if (arr[j]>target) {
                     continue;
                    }
                    for (int k = j+1; k < arr.length; k++) {
                        if (arr[i]+arr[j]+arr[k]==target) {
                            index[0]=i;
                            index[1]=j;
                            index[2]=k;
                            return index;
                        }
                    }
                }
            }
     return index;
    }

//Method 1 :To find a number in an array with only one occurence while all other numbers occurs exactly twice
    public static int unique(int[] arr){
        for (int i = 0; i < arr.length; i++) {
            for (int j = i+1; j < arr.length; j++) {
                if(arr[i]==arr[j]){
                    break;
                }
                if (j==arr.length-1) {
                    return arr[i];
                }
            }
            
        }
        return -1;
    }
//Method 2:To find a number in an array with only one occurence while all other numbers occurs exactly twice
    public static int unique2(int[] arr){
        for (int i = 0; i < arr.length; i++) {
            for (int j = i+1; j < arr.length; j++) {
                if(arr[i]==arr[j]){
                    arr[i]=arr[j]=-1;
                }
            }
            
        }
        for (int i = 0; i < arr.length; i++) {
            if(arr[i]!=-1){
                return arr[i];
            }
        }
        return -1;
    }

//To calculate maximum in array
    public static int max(int[] arr) {
        int max=Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
//To find second largest in array
public static int secondLargest(int[] arr){
       int largest=max(arr);
       for (int i = 0; i < arr.length; i++) {
           if (arr[i]==largest) {
               arr[i]=-1;
           }
       }
       int second=max(arr);
       return second;

}

//To find the first repeating element in array
public static void repeating(int[] arr){
   for (int i = 0; i < arr.length; i++) {
       for (int j = i+1; j < arr.length; j++) {
           if(arr[i]==arr[j]){
               System.out.println(arr[i]+" is the frst repeating element in the array");
               return;
           }
       }
   }
   System.out.println("No repeating element");
   return;
}

//Find smallest character greater than target in a character array
public static char charCeil(char[] arr,char target){
    int s=0;
    int e=arr.length-1;
    int mid=(s+e)/2;
    // if (target>=arr[arr.length-1]) {
    //     return arr[0];
    // }
    while(s<=e){
            // if(arr[mid]==target){
            //     System.out.println(arr[mid]);
            //     return arr[mid+1];
            // }
            if(arr[mid]>target){
                e=mid-1;
                 mid=(s+e)/2;
            }
            else{
                s=mid+1;
                mid=(s+e)/2;
            }
    }
    System.out.println(s);
    System.out.println(e);
    return arr[s%arr.length];
    }

    public static void main(String arg[]){
            Scanner sc =new Scanner(System.in);
            int[] nums ={2,7,11,15,6,33,56};
            int[] nums2={1,2,3,4,5,4,3,2,1};
           
            // System.out.print("Enter the target sum of numbers :");
            // int target=sc.nextInt();

            //  int[] res = findPair(nums, target);
            //  System.out.println(Arrays.toString(res));

            // int pairs=findNumOfPairs(nums, target);
            // System.out.println(pairs);

            // int[] triplet=findTriplet(nums, target);
            // System.out.println(Arrays.toString(triplet));

            // int unique=unique2(nums2);
            // System.out.println(unique);
            
            // int sec =secondLargest(nums);
            // System.out.println(sec);
            
            // repeating(nums2);

            // char[] alpha={'c','f','j'};
            // char charceilword=charCeil(alpha,'f');
            // System.out.println(charceilword);

            
           
               }
}
