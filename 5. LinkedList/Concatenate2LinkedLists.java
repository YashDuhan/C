package Linked_revision;

public class Concatenate2LinkedLists {
	public static Node<Integer> createLinkedList1()
	{
		Node<Integer> n1 = new Node<>(10);
		Node<Integer> n2 = new Node<>(20);
		Node<Integer> n3 = new Node<>(30);
		n1.next = n2;
		n2.next = n3;
		return n1;	
	}
	
	public static Node<Integer> createLinkedList2()
	{
		Node<Integer> a1 = new Node<>(40);
		Node<Integer> a2 = new Node<>(50);
		Node<Integer> a3 = new Node<>(60);
		a1.next = a2;
		a2.next = a3;
		return a1;
	}
	
	public static void printLinkedList(Node<Integer> head)
	{
		while(head!=null)
		{
			System.out.println(head.data);
			head = head.next;
		}
	}
	
	public static void concatenateNodes(Node<Integer> head,Node<Integer> head2)
	{
		//LL2 will get concatenated with LL1
		Node<Integer> lastNode = head;
		while(lastNode.next != null)
		{
			lastNode = lastNode.next;
		}
		lastNode.next = head2;		
	}
	
	public static void main(String[] args)
	{
		Node<Integer> head = createLinkedList1();
		Node<Integer> head2 = createLinkedList2();
		concatenateNodes(head,head2);
		printLinkedList(head);
	}
	
}
