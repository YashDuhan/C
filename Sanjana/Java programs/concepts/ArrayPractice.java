package concepts;
import java.util.*;
public class ArrayPractice {
    //Intro about are array
    
    //Mutable:There values can be change by passing them to methods.
    //Arrays.toString(arr): method to print array in a prsentable way
    //array indexes are the reference to array value/objects
      public static void main(String arg[]) {

        //Question 1 

        Scanner sc =new Scanner(System.in);
        String names[] = new String[5];
        System.out.println("Enter five names to store in array : ");
        for (int i = 0; i < names.length; i++) {
            names[i]=sc.nextLine();
        }
        for (int i = 0; i < names.length; i++) {
            System.out.println("Name "+i+" : "+names[i]);
        }
        //Another method to print arrays
        System.out.println(Arrays.toString(names));


        //Question 2
        int nums[]=new int[6];
        System.out.println("Enter 6 numbers to store in array ");
        for (int i = 0; i < nums.length; i++) {
            nums[i]=sc.nextInt();

        }
        int max=nums[0];
        for ( int i = 0; i < nums.length; i++) {
            if(max< nums[i]){
                max=nums[i];
            };
        }
        System.out.println("Maximum numer in array is "+max);

        //Question 3 : To check wether array is sorted or not

        for (int i = 0; i < nums.length-1; i++) {
            
            if(nums[i]>nums[i+1]){
                System.out.println("Unsorted array!");
                break;
            }
            if(i==nums.length-2){
                System.out.println("Sorted array.");
            }
        }
        
    }
    
}
