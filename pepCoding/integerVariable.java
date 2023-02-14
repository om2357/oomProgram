public class integerVariable {
    public static void main(String[] args) {
        int x = 15;
        int y = 10;
        int sum = x + y;
        System.out.println("Sum of " + x + " and " + y + " is : " + sum);
        int multi = x * y;
        System.out.println("product of " + x + " and " + y + " is " + multi);
        double divide = x / y;
        float divide2 = y / x;
        int divide3 = x % y;
        System.out.println("your answer of x/y is " + divide);
        System.out.println("your answer of y/x is " + divide2);
        System.out.println("your answer of x/y is " + divide3);
        int exp = (x * y) / (y + x);
        System.out.println(exp);

    }

}
