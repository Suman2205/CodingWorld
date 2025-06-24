package Array;
import java.util.Scanner;
public class InputTwoDarray {
    public static void input_array(int[][] arr){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter no. of rows of matrix: ");
        int r=sc.nextInt();
        System.out.print("Enter no. of columns of matrix: ");
        int c=sc.nextInt();
        System.out.println("Enter all elements of matrix: ");
        arr=new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=sc.nextInt();
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter no. of rows of matrix: ");
        int r=sc.nextInt();
        System.out.print("Enter no. of columns of matrix: ");
        int c=sc.nextInt();
        System.out.println("Enter all elements of matrix: ");
        int[][] matrix=new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                matrix[i][j]=sc.nextInt();
            }
        }
        System.out.println("Elements of the matrix: ");
        for(int[] val: matrix){
            for(int ele:val){
                System.out.print(ele+" ");
            }
            System.out.println();
        }
//        int[][] arr=matrix.clone();   for copying array(deep copy) alag array banega means agr hum second array me kuch change karenge toh first array me koi change nhi aayega
    }
}
