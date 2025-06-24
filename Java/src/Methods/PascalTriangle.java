package Methods;
import java.util.Scanner;
public class PascalTriangle {
    public static int fact(int n){
        int res=1;
        for(int i=1;i<=n;i++){
            res*=i;
        }
        return res;
    }
    public static int comb(int i, int j){
        return fact(i)/(fact(j)*fact(i-j));
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.print("Enter no. of rows of pascal triangle you want to print: ");
        n= sc.nextInt();
        for(int i=0;i<n;i++){
            for(int s=0;s<n-i-1;s++){
                System.out.print("  ");
            }
            for(int j=0;j<i+1;j++){
                System.out.print(comb(i,j)+"   ");
            }
            System.out.println();
        }
    }
}
