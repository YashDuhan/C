package concepts;
import java.util.*;
public class StringsPractice {
 public static void main(String[] args) {
    Scanner sc =new Scanner(System.in);

    //Question 1: To print sum of length of strings in array

    System.out.println("Enter the number of element of array : "); 
    int len=sc.nextInt();

    String[] names= new String[len];
    System.out.println("Enter the names :");
    for (int i = 0; i < len; i++) {
        names[i]=sc.next();
    }
    int sum=0;
    for (int i = 0; i < names.length; i++) {
        sum=sum+names[i].length();
    }

    System.out.println("Total sum of all string in array is "+sum);

    //Question 2: replace e with i

      System.out.println("Enter the string :");
      String str=sc.nextLine();
      String result="";
      for (int i = 0; i < str.length(); i++) {
          if (str.charAt(i)=='e'||str.charAt(i)=='E') {
              result+='i';
          } else {
              result+=str.charAt(i);
          }
      }
      System.out.println(result);


    //Question 3 : Extract username from email
    System.out.println("Enter your email :");
    String email=sc.nextLine();
    String uname="";
    for (int i = 0; i < email.length(); i++) {
        if (email.charAt(i)=='@') {
            System.out.println("Username :"+uname);
            break;
        } else {
           uname+=email.charAt(i);
        }
    }
 }   
}
