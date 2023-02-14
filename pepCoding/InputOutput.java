import java.util.Scanner;

public class InputOutput {
    public static void main(String[] arg) {
        System.out.println("how to take input in java\n");
        try (Scanner scn = new Scanner(System.in)) {
            int n = scn.nextInt();
            for (int i = 0; i < n; i++)
            {
                System.out.println(i);
            }
        }

    }
}
