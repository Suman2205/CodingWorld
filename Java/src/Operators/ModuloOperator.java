package Operators;
import java.util.Scanner;
public class ModuloOperator {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a;
        System.out.print("Enter dividend: ");
        a=sc.nextInt();
        int b;
        System.out.print("Enter divisor: ");
        b=sc.nextInt();
        System.out.println("The remainder when "+a+" is divided by "+b+" : "+(a%b));
    }
}
