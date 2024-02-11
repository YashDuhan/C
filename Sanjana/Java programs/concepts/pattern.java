package concepts;
import java.util.*;
public class pattern {
    public static void main(String arg[]) {
            Scanner sc= new Scanner(System.in);
            System.out.print("Enter the the number of rows :\t");
            int m=sc.nextInt();
            System.out.print("Enter the the number of columns :");
            int n=sc.nextInt();


            //Stars in parallelogram
            System.out.println("Enter the number of stars in each row :");
            int stars=sc.nextInt();

            // solid rectangle
            // for(int i =1;i<=m;i++){
            //    for(int j=1;j<=n;j++){
            //        System.out.print("* ");
            //    }
            //    System.out.println();
            // }

            // half pyramid
            for(int i=1;i<=m;i++){
                for(int j=1;j<=i;j++){
                    
                   
                        System.out.print("* ");
                    
                }
                System.out.println();
            }

            // half reverse pyramid
            // for(int i=m;i>=1;i   --){
            //     for(int j=1;j<=i;j++){
            //         System.out.print("* ");
            //     }
            //     System.out.println();

            // }
           
            // for(int i=1;i<=m;i++){
            //    int  k=i;
            //     for(int j=1;j<=n;j++){
                    
            //         System.out.print(k+" ");
            //         k++;
            //     }
            //     System.out.println();
            // }
                

            //flip pyramid
            // for(int i =1;i<=m;i++){
            //    for(int j=1;j<=n;j++){

            //     if (i+j>=n+1) {
            //         System.out.print("* ");
            //     } 
            //     else {
            //         System.out.print("  ");
            //     }
            //    }
            //    System.out.println();
            
            // }
                 
            // for (int i = 1; i <= m; i++) {
            //          for (int j = 1; j <= n; j++) {
            //              if(j<=i){
            //                  System.out.print(j+" ");
            //              }
            //          }

            //          System.out.println();
                     
            //      }

            for (int i = 1; i <=m; i++) {
                for (int j = 1; j <=n; j++) {
                    if (i+j <= n+1) {
                        System.out.print(j+" ");
                    } 
                }
                System.out.println();
            }

            // Parallelogram
            // for (int i = 1; i <=m; i++) {
            //     for (int j = 1; j <=stars+m-1 ; j++) {

            //         if(i+j>=m+1 && i+j<=m+stars){
            //             System.out.print("* ");
            //         }
            //         else{
            //             System.out.print("  ");
            //         }
                    
            //     }
            //     System.out.println();
                
            // }

            //0-1 triangle
            for (int i = 1; i<=m; i++) {
                for (int j = 1; j <=i; j++) {
                    if((i+j)%2==0){
                        System.out.print("1 ");
                    }
                    else{
                        System.out.print("0 ");
                    }
                }
                System.out.println();
                
            }


    }
}
