package concepts;
import java.util.*;
public class fibonaccii {

    public static void fibo(int a,int b,int term){
        if (term==3) {
            int c=a+b;
            System.out.print(c+" ");
            return;
     }

        int c=a+b;
        System.out.print(c+" ");
        fibo(b, c, term-1);

    }
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter the number of terms :");
        int n= sc.nextInt();
        if(n==0){
            System.out.println("No terms");
        }
        else if(n==1){
            System.out.println("0");
        }
        else if(n==2){
            System.out.println("0 1");
        }
        else{
            System.out.print("0 1 ");
            fibo(0, 1, n);   
        }
        sc.close();
       
}
}
