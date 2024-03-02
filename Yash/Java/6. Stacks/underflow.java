package Stacks;

import java.util.Stack;

public class underflow {
    public static void main(String[] args) {
        Stack<Integer> st = new Stack<>();
        st.push(20);
        st.push(30);
        st.push(40);
        st.push(50);
        System.out.println(st); //20 30 40 50
        st.pop();
        System.out.println(st);//20 30 40
        st.pop();
        System.out.println(st);//20 30
        st.pop();
        System.out.println(st);//20
        st.pop();
        System.out.println(st);//
        st.pop(); // will give underflow error
        System.out.println(st);

    }
}
