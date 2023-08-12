package stacks;

import java.util.Scanner;
import java.util.Stack;
import java.util.Scanner;
public class deleteAnyElement {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Stack<Integer> st = new Stack<>();
		Stack<Integer> st2 = new Stack<>();
		st.push(1);
		st.push(2);
		st.push(3);
		st.push(4);
		System.out.println("Stack : "+st);
		System.out.println("Enter the pos to be deleted : ");
		int ind = s.nextInt();
		while(st.size()>ind)
		{
			st2.push(st.pop());
		}
		
		st.pop();
		
		while(st2.size()>0)
		{
			st.push(st2.pop());
		}
		System.out.println("Final Stack : "+st);

	}

}
