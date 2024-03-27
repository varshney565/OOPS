public class Main {
    public static void main(String []args) {
        String s1 = "hello";
        String s2 = "hello";
        String s3 = new String("hello");
        //s1.equals() checks the content
        //s1 == s2 checks the memory whether pointing the same memory or not
        if(s1 == s3) {
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }
    }
}
