package concepts;
import java.util.*;

public class Prime {
    public static void main(String arg[]) {
        System.out.println("Enter the number to check :");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int flag=0;
        if ((num==0)||(num==1)) {
            System.out.println("Not a prime number");
            flag=1;
        } 
        else {
                for(int i=2;i<=num/2;i++){
                     int rem =num%i;;
                     if(rem==0){
                             System.out.println(num+"is not a prime number ");
                             flag=1;
                             break;
                            }   
                    }
            }
        if(flag==0){
            System.out.println("prime number");
        }
        System.out.println("Thankyou");
    }
}
