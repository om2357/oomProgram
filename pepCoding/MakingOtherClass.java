public class MakingOtherClass {
    public static void main(String [] args)
    {
        System.out.println("Welcome to BMW car Factory");
        MakeACar("blue","");
    }
    static void MakeACar(String Color,String Model,String interier_color,String Engine)
    {
        System.out.println("A Car is created with the following Features : \n"+Color+" Color,"+ Model +"Model,"+interier_color+",interor,"+Engine+"engine,thankyou four your order!");
    }
} 
