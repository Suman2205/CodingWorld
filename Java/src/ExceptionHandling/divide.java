package ExceptionHandling;

import java.util.Scanner;

public class divide {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.print("Enter no. of elements: ");
        n=sc.nextInt();
        int[] num=new int[n];
        int[] deno=new int[n];
        for(int  i=0;i<n;i++){
            System.out.print("Enter numerator and denominator: ");
            num[i]=sc.nextInt();
            deno[i]=sc.nextInt();
        }
            for(int i=0;i<=num.length;i++){
                try{
                    System.out.print("The value of "+num[i]+"/"+deno[i]+": ");
                    System.out.println(num[i]/deno[i]);
                }
                catch (ArithmeticException e){
//                    System.out.println("Divide by zero error occurs");
                    System.out.println(e.getMessage());
                    e.printStackTrace();
                }
                catch(IndexOutOfBoundsException e){
//                    System.out.println("Index out of bound error occurs");
                    System.out.println(e.getMessage());
                    e.printStackTrace();
                }
                finally{
                    System.out.println("Divison of numbers are completed");
                }
            }


    }
}
