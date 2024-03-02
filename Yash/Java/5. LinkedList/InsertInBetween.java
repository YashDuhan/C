package Linked_revision;
import java.util.Scanner;
public class InsertInBetween {
	public static Node<Integer> createLinkedList()
	{
		Node<Integer> n1 = new Node<>(10);
		Node<Integer> n2 = new Node<>(20);
		Node<Integer> n3 = new Node<>(40);
		Node<Integer> n4 = new Node<>(50);
		n1.next = n2;
		n2.next = n3;
		n3.next = n4;
		return n1;
	}
	
	public static void printLinkedList(Node<Integer> head)
	{
		while(head != null)
		{
			System.out.println(head.data);
			head = head.next;
		}
	}
	public static void insertLinkedList(Node<Integer> head)
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter the element to be inserted : ");
		int data = s.nextInt();
		System.out.print("Enter the position the inserted : ");
		int pos = s.nextInt();
		Node<Integer> newNode = new Node<>(data);
		Node<Integer> previousNode = null;
		Node<Integer> nextNode = null;
		for(int i = 0; i<pos-1; i++)
		{
			
			previousNode = head.next;
			nextNode = head.next.next;
		}
		//insertion-part
		newNode.next = nextNode;
		previousNode.next = newNode;
	}
	
	public static void main(String[] args)
	{
		Node<Integer> head = createLinkedList();
		System.out.print("Before inserion : " );
		printLinkedList(head);
		insertLinkedList(head);
		System.out.print("After insertion : " );
		printLinkedList(head);
	}
}
