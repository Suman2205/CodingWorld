package Basics;
import java.util.Scanner;
public class TakingInput {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a;
        System.out.print("Enter first number: ");
        a=sc.nextInt();
        int b;
        System.out.print("Enter second number: ");
        b=sc.nextInt();
        System.out.println("a: " + a + " b: "+b);
    }
}
