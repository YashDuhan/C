package Questions;
import java.util.Stack;

public class StackPractice {
    //to reverse a string
    public static String rev(String str){
        char[] rev=new char[str.length()];
     Stack<Character> stack=new Stack<>();
            for(int i=0;i<str.length();i++){
                stack.push(str.charAt(i));
            }
            int i=0;
            while(!stack.isEmpty()){
                rev[i]=stack.pop();
                i++;
            }
            return new String(rev);
            

    }

    public static void main(String[] args) {
       String  str="sanjana";
       String rev=rev(str);
       System.out.println(rev);

    }
    
}
