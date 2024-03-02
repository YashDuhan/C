package Linked_revision;
import java.util.Scanner;
public class DeleteANode {
	public static Node<Integer> createLinkedList()
	{
		Node<Integer> n1 = new Node<>(10);
		Node<Integer> n2 = new Node<>(20);
		Node<Integer> n3 = new Node<>(30);
		Node<Integer> n4 = new Node<>(450);
		Node<Integer> n5 = new Node<>(40);
		n1.next = n2;
		n2.next = n3;
		n3.next = n4;
		n4.next = n5;
		return n1;
	}
	public static void printLinkedList(Node<Integer> head)
	{
		while(head != null)
		{
			System.out.print(" "+head.data);
			head = head.next;
		}
	}
	public static void deleteLinkedListNode(Node<Integer> head, int pos)
	{
		Node<Integer> previousNode = null;
		Node<Integer> currentNode = head;
		for(int i = 0; i<pos;i++)
		{
			previousNode = currentNode;
			currentNode = currentNode.next;
			
		}
		previousNode.next = currentNode.next;
		
	}
	
	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter the index :  ");
		int pos = s.nextInt();
		Node<Integer> head = createLinkedList();
		System.out.print("Before Deletion : ");
		printLinkedList(head);
		System.out.println("");
		deleteLinkedListNode(head,pos);
		System.out.print("After Deletion : ");
		printLinkedList(head);
	}
}
