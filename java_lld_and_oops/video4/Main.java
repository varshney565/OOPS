public class Main {
    public static void main(String[] args) {
        Hello a = new Hello();
        a.demo();
    }
}


class Hello {
    byte memberVariable;
    public void demo() {
        double localVariable = 923456789123456789l;
        System.out.println(memberVariable);
        System.out.println(localVariable);
    }
}