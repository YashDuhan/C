package Linked_revision;

public class deleteFirstNode {
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
	public static void printLinkedList(Node<Integer> head)
	{
		while(head != null)
		{
			System.out.println(head.data);
			head = head.next;
		}
	}
	
	public static Node<Integer> deleteAtFirst(Node<Integer> head)
	{
		Node<Integer> newhead = head.next;
		return newhead;
	}
	
	public static void main(String[] args)
	{
		Node<Integer> head = createLinkedList();
		System.out.println("Before Deletion : ");
		printLinkedList(head);
		System.out.println("After Deletion : ");
		head = deleteAtFirst(head);
		printLinkedList(head);
	}
}
