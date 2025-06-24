package FileHandling;

import java.io.BufferedWriter;
import java.io.*;
//import java.io.FileWriter;
//import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.util.Scanner;

public class file {
    public static void main(String[] args)throws ClassNotFoundException {
        Scanner sc=new Scanner(System.in);
        File f1=new File("C:\\Users\\suman\\OneDrive\\Desktop\\coding\\example");
        System.out.println("Enter the data which you want to write in a file "+f1.getName());
        try{
            if(f1.canWrite()){
                FileWriter writer=new FileWriter("example.txt");
                while(true){
                    String str=sc.nextLine();
                    if(str.equalsIgnoreCase("stop")){
                        break;
                    }
                    writer.write(str+"\n");
                }
                writer.close();
            }
            else{
                System.out.println("File is not writeable");
            }
            if(f1.canRead()){
                FileReader fr=new FileReader("example.txt");
                int c;
                while((c=fr.read())!=-1){
                    System.out.print((char)c);
                }
                fr.close();
            }
        } catch (IOException e) {
            System.out.println(e.getMessage());
            e.printStackTrace();
        }


    }
}
