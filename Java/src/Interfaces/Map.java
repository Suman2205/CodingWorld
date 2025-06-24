package Interfaces;

import java.util.HashMap;


public class Map {
    public static class ABC{
        int i=5;
        ABC(int i){
            System.out.println(this.i);
            this.i=i;

            System.out.println(this.i);
        }
    }
    public static void main(String[] args) {
        HashMap<String,Integer>hm=new HashMap<String,Integer>();
        hm.put("ABC",123);
        hm.put("DEF",456);
        hm.put("GHI",789);
        System.out.println(hm);
        for(String name:hm.keySet()){
            System.out.println(hm.get(name));
        }
        for(HashMap.Entry<String,Integer>m:hm.entrySet()){
            System.out.println(m.getKey()+"'s roll no. is "+m.getValue());
        }
        ABC obj=new ABC(7);
    }
}
