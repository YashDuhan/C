package Questions;
import java.util.*;
public class hanoiTowerRecursion {
    //Time complexity : n^2
    public static void towerOfHanoi(String source,String Helper,String dest,int disk ){

        if (disk==1) {
            System.out.println("Transfer disk "+disk+" from "+source +" to "+dest);
            return;
        }
            towerOfHanoi(source, dest, Helper, disk-1);
            System.out.println("Transfer disk "+disk+" from "+source +" to "+dest);
            towerOfHanoi(Helper, source, dest, disk-1);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
         System.out.println("Enter the nuber of disk :");
         int n=  sc.nextInt();
        towerOfHanoi("S", "H", "D", n);
        
    }
    
}
