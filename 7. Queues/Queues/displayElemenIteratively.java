package Queues;

import java.util.*;

public class displayElemenIteratively {
    public static void main(String[] args) {
        Queue<Integer> q = new LinkedList<>();
        q.add(1);
        q.add(2);
        q.add(4);
        q.add(5);
        q.add(6);
        int size = q.size();
        for(int i = 0; i<size;i++)
        {
            int elem = q.remove();
            System.out.println(elem);
        }
    }
}
