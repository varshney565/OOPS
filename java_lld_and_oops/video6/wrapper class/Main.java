/**
 * 
 * wrapper class 
 * |
 * |========> a) autoboxing(Primitive to wrapper class).
 *            b) unboxing(wrapper class to primitive).
 * 
 * 8 primitive types  =>     boolean,byte,short,int,   char,      long,float,double.
 * Wrapper/Reference Type => Boolean,Byte,Short,Integer,Character,Long,Float,Double. 
 * 
 * 
 * Advantages => a) everything in java is pass by value but if we are using wrapper class we can achieve
 *                  pass by reference thing as those objects will be stored in the heap.
 *               b) it we want to use Collections(HashMap,ArrayList,...) we can't use int,float.....,
 *                  we have to use Wrapper class.
 * 
 */

public class Main {
    //autoboxing
    public static void main(String []args) {
        int b = 12;
        Integer a = b;
        System.out.println(a);
        //unboxing
        Integer c = 18;
        int d = c;
        System.out.println(d);
    }
}   
