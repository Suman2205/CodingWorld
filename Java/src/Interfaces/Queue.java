package Interfaces;

import java.util.*;

public class Queue {
    public static void main(String[] args) {
        ArrayDeque<Integer>ad=new ArrayDeque<Integer>();
        ad.add(1);
        ad.addFirst(3);
        ad.addLast(5);
        System.out.println(ad);
        System.out.println("Size of ArrayDeque: "+ad.size());
        System.out.println("Front element of array deque is "+ad.peekFirst());
        Iterator it=ad.iterator();
        while(it.hasNext()){
            System.out.println(it.next());
        }
        System.out.println("Element 3 is deleted");
        ad.remove(3);
        System.out.println(ad);
        System.out.println("Priority Queue: ");
        PriorityQueue<Integer>pq=new PriorityQueue<Integer>();
        pq.add(5);
        pq.add(4);
        pq.add(6);
        pq.add(2);
        System.out.println(pq);
        System.out.println("Top element of priority queue is "+pq.peek());
        System.out.println("Removing top element of Priority queue that is, "+pq.poll());
        System.out.println(pq);
        System.out.println("Making Priority queue of max heap: ");
        PriorityQueue<Integer>pq1=new PriorityQueue<Integer>(Comparator.reverseOrder());
        pq1.add(5);
        pq1.add(4);
        pq1.add(6);
        pq1.add(2);
        System.out.println(pq1);
        System.out.println("Clearing all lists");
        ad.clear();
        pq.clear();
        pq1.clear();
        System.out.println(pq);
    }
}
