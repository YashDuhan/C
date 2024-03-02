package Linked_revision;

public class Counting {
	
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
		int count = 0;
		Node<Integer> head = createLinkedList();
		while(head != null)
		{
			System.out.println(head.data);
			head = head.next;
			count++;
		}
		System.out.println("Total elements are "+count);
		
	}

}
