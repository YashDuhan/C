package Questions;
import java.util.Scanner;

//Write a function that will print all the possile combinations of alphbets on keypad for a given number
public class keypad {
        public static String map[]={".","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};

        public static void keypadcombo(String number,int idx,String res){
            if(idx>=number.length()){
                System.out.println(res);
                return;
            }
                char Snum=number.charAt(idx);
                String words=map[Snum-'0'];

                for (int i = 0; i < words.length(); i++) {
                    keypadcombo(number, idx+1, res+words.charAt(i));
                }
        }
  
        public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter a number");
            String num=sc.nextLine();
            keypadcombo(num, 0,"");
        }
}
