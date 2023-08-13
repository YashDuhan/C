package Stacks.LinkedListImplementation;


public class linkedListImplementation {
    public static class Stack
    {
        private Node head = null;
        private int size = 0;
        void push(int x)
        {
            Node temp = new Node(x);
            temp.next = head;
            head = temp;
            size++;
        }
        void display()
        {
            Node temp = head;
            while(temp != null)
            {
                System.out.println(temp.data);
                temp = temp.next;
            }
        }
        int pop()
        {
            if(head == null)
            {
                System.out.println("Stack underflow error!");
                return -1;
            }
            else {
                int value = head.data;
                head = head.next;
                return value;
            }
        }
        int peek()
        {
            if(head == null)
            {
                System.out.println("Stack underflow error!");
                return -1;
            }
            else {
                return head.data;
            }
        }

        boolean isEmpty()
        {
            if(size == 0)
            {
                return true;
            }
            else {
                return false;
            }
        }

        int size()
        {
            return size;
        }


    }

    public static void main(String[] args) {
        Stack st = new Stack();
        st.push(20);
        st.push(30);
        st.push(40);
        st.display();
        int a = st.pop();
        System.out.println("Popped");
        System.out.println("Size : "+ st.size());
        st.display();
        st.push(a);
        System.out.println("Added Popped elem");
        System.out.println("Size : "+ st.size());
        st.display();
        System.out.println("Stack is empty : "+st.isEmpty());
        st.pop();// 20 30 40
        st.pop();//20 30
        st.pop();//20
        st.pop();//
        System.out.println("Stack is empty : "+st.isEmpty());
    }
}
