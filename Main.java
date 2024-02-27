import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        System.out.println("Hello world.!");
        Scanner scan = new Scanner(System.in);
        int a;
        a = scan.nextInt();

        System.out.println("This is the integer which was inputed:"+a);
        scan.close();
    }

}