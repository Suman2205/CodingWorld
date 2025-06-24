package Array;
import java.util.Scanner;
public class InputArray {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.print("Enter no. of students: ");
        n=sc.nextInt();
        int[] marks=new int[n];
        System.out.print("Enter marks of the students: ");
        for(int i=0;i<marks.length;i++){
            marks[i]=sc.nextInt();
        }
        System.out.println("Marks of all students: ");
        for(int ele:marks){
            System.out.print(ele+" ");
        }

    }
}
