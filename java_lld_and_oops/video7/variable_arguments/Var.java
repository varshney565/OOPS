package video7.variable_arguments;

public class Var {
    public static int sum(int ...variable) {
        int op = 0;
        for(int var : variable) {
            op += var;
        }
        return op;
    }
}
