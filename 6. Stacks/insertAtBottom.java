package stacks;
import java.util.Stack;
import java.util.Scanner;
public class insertAtBottom {
	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		Stack<Integer> st = new Stack<>();
		st.push(1);
		st.push(2);
		st.push(3);
		st.push(4);
		System.out.println("Stack : "+st);
		System.out.println("Enter the element to be inserted : ");
		int data = s.nextInt();
		System.out.println("Enter the index : ");
		int ind = s.nextInt();
		Stack<Integer> st2 = new Stack<>();
		while(st.size()>ind)
		{
			st2.push(st.pop());
		}
		
		st.push(data);
		
		while(st2.size()>0)
		{
			st.push(st2.pop());
		}
		System.out.println("final stack :"+st);
	}
}
