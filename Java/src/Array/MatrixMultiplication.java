package Array;
import java.util.Scanner;
public class MatrixMultiplication {
    public static void input_array(int[][] arr){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter all elements of matrix: ");
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[0].length;j++){
                arr[i][j]=sc.nextInt();
            }
        }
    }
    public static int[][] matrixMul(int[][] A,int[][]B){
        int[][] res=new int[A.length][B[0].length];
        for(int i=0;i<A.length ;i++){
            for(int j=0;j<B[0].length;j++){
                for(int k=0;k<B.length;k++){
                    res[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
        return res;
    }
    public static void printMatrix(int[][] arr){
        for(int[] val:arr){
            for(int ele: val){
                System.out.print(ele+" ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter no. of rows of first matrix: ");
        int r1=sc.nextInt();
        System.out.print("Enter no. of columns of second matrix: ");
        int c1=sc.nextInt();
        int[][] A=new int[r1][c1];
        input_array(A);
        System.out.println("First Matrix: ");
        printMatrix(A);
        System.out.print("Enter no. of rows of second matrix: ");
        int r2=sc.nextInt();
        System.out.print("Enter no. of columns of second matrix: ");
        int c2=sc.nextInt();
        int[][] B=new int[r2][c2];
        input_array(B);
        System.out.println("Second Matrix: ");
        printMatrix(B);
        if(c1==r2){
            int[][] res=matrixMul(A,B);
            System.out.println("Matrix obtained by multiplying first and second matrix: ");
            printMatrix(res);
        }
        else{
            System.out.println("Matrix multiplication is not compatible");
        }
    }
}
