package video7.Static;

public class C extends P {
    //we can't override static methods in java.
    //now we can't use staticFunction() of P,it is method hiding.
    public static void staticFunction() {
        System.out.println("Child class !!");
    }
}