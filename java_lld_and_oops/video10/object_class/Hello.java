package video10.object_class;

class Super implements Cloneable {
    @Override
    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }

    @Override
    public String toString() {
        return "THIS IS SUPER CLASS !!";
    }
}

public class Hello {
    public static void main(String []args) {
        Object obj = new Super();
        System.out.println(obj.getClass());
        System.out.println(obj.toString());
        System.out.println(obj.hashCode());
        System.out.println(obj);
        try {
            Object obj2 = ((Super)obj).clone();
            System.out.println(obj2);
        } catch (CloneNotSupportedException e) {
            e.printStackTrace();
        }
    }
}
