package Questions;
import java.util.*;
public class RecursionInStrings {
  // Recursive method to reverse a string
    public static void reverse(String str,int lastIndex){
        if(lastIndex==0){
            System.out.println(str.charAt(lastIndex));
            return;
        }
     System.out.print(str.charAt(lastIndex));
     reverse(str, lastIndex-1);
    }

   static int first=-1;
   static int last=-1;

// Recursive method to  check first and last occurence of element in a string
    public static void occurence(String str,int index){
       if(index==str.length()){
           if (first==-1) {
            System.out.println("Element not found");
            return;
           }
            else if(last==-1){
                System.out.println(first);
                System.out.println("last index not found");
                return;
           }
           else{
               System.out.println("first "+first+" last "+last);
               return;
           }
            
       }
        if (str.charAt(index)=='a' ) {
            if (first==-1) {
                first=index;
            } 
            else {
                last=index;
            }
           } 
       occurence(str, index+1);       
    }

    //Recursive method to check whether an array is sorted or not in strictly increasing fashion
    public static boolean isSorted(int arr[],int index){
             if(index==arr.length-1){
                System.out.println("Array is Sorted in strictly increasing manner");
                return true;
             }   
        
                if(arr[index]<arr[index+1]){
                    return isSorted(arr, index+1);
                }
                else{
                    return false;
                }
             }

    // Recursive method to move all x to last
    public static String helper="";
    public static String refinedStr="";
    public static void moveAllx(String str,int index){
        if(index==str.length()){
            String result = refinedStr+helper;
            System.out.println(result);
            return;
        }
        if(str.charAt(index)=='x'){
            helper+='x';
        }
        else{
            refinedStr+=str.charAt(index);
        }
        moveAllx(str, index+1);
        
}
// Recursive method to remove duplicates from string
public static String result="";
    public static void removeDuplicate(String str,int index,boolean[] alpha){

        if(index==str.length()){
            System.out.println(result);
            return;
        }
        if (alpha[str.charAt(index)-'a']==false) {
            alpha[str.charAt(index)-'a']=true;
            result+=str.charAt(index);
        }
        removeDuplicate(str, index+1, alpha);
        
    }
    // To print susequences with recursion
    public static void subsequences(String str,int index,String newString){
        if(index==str.length()){
            System.out.println(newString);
            return;
        }
        subsequences(str, index+1, newString+str.charAt(index));
        subsequences(str, index+1, newString);
    }
    // error code 
    //  public static void noDuplicateSubSeq(String str,int index,String newString,boolean[] alpha){
    //     if(index==str.length()){
    //         System.out.println(newString);
    //         return;
    //     }
    //     if (alpha[str.charAt(index)-'a']==false) {
            
    //         alpha[str.charAt(index)-'a']=true;
    //         noDuplicateSubSeq(str, index+1, newString, alpha);
    //         noDuplicateSubSeq(str, index+1, newString+str.charAt(index), alpha);
    //     }
    //      else {
    //         noDuplicateSubSeq(str, index+1, newString, alpha);
    //     }
    // }

// to print keypad combinations
  public static String[] map={".","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
  public static void keypadCombinations(String number,int index,String combination) {
    if(index==number.length()){
        System.out.println(combination);
        return;
    }  
    
    char curChar=number.charAt(index);
     String mapping=map[curChar-'0'];
      for(int i=0;i<mapping.length();i++){
          keypadCombinations(number, index+1, combination+mapping.charAt(i));
      }

  }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        // //To reverse the string
        // System.out.println("Enter the string :");
        // String str =sc.nextLine();
        // int n=str.length()-1;
        // reverse(str, n);

        // //To check sorted array
        // int[] sort={1,2,3,4,5};
        //  boolean ans=isSorted(sort,0);
        //  System.out.println(ans);

        // //To move all x in a string
        //  System.out.println("Enter a string jisme hum x ko move kr ske :");
        //  String strx=sc.nextLine();
        //  moveAllx(strx, 0);

        //     //To remove duplicate characters in a string
         boolean arr[]= new boolean[26];
         for (int i = 0; i < arr.length; i++) {
             arr[i]=false;
         }
        //  System.out.println("Enter a string to remove duplicates in a string :");
        //  String dupli=sc.nextLine();
        //  removeDuplicate(dupli, 0, arr);
        
         //to print substrings in a string
        System.out.println("Enter the string to calculate substrings :");
        String strsub=sc.nextLine();
        //  subsequences(strsub, 0, "");
    keypadCombinations(strsub, 0,"");

        
      
    }
}
