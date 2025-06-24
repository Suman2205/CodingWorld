package Interfaces;

import java.util.PriorityQueue;

public class QueueInterfaces {
    public static void main(String[] args) {
        PriorityQueue<Integer> pq=new PriorityQueue<Integer>();
        pq.add(1);
        pq.add(0);
        pq.add(3);
        System.out.println(pq);
        System.out.println(pq.peek());
        System.out.println(pq.poll());
        System.out.println(pq.remove());
        System.out.println(pq.size());
    }
}
