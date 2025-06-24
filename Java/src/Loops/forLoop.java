package Loops;
import java.util.Scanner;
public class forLoop {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.print("Enter no. of terms of fibonacci series you want to print: ");
        n=sc.nextInt();
        int a=0;
        int b=1;
        int c=1;
        for(int i=1;i<=n;i++){
            System.out.print(a+" ");
            a=b;
            b=c;
            c=a+b;
        }
    }
}
