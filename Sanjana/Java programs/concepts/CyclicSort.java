package concepts;

import java.util.ArrayList;
import java.util.Arrays;

public class CyclicSort {
    //Works or sort only when number in array ranges from 1 - n or any other continuous range without duplicates. Set conditions according to the range .
    //If range start from 0: values will be same as indexes and if start from 1 vlue is index+1
    //Maximum number of comparisons = n-1+n =2n-1
    //Time complexity O(n)

    
//Cyclic sort basic implementation
    public static void cycleSort(int[] arr){
        int i=0;
        while(i<arr.length){
            if(arr[i]!=i+1){
                //Number is not at correct position do  swap
                int temp=arr[i];
                arr[i]=arr[temp-1];
                arr[temp-1]=temp;
                
            }
            else{
                i++;
            }
        }
        System.out.println(Arrays.toString(arr));
    }

//Amazon Question : Find the missing number in the array ranges from [0,n]
    public static void missingNumber(int[] arr){
        int i=0;
        //Sort the array using cyclic sort
        while(i<arr.length)
        {
            if(arr[i]==i || arr[i]==arr.length){
                i++;
            }
            else{
                    int temp=arr[i];
                    arr[i]=arr[temp];
                    arr[temp]=temp;                 
            }
        }
        //check for missing number
        for (int j = 0; j < arr.length; j++) {
             if (arr[j]!=j) {
                 System.out.println(j);
                 break;
             }
             if (j==arr.length-1) {
                 System.out.println(j+1);
             }
        }
        
    }
    //Google question :  Find the disappeared elements from the array range of elements [1,n]
    // [4,3,2,7,8,2,3,1]

public static void  missedNumberByGoogle(int[] arr){
            int i=0;
            while(i<arr.length){

                int cor_index= arr[i]-1;
                if(arr[i]!=arr[cor_index]){
                    int temp=arr[i];
                    arr[i]=arr[cor_index];
                    arr[cor_index]=temp;
                }
                else{
                    i++;
                }
            }
            for (int j = 0; j < arr.length; j++) {
                if (arr[j]!=j+1) {
                    System.out.print(j+1+" ");
                }
            }
            System.out.println();
}

//Google : Duplicate elements in array if there is only one duplicate range of array is[1,n] and numbe of elements is n+1
public static void Duplicate(int[] arr) {

    int i=0;
    while(i<arr.length){
        //Correct index for value
        int cor_index= arr[i]-1;

        // check whether value at correct index is correct or not
        if(arr[i]!=arr[cor_index]){
                    int temp=arr[i];
                    arr[i]=arr[cor_index];
                    arr[cor_index]=temp;
        }
        else{
                    i++;
        }
    }
    System.out.println(arr[arr.length-1]);//else we can also use for loop to check which number is not at correct index
    
}

 public static void multipleDuplicates(int[] arr) {

    int i=0;
            while(i<arr.length){

                int cor_index= arr[i]-1;
                if(arr[i]!=arr[cor_index]){
                    int temp=arr[i];
                    arr[i]=arr[cor_index];
                    arr[cor_index]=temp;
                    // System.out.println(Arrays.toString(arr));
                }
                else{
                    i++;
                }
            }
            ArrayList<Integer> nums=new ArrayList<>();
            for (int j = 0; j < arr.length; j++) {
                if(arr[j]!=j+1){
                    nums.add(arr[j]);
                }
            }
            System.out.println(nums);
}

//Set mimatch : One number is missing and is lost due to one duplicated value .Find the mising number and the duplicated value

public static void setMismatch(int[] arr) {
    int i=0;
    while(i<arr.length){

        int cor_index= arr[i]-1;
        if(arr[i]!=arr[cor_index]){
            int temp=arr[i];
            arr[i]=arr[cor_index];
            arr[cor_index]=temp;
            // System.out.println(Arrays.toString(arr));
        }
        else{
            i++;
        }
    }
    for (int j = 0; j < arr.length; j++) {
        if(arr[j]!=j+1){
            System.out.println("Duplicate value : "+arr[j]+" and Missed value : "+(j+1));
            break;
        }
    }
}

  //smallest positive
//   public static void smallestPositive(int arr[]){
//       int smallestpositive=1;
//       int i=0;
//       while(i<arr.length){
//           if(smallestpositive==arr[i]){
//               smallestpositive++;
//               i=0;
//           }
//           else if(i==arr.length-1){
//               System.out.println(smallestpositive);
//               break;
//           }
//           else{
//               i++;
//           }
//       }
//   }

//smallest number using cyclic sort
public static void smallestPositive(int arr[]){
 int i=0;
 while(i<arr.length){
     int trueIndex=arr[i]-1;
     if(arr[i]>0 && arr[i]<arr.length && arr[i]!=arr[trueIndex] ){
         int temp=arr[i];
         arr[i]=arr[trueIndex];
         arr[trueIndex]=temp;
     }
     else{
         i++;
     }
 }
 System.out.println(Arrays.toString(arr));
 for(i=0;i<arr.length;i++){
     if(arr[i]!=i+1){
         System.out.println(i+1);
         break;
     }
         else if(i==arr.length-1){
                System.out.println(i+1);
         }
         else{
            continue;
         }
     }
 }


    public static void main(String[] args) {
   
    // int[] arr1={4,3,2,1};
    // System.out.print("Cycle sort : ");
    // cycleSort(arr1);

    // int[] arr2 ={4,3,0,1};
    // System.out.print("Missing number : ");
    // missingNumber(arr2);

    // int[] arr3={2,3,2,7,8,2,3,1};
    // System.out.print("Multiple missed number : ");
    // missedNumberByGoogle(arr3);

    // int[]  arr4={1,3,4,2,2}  ;
    // System.out.print("Single duplicate : ");
    // Duplicate(arr4);

    // int[] arr5={4,3,2,7,8,2,3,1};
    // System.out.print("Multiple duplicates : ");
    // multipleDuplicates(arr5);

    // int[] arr6={1,2,2,4};
    // setMismatch(arr6);

    int[] arr7={-2,-3,-4 };
    smallestPositive(arr7);

}
    
}
