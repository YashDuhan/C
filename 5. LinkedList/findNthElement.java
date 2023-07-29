package Linked_revision;
import java.util.Scanner;
public class findNthElement {

	public static Node<Integer> createLinkedList()
	{
		Node<Integer> n1 = new Node<>(10);
		Node<Integer> n2 = new Node<>(20);
		Node<Integer> n3 = new Node<>(30);
		Node<Integer> n4 = new Node<>(40);
		n1.next = n2;
		n2.next = n3;
		n3.next = n4;
		return n1;
	}
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Node<Integer> head = createLinkedList();
		System.out.println("Enter the position : ");
		int position = s.nextInt();
		int i = 0; //will be used to traverse the loop
		while(head != null && i<position-1)
		{
			head = head.next;
			i++;
		}
		if(head!= null)
		{
			System.out.println("The element at "+position+" is "+head.data);
		}
		else
		{
			System.out.println("The Linked list has less than "+position+" elements");
		}
		
	}

}
