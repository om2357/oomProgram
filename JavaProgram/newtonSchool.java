import java.util.Scanner;

class newtonSchool
{
       public static void main(String[] args) //throws java.lang.Exception
     {
        try (var om = new Scanner(System.in)) {
          int s = om.nextInt();
          System.out.println("hello");
          System.out.println("the user entered number is " + s);
        }
    }

}