public class TwoDArrayFirstLec {
    /**
     * @param args
     */
    public static void main(String[] args)
    {
        System.out.println("Your 2D array is Here");
       // -------- self created ------------
       // int arr[][] = new int[3][2];
        // System.out.println(arr[2][1]);
    // ------------1st home work --------------------
        // int arr[][]=new int[4][5];
        // for(int i=0;i<5;i++)
        // {
        //     arr[i][0]=2;
        // }
        // System.out.print(arr[3][0]);
    
    // -----------2nd home work------------------

    int arr[][]=new int[4][5];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        arr[i][j]=i*j;
    }
    System.out.print(arr[3][4]);

    }
}
