package concepts;
import java.util.*;
public class Loops2 {
    public static void main(String a[]) {
      Scanner sc = new Scanner(System.in);
      int choice =1;
      int counter=1;
      int sum=0;
    ;
        System.out.println("Welcome user.");
        do{
                System.out.println("Press the number corrosponding to your choice : \n 1 :Enter marks\n 0 :Exit ");
                choice =sc.nextInt();
                if(choice==1){
                    System.out.println("Enter your marks : ");
                    int marks = sc.nextInt();
                     sum=sum+marks;
                   
                }
                else if(choice==0){
                    System.out.println("Thankyou");
                    break;
                }
                else{
                    System.out.println("Invalid choice\nProgram terminated");
            }
                counter++;
         }while(choice==1);

         int avg= sum/counter;
         if(avg >=90){
             System.out.println("Excellent marks"+avg);
         }
         else if(avg >=60){
            System.out.println("Good marks"+avg);
        }
        else{
            System.out.println("Still not a problem. Work hard and you will definitely do better"+avg);
        }
    
    }
    
}
