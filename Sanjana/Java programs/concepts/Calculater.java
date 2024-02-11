package concepts;
import java.util.*;
class Calculater{
    public static void main(String arg[]){

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number");
        int num1 = sc.nextInt();
        System.out.println("Enter second number");
        int  num2 = sc.nextInt();
        System.out.println("Choose the operation: \n1 : Add\n2 : Subtract\n3 : Multiply\n4 : Division");
        int choice = sc.nextInt();
        // if (choice == 1){
        //     System.out.println(num1 + num2);
        // }
        //  else if (choice == 2){
        //     System.out.println(num1 - num2);
        // }
        //  else if (choice == 3){
        //     System.out.println(num1 * num2);
        // }
        // else  if (choice == 4){
        //     System.out.println(num1 /num2);
        // }

        // else{
        //     System.out.println("Invalid choice");
        // }

        switch (choice){
            case 1 : System.out.println("Addition :\t"+(num1+num2));
            break;
            case 2 : System.out.println("Subtraction :\t"+(num1-num2));
            break;
            case 3 : System.out.println("Multiplication :\t"+(num1*num2));
            break;
            case 4 : if(num2==0){
                     System.out.println("Invalid division");
            }
            else{
                System.out.println("Division :\t"+(num1/num2));
            }
                        
            break;
            default : System.out.println("Invalid choice");
            break;

        }
    
    }
}
  