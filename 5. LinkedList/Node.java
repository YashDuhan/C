package linked_list;

public class Node<T>{ //<T> is a generic (https://www.geeksforgeeks.org/generics-in-java/)
	T data;
	Node<T> next;
	Node(T data)
	{
		this.data = data;
	}
	//next = null; ideally the value of next will be null by default
}
