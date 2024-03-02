package Linked_revision;

public class MidPointofLinkedListUsing2Pointers {
	public static Node<Integer> createLinkedList()
	{
		Node<Integer> a1 = new Node<>(10);
		Node<Integer> a2 = new Node<>(20);
		Node<Integer> a3 = new Node<>(30);
		Node<Integer> a4 = new Node<>(40);
		Node<Integer> a5 = new Node<>(50);
		Node<Integer> a6 = new Node<>(60);
		Node<Integer> a7 = new Node<>(70);
		Node<Integer> a8 = new Node<>(80);
		Node<Integer> a9 = new Node<>(90);
		a1.next = a2;
		a2.next = a3;
		a3.next = a4;
		a4.next = a5;
		a5.next = a6;
		a6.next = a7;
		a7.next = a8;
		a8.next = a9;
		return a1;	
	}
	
	public static Node<Integer> findMidPoint(Node<Integer> head)
	{
		Node<Integer> slowPointer = head;
		Node<Integer> fastPointer = head;
		while(fastPointer != null && fastPointer.next != null)
		{
			fastPointer = fastPointer.next.next;
			slowPointer = slowPointer.next;
		}
		return slowPointer;
	}

	public static void main(String[] args)
	{
		Node<Integer> head = createLinkedList();
		Node<Integer> midPoint = findMidPoint(head);
		System.out.println("The mid value is "+ midPoint.data);
	}
}
