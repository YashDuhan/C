package concepts;

import java.util.ArrayList;
import java.util.Arrays;

public class Recursions {
//To find the factorial of a number using recursions technique

public static int factorial(int n){
    int fact=n;
    if(n==1 || n==0){
        return 1;
    }
     fact=fact * factorial(n-1);
     return  fact;
}

//sum of digits using recursions
public static int recurionSum(int n){
    if(n==0){
        return 0;
    }
    int sum=0;
    int digit=n%10;
    sum=digit+recurionSum(n/10);
    return sum;
}

//Reverse  a umber using recursions
public static int recuresionReverse(int num){
    int rev=1;
    if(num==0){
        return 0;
    }
    rev=(num%10)+recuresionReverse(num/10);
    return rev;
}

//To checck whether an array is sorted or not using recursions
public static boolean isArraySorted(int[] arr,int index){
        if(arr.length==0){
            System.out.println("no elements in array");
            return false;
        }
        if(index==arr.length-1){
            return true;
        }
        if(arr[index]>arr[index+1]){
            return false;
        }
        return (arr[index]<arr[index+1]) && isArraySorted(arr, index+1);
    
}

//Linear search using recursions
public static int RecursiveLinearSearch(int[] arr,int i,int target){

    if(i==arr.length){
        return -1;
    }
    return (arr[i]==target)?i:RecursiveLinearSearch(arr, i+1, target);

}

//Find all index with value equals to target 

public static ArrayList<Integer> findAllIndex(int[] arr,int i,int target,ArrayList<Integer> list){
        if(i==arr.length){
            return list;
        }
            if(arr[i]==target){
                list.add(i);
            }
        return findAllIndex(arr, i+1, target,list); 
} 

//pattern using recursions PPP=print pyramid pattern
public static void PPP(int r,int c){
    if(r==0){
        return;
    }

    if(c<r){
        System.out.print("* ");
        PPP(r, c+1);
    }
    else{
        System.out.println();
        PPP(r-1, 0);
    }
}

//Recursive Bubble sort RS
public static void RBS(int[] arr,int curr,int e){
    if(e==0){
        System.out.println(Arrays.toString(arr));
        return;
    }
    if(curr<e){
        if(arr[curr]>arr[curr+1]){
        //swap values
            int temp=arr[curr];
            arr[curr]=arr[curr+1];
            arr[curr+1]=temp;
           
            RBS(arr,curr+1,e);
        }
     else{
        RBS(arr,curr+1, e);
    }
}
else{
     RBS(arr,0, e-1);
}

}


//selection sort using recurions

public static void recusrsiveSelectionSort(int[] arr,int e){
    if(e==0){
        System.out.println(Arrays.toString(arr));
        return;
    }
     int maxIndex= max(arr,e);
     if(maxIndex!=e){
        int temp=arr[maxIndex];
        arr[maxIndex]=arr[e];
        arr[e]=temp;
     }

     recusrsiveSelectionSort(arr,e-1);
}
public static int max(int[] arr,int end){
    int maxI=0;
    for(int i=1;i<=end;i++){
            if(arr[maxI]<arr[i]){
                maxI=i;
            }
    }
   return maxI;
}


//Method 2:Recursive selection sort
public static void RSS(int[] arr,int s,int e,int maxIndex){
        if(e==0){
            System.out.println(Arrays.toString(arr));
            return;
        }
        if(s<e){
            if(arr[s]>arr[maxIndex]){
                maxIndex=s;
            }
            RSS(arr, s+1, e, maxIndex);
        }
        else{
            int temp=arr[maxIndex];
            arr[maxIndex]=arr[e];
            arr[e]=temp;

            RSS(arr, 0, e-1,e-1);
        }





































    }
 
  public static void main(String[] args) {
      
    // int ans=factorial(5);
    // System.out.println(ans);

    // int ans=recuresionReverse(123);
    //  System.out.println(ans);

    int[] arr={5,9,4,33,1,90,6};
    // boolean ans =isArraySorted(arr, 0);
    // System.out.println(ans);


    // int index=RecursiveLinearSearch(arr, 0, 8);
    // if(index==-1){
    //     System.out.println("Element not found");
    // }
    // else{
    //     System.out.println("Element found at index "+index);
    // }
    
     
//     ArrayList<Integer> ansList=findAllIndex(arr, 0, 6,new ArrayList<>());
//     System.out.println(ansList);
  

//      ArrayList<Integer> ansList2=findAllIndex(arr, 0, 7,new ArrayList<>());
//     System.out.println(ansList2);

// PPP(4, 0);

// recusrsiveSelectionSort(arr, arr.length-1);
 RSS(arr, 0, arr.length-1,arr.length-1);

// RBS(arr, 0, arr.length-1);
  }
    
}
