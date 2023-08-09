package Linked_revision;

public class MidPointofLinkedList {
	public static Node<Integer> createLinkedList()
	{
		Node<Integer> a1 = new Node<>(10);
		Node<Integer> a2 = new Node<>(20);
		Node<Integer> a3 = new Node<>(30);
		Node<Integer> a4 = new Node<>(40);
		Node<Integer> a5 = new Node<>(50);
		Node<Integer> a6 = new Node<>(60);
		a1.next = a2;
		a2.next = a3;
		a3.next = a4;
		a4.next = a5;
		a5.next = a6;
		return a1;	
	}
		
	public static void findMidPoint(Node<Integer> head)
	{
		//count the nodes
		int count = 0;
		Node<Integer> temp = head;
		while(temp != null)
		{
			temp = temp.next;
			count++;
		}
		int mp = count/2;
		for(int i = 0; i<mp; i++)
		{
			head = head.next;
		}
		System.out.println("The mid point is : "+head.data);
	}
	
	public static void main(String[] args)
	{
		Node<Integer> head = createLinkedList();
		findMidPoint(head);
	}
}
