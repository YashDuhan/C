package concepts;

import java.util.Arrays;
public class BinnarySearchInMatrix {

//Time complexity= O(n)
//Space complexity =O(1)
 public static int[] searchIn2DArray(int[][] arr,int target){
        int[] index={-1,-1};
        int row=0;
        int col=arr[row].length-1;
       while(row<arr.length && col>=0){
           if(arr[row][col]==target){
                index[0]=row;
                index[1]=col;
                return index;
            }
            else if(arr[row][col]<target){
                row++;
            }
            else{
                col--;
                    
            }
       }
         return index;
}


public static int binarySearch(int[] arr,int target,int s,int e){
       
    //s+e if iteger may exceed range of integer so use :s+(e-s)/2
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
// Binary search in 2d array
//Time complexity =logn +logm n,m are number of rows and cols 
public static int[] binarySearchIn2DArray(int[][] arr,int target){
    int[] ans={-1,-1};
    int s=0;
    int e=arr.length-1;
    while(s<=e){
        int midrow=(s+e)/2;
        int lastColm=arr[midrow].length-1;
        if(lastColm<0 || e<0){
            System.out.println("No elements");
            return ans;
        }
        if(target>=arr[midrow][0] && target<=arr[midrow][lastColm]){
            int anscolm=binarySearch(arr[midrow], target, 0, arr[midrow].length);
            ans[0]=midrow;
            ans[1]=anscolm;
          
            return ans;
        }
        else if(target>arr[midrow][lastColm]){
            s=midrow+1;
        }
        else{
            e=midrow-1;
        }
    }
    return ans;
}

public static void main(String[] args) {
    int[][] matrix={{10,20,30,40},
                    {15,25,35,42},
                    {28,29,37,49},
                    {33,34,38,50}};
    
    int[][] matrix2={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};

 int[][] matrix3={{1,2,3,4}};
 int[][] matrix4={};

    int[] ansAt=searchIn2DArray(matrix,3);
    System.out.println(Arrays.toString(ansAt));
    System.out.println(matrix4.length);

int[] targetAt=binarySearchIn2DArray(matrix4,88);
System.out.println(Arrays.toString(targetAt));
}

}
