package Interfaces;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.SplittableRandom;
import java.util.Stack;

public class ListInterface {
    public static void main(String[] args) {
        ArrayList<Integer>arr=new ArrayList<Integer>(5);
        arr.add(1);
        arr.add(2);
        arr.add(3);
        arr.add(4);
        arr.add(5);
        arr.add(6);
        arr.add(7);
        arr.add(7,8);
        arr.add(3,9);
        System.out.println(arr);
        System.out.println(arr.get(5));
        arr.set(4,5);
        System.out.println(arr.contains(4));
        System.out.println(arr);
        LinkedList<Integer>l=new LinkedList<>();
        l.add(1);
        l.add(2);
        l.add(3);
        l.add(2,4);
        l.add(2,6);
        System.out.println(l);
        System.out.println(l.get(4));
        System.out.println(l.contains(4));
        l.set(3,7);
        System.out.println(l);
        Stack<Integer>s=new Stack<>();
        s.add(1);
        s.add(2);
        s.add(3);
        s.add(2,4);
        s.add(2,6);
        System.out.println(s);
        System.out.println(s.get(4));
        System.out.println(s.contains(4));
        s.set(3,7);
        System.out.println(s);
        s.push(3);
        s.pop();
        s.push(8);
        s.push(9);
        s.pop();
        System.out.println(s.peek());
        System.out.println(s);

    }
}
