package Questions;
import java.util.Scanner;
//This program will tell what are the minimum number of characters that are required to make a password good or valid
// This program helps in regex concepts.
class Password{

    public static int minNum(String password){
        int n=password.length();
        int ans=0;

        if(!password.matches("(?=.*[a-z]).*")){
            ans++;
        }
         if(!password.matches("(?=.*[A-Z]).*")){
            ans++;
        }
         if(!password.matches("(?=.*[0-9]).*")){
            ans++;
        }
         if(!password.matches("(?=.*[~!@#$%^&*()_-]).*")){
            ans++;
        }
        if(ans+n>=6){
            return ans;
        }
        else{
            return 6-n;
        }

    }

    public static void main(String ags[]){

        Scanner sc=new Scanner(System.in);
            System.out.println("Enter the password to check : ");
            String pswd=sc.next();
            int ans =minNum(pswd);
            System.out.println(ans);
        


    }

}