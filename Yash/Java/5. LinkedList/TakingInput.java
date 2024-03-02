package Linked_revision;
import java.util.Scanner;

public class TakingInput {
	public static Node<Integer> takeInput()
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter -1 to stop entering the number ");
		System.out.println("Enter the number : ");
		int data = s.nextInt();
		Node<Integer> head = null;
		Node<Integer> tail = null;
		while(data !=-1)
		{
			Node<Integer> currentNode = new Node<Integer>(data);
			if(head == null)
			{
				head = currentNode;
				tail = currentNode;
			}
			else
			{
				tail.next = currentNode;
				tail = currentNode;
			}
			data = s.nextInt();
		}
		return head;
	}
	public static void printLinkedList(Node<Integer> head)
	{
		while(head!= null)
		{
			System.out.println(head.data);
			head = head.next;
		}
	}
	
	public static void main(String[] args)
	{
		Node<Integer> head = takeInput();
		printLinkedList(head);
	}
}
