package Operators;

public class SwapTwoNumbers {
    public static void main(String[] args) {
        int a=10;
        int b=9;
        System.out.println("Values before swaping");
        System.out.println("a: "+a);
        System.out.println("b: "+b);
//        a=a^b;      // swaping using bitwise XOR(^) operator
//        b=a^b;
//        a=a^b;
        a=a+b;      // swaping using addition and subtraction
        b=a-b;
        a=a-b;
        System.out.println("Values after swaping");
        System.out.println("a: "+a);
        System.out.println("b: "+b);
    }
}
