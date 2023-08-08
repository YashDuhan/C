package Linked_revision;
import java.util.Scanner;

public class InsertAtFirst {
	public static Node<Integer> createLinkedList()
	{
		Node<Integer> a1 = new Node<>(20);
		Node<Integer> a2 = new Node<>(30);
		Node<Integer> a3 = new Node<>(40);
		Node<Integer> a4 = new Node<>(50);
		a1.next = a2;
		a2.next = a3;
		a3.next = a4;
		return a1;
	}
	public static void printLinkedList(Node<Integer> head)
	{
		while(head!= null)
		{
			System.out.println(head.data);
			head = head.next;
		}
	}
	public static Node<Integer> insertAtFirst(Node<Integer> head, int data)
	{
		Node<Integer> currentNode = new Node<>(data);
		currentNode.next = head;
		head = currentNode;
		return head;
	}
	
	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		Node<Integer> head = createLinkedList();
		System.out.print("Enter the value to be inserted at first : ");
		int data = s.nextInt();
		System.out.println("Before insertion : ");
		printLinkedList(head);
		System.out.println("After Insertion : ");
		head = insertAtFirst(head,data); //updated the head
		printLinkedList(head);
		
	}
	
}
