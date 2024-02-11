package concepts;
import java.util.*;
public class TwoDArrays {

    //INTRO to twod array
    //MUTABLE
    //Length of twoD array is = rows of array
    // to get column length =arr[row].length
    //Specifying colm length is not mandatory
   public static void main(String[] args) {
       Scanner sc= new Scanner(System.in);

       System.out.println("Enter the number of rows");
       int row=sc.nextInt();

       System.out.println("Enter the number of columns :");
       int cols=sc.nextInt();

       //array declaration
       int matrix[][]=new int[row][cols];

       //input elements
        System.out.println("Enter the elements of matrix:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                // System.out.print("matrix["+i+"]["+j+"] :");
                matrix[i][j]=sc.nextInt();
            }
            // System.out.println();
        }
        //printing matrix
        // for (int i = 0; i < row; i++) {
        //     for (int j = 0; j < cols; j++) {
        //        System.out.print( matrix[i][j]+" ");
        //     }
        //     System.out.println();
        // }

        
        /*To print 2D arrays
        for (int i = 0; i < matrix.length; i++) {
            System.out.println(Arrays.toString(matrix[i]));
        }*/ 


        //Printing twod array usinf enhance for loop
        // for(int[] rows:matrix){
        //         System.out.println(Arrays.toString(rows));
        // }
       

        //spiral traverse
        int top=0;
        int bottom=row-1;
        int left=0;
        int right=cols-1;

       while((top<=bottom) &&(left<=right)){

                for (int i =left; i <= right; i++) {
                    System.out.print(matrix[top][i]+" ");
                }
                top++;

                for (int i = top; i<= bottom ; i++) {
                    System.out.print(matrix[i][right]+" ");
                }
                right--;

                for (int i =right; i>=left; i--) {
                    System.out.print(matrix[bottom][i]+" ");
                }  
                bottom--;
                for (int i = bottom; i >=top; i--) {
                    System.out.print(matrix[i][left]+" ");
                }
                left++;

        }
        sc.close();
   }
        
}

