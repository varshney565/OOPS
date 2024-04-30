package video10.static_nested_class;

public class abc {
    int a = 2;
    static int b = 3;

    protected static class NestedClass {
        public void print() {
            System.out.println("b : " + b);
        }
    }

    // public void print() {
    //     NestedClass n = new NestedClass();
    //     n.print();
    // }
}
