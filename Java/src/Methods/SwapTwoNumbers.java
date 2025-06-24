package Methods;

public class SwapTwoNumbers {
    public static void swap(int a,int b){
        int temp=a;
        a=b;
        b=temp;
    }
    public static void main(String[] args) {
        int a=5;
        int b=6;
        swap(a,b);
        System.out.print("a: "+a+" b: "+b);
    }
}
