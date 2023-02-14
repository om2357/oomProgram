import java.util.Scanner;

public class ArrayInJava{
    public static void main(String args[]){
        //collection for similar type of data type
        /*1*/ int[] roll = new int[10];
        /*2nd*/int[] roll2 ={22,22,32,42};
        int[] row; // declaratiom of array is here 

        row = new int[12];//memory allocation is here and object is created in heap

        //we need to mention the size of array other wise its throws an error

        // in java array are not alocated continusly it's all depends on JVM 
        // array are allocated in heap, in java
        // and heap objects are not continuos

        // new is used to created an object in heap
        
        System.out.println(roll2[2]); 

        String[] arr = {"hello","hiii"};
        System.out.println(arr[1]);

        try (Scanner sc = new Scanner(System.in)) {
            int hello = sc.nextInt();
            System.out.println(hello);
            System.out.println("enter your array value/n");

            for(int i = 0; i <roll.length; i++)
            {
                roll[i] = sc.nextInt();
            }
        }
        System.out.println("Your Roll number is :-");
        for(int i= 0; i<roll.length; i++)
        {
            System.out.print(roll[i]+" ");
        }
    }    
}
