package Array;

public class ArrayBasic {
    public static void main(String[] args) {
//        int[] ages=new int[5];
//        ages[0]=15;
//        ages[1]=16;
//        ages[2]=17;
//        ages[3]=18;
//        ages[4]=19;
        int[] ages={15,16,17,18,19,20,21};
        for(int val:ages){
            System.out.print(val+" ");
        }
        System.out.println();
        for(int i=0;i<ages.length;i++){
            System.out.print(ages[i]+" ");
        }
        System.out.println();
        int i=0;
        while(i<ages.length){
            System.out.print(ages[i]+" ");
            i++;
        }
    }
}
