package concepts;
import java.util.*;
public class BinaryToDecimal {

    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);

        System.out.print("Enter the binary number :");
        long binary = sc.nextLong();

        double decimal=0;
        int n =0;
        while(binary>0){
          long rem=binary % 10;
            decimal= decimal + rem * Math.pow(2, n);
            n++;
            binary=binary/10;
        }
        System.out.println(decimal);
    }
}
