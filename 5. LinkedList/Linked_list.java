package linked_list;

public class Linked_list {
	
	
	public static Node<Integer> createLinkedList()
	{
		Node<Integer> a1 = new Node<>(10); 
		Node<Integer> a2 = new Node<>(20);
		Node<Integer> a4 = new Node<>(30);
		Node<Integer> a3 = new Node<>(40);
		a1.next = a2;
		a2.next = a3;
		a3.next = a4; //a4 will be null by default
		return a1;//we only have to return the first node(head)
		
	}
	
	public static void printLinkedList(Node <Integer> head)
	{
		System.out.println(head.data);
		System.out.println(head.next.data);
		System.out.println(head.next.next.data);
		System.out.println(head.next.next.next.data);
	}
	
	public static void main(String[] args){
		
		Node<Integer> head = createLinkedList();
		printLinkedList(head);
//		Node<Integer> n1 = new Node<>(10); //in the Node file I've written <T> to explicitly declare the type Integer 
//		System.out.println(n1); //n1 has the address of Node which contains the value of Node which will have 10 in it
//		System.out.println(n1.data);
//		System.out.println(n1.next);
	}
}
