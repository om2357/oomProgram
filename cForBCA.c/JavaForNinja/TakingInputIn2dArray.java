import java.util.Scanner;

import javax.annotation.processing.SupportedOptions;

public class TakingInputIn2dArray {
    public static void main(String[] args)
    {
        System.out.println("Enter the number of row");
        Scanner s = new Scanner(System.in);
        int row = s.nextInt();
        System.out.println("Enter the column");
        int col = s.nextInt();
        int arr[][] = new int[row][col];
        for(int i = 0; i<row;i++)
        {
            for(int j = 0;j<col;j++)
            {
                System.out.println("Enter the element at " + i +" row " + j + " column ");
                arr[i][j] = s.nextInt();
            }
        }

        for(int i = 0;i<row; i++)
        {
            for(int j = 0; j<col; j++)
            {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
