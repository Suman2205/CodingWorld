package ExceptionHandling;

public class Mutlicatch {
    public static void main(String[] args) {
        int x,y,z;
        y=15;
        z=0;
        int []A=new int[10];
        try{
            x=y/z;
//            throw new RuntimeException();
////            System.out.println(x);
////            int a=A[10];
        }
        catch (ArithmeticException e){
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
        catch (IndexOutOfBoundsException e){
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
        /* More java statements
           hello world
         */
    }
}
