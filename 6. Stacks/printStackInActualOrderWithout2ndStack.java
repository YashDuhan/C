package Stacks;

import java.util.Scanner;
import java.util.Stack;

public class printStackInActualOrderWithout2ndStack {
    public static void main(String[] args) {
            Scanner s = new Scanner(System.in);
            Stack<Integer> st = new Stack<>();
            //element insertion
            System.out.println("Enter the elements to be inserted(enter -1 to stop entering) : ");
            int data = s.nextInt();
            while(data != -1)
            {
                st.push(data);
                data = s.nextInt();
            }
            //printing the stack
            while(st.size()>0)
            {
                int element = st.pop();
                System.out.println(element);
            }

    }
}
