package stacks;
import java.util.Stack;
import java.util.Scanner;

public class copyStack {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Stack<Integer> st = new Stack<>();
		System.out.println("Enter the number of elements : ");
		int size = s.nextInt();
		for(int i = 0; i<size;i++)
		{
			System.out.println("Enter the element for index "+i+" : ");
			int data = s.nextInt();
			st.push(data);
		}
		System.out.println("Stack 1 : "+st);
		
		//reverse-stack
		Stack<Integer> st2 = new Stack<>();
		//Approach-1
//		while(st.size()>0)
//		{
//			int elem = st.peek();
//			st2.push(elem);
//			st.pop();
//		}
		while(st.size()>0)
		{
			st2.push(st.pop());
		}
		System.out.println("Reversed Stack : "+st2);
		//final-stack
		Stack<Integer> st3 = new Stack<>();
		while(st2.size()>0)
		{
			st3.push(st2.pop());
		}
		System.out.println("Final Stack : "+st3);

	}

}
