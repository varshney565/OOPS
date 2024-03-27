public class Main {
    public static void main(String []args) {
        Person softwareEngineer = new Engineer();   
        System.out.println(softwareEngineer.profession());
        Person physicsTeahcer = new Teacher();
        System.out.println(physicsTeahcer.profession()); 
    }
}
