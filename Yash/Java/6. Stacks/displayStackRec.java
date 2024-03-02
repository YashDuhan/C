package Stacks;
import java.util.Stack;
public class displayStackRec {
    public static void displayStack(Stack<Integer> st)
    {
        if(st.size() == 0)
        {
            return;
        }

        int element = st.pop();
        displayStack(st);
        System.out.print(" "+element);

    }

    public static void main(String[] args) {
        Stack<Integer> st = new Stack<>();
        st.push(20);
        st.push(30);
        st.push(40);
        st.push(50);
        displayStack(st);

    }
}
