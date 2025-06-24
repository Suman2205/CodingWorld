package Array;

public class Two_d_arrayBasics {
    public static void main(String[] args) {
//        int[][] matrix= new int[3][3];
//        matrix[0][0]=1;
//        matrix[0][1]=2;
//        matrix[0][2]=3;
//        matrix[1][0]=4;
//        matrix[1][1]=5;
//        matrix[1][2]=6;
//        matrix[2][0]=7;
//        matrix[2][1]=8;
//        matrix[2][2]=9;
        int[][] matrix={{1,2,3},{4,5,6},{7,8,9}};
        for(int[] val:matrix){
            for(int ele:val){
                System.out.print(ele+" ");
            }
            System.out.println();
        }
        System.out.println();
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
    }
}
