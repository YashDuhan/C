package stacks;
import java.util.Stack;
import java.util.Scanner;

public class BasicStacks {
	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		Stack<Integer> st = new Stack<>();
		//isEmpty
		System.out.println("Is Empty : "+st.isEmpty());
		//push
		st.push(23);
		st.push(5);
		st.push(4);
		st.push(34); //top-most-elem
		System.out.println("Is Empty : "+st.isEmpty());
		//peek
		System.out.println("Top element : "+st.peek());
		System.out.println("Stack : "+st); //will print the whole stack
		System.out.println("Size : "+st.size());
//		st.pop(); // will remove the top elem
//		System.out.println(st);
//		System.out.println("Size : "+st.size());
//		st.pop();
//		System.out.println(st);
//		System.out.println("Size : "+st.size());
		
		System.out.println("Enter the index of element to be displayed : ");
		int ind = s.nextInt();
		System.out.println(st.elementAt(ind));
		
		
	}
}
