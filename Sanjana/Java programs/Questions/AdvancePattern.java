package Questions;

import java.util.*;
public class AdvancePattern {
    public static void main(String arg[]) {
        System.out.println("Enter the number of rows");
        Scanner sc =new Scanner(System.in);
        int n= sc.nextInt();


        //  Butterfly pattern
        for (int i = 1; i <=n; i++) {
            for (int j = 1; j <=i; j++) {
                System.out.print("*");
            }
            for (int j =i; j <=2*n-i; j++) {
                System.out.print(" ");
            }
            for (int j =2*n-i+1; j <=2*n; j++) {
                System.out.print("*");
            }
            System.out.println();
         }
         for (int i = n; i >=1; i--) {
            for (int j = 1; j <=i; j++) {
                System.out.print("*");
            }
            for (int j =i; j <=2*n-i; j++) {
                System.out.print(" ");
            }
            for (int j =2*n-i+1; j <=2*n; j++) {
                System.out.print("*");
            }
            System.out.println();
         }
        
      
    }
}
