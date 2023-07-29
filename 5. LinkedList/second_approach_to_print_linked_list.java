package linked_list;


public class second_approach_to_print_linked_list {
	
	public static Node<Integer> createLinkedList() //to create a linked-list
	{
		Node<Integer> a1 = new Node<>(100);
		Node<Integer> a2 = new Node<>(200);
		Node<Integer> a3 = new Node<>(300);
		Node<Integer> a4 = new Node<>(400);
		Node<Integer> a5 = new Node<>(500);
		a1.next = a2;
		a2.next = a3;
		a3.next = a4;
		a4.next = a5;
		return a1;
	}
	
	public static void printLinkedList(Node <Integer> head)
	{
		while(head != null)  //use while loop to print the LL
		{
			System.out.println(head.data);
			head = head.next; //it will automatically add head.next to print 'til last element
		}
	}
	public static void main(String[] args) {
	Node <Integer> head = createLinkedList();
	printLinkedList(head);
	}
}
