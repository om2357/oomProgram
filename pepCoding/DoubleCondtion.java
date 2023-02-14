public class DoubleCondtion {

    public static void main(String[] args)
    {
        int x1 =333;
        int x2 =11;

        if(x1 == x2)
        {
            System.out.println(x1+" is equal to "+x2);
        }
        else 
        {
            if(x1>x2)
            {
                System.out.println(x1+ " greater then "+x2);
            }
            else 
            {
                System.out.println(x2+ " greater then "+x1);
            }
        }
    }

}
