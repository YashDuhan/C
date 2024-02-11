package concepts;
import java.util.*;
public class loops {
        public static void main(String arg[]) {
        Scanner sc= new Scanner(System.in);
        int sum =0;
        System.out.println("Enter the number of terms whose sum is to be calculated");
        int n = sc.nextInt();
        for(int i=1;i<=n;i++){
           sum=sum+i;
        }
        System.out.println("sum of first "+n+" integers is "+sum);


        //to print table with loop
        System.out.println("Enter the number whose table is to be calculated :");
        int num =sc.nextInt();
        for(int i=0;i<=10;i++){
            int mul = num *i;
            System.out.println(num+" * "+i+" = "+mul);
        }
        System.out.println("Enter the number whose table is to be calculated :");
        num =sc.nextInt();
        int i=0;
        while(i<=10){
            int mul = num * i;
            System.out.println(num+" * "+i+" = "+mul);
            i++;
        }

        
        //occurence : by loop
        String str  =sc.nextLine();
        int first=-1;
         int last=-1;
        for ( i = 0; i < str.length(); i++) {
            if(str.charAt(i)=='a' && first==-1){
                first=i;
            }
            if (str.charAt(str.length()-1-i)=='a') {
                last=i;
            }
            
        }
        if (first==-1) {
            System.out.println("Element not found");   
        } 
        else {
            System.out.println("First occurence :"+first+"\nlast occurence : "+last);
        }
    

    }
    
}
