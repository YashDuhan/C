package Stacks.ArrayImplementation;

public class arrayImplementation {
    public static class Stack
    {
        private int[] arr = new int[10];
        private int idx = 0;
        void push(int x)
        {
            if(isFull()) //condition will only execute if the stack is full
            {
                System.out.println("Stack Overflowed");
                return;
            }
            arr[idx] = x;
            idx++;
        }
        int peek()
        {
            if (idx == 0)
            {
                System.out.println("Stack is Empty!");
                return -1;
            }
            else {
                return arr[idx - 1]; //top-most element should be at idx-1
            }
        }

        int pop()
        {
            if(idx ==0)
            {
                System.out.println("Stack is Empty!");
                return -1;
            }
            else
            {
                int top = arr[idx-1];
                arr[idx-1] = 0; //all the elements by default have the value zero(0) stored in them
                idx--; //to fix the index's location
                return top;
            }
        }
        void display()
        {
            for(int i = 0; i<=idx-1;i++)
            {
                System.out.print(arr[i]+" ");
            }
            System.out.println(); //used to print a new line after every execution
        }
        int size()
        {
            return idx;
        }

        boolean isEmpty()
        {
            if(idx == 0)
            {
                return true;
            }
            else {
                return false;
            }
        }

        boolean isFull()
        {
            if(arr.length ==idx)
            {
                return true;
            }
            else {
                return false;
            }
        }
        int capacity()
        {
            return arr.length;
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
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);
        st.push(6);
        st.push(7);
        st.push(8);
        st.push(9);
        st.push(10);
        st.display();
        System.out.println("Stack is full : "+st.isFull());
        st.push(20);
        System.out.println("The capacity of array is : "+st.capacity());



    }
}
