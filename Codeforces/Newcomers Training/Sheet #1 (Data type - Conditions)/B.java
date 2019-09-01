import java.util.*;
 
public class Main{
    public static void main(String[] args){
        
        
        Scanner in = new Scanner(System.in);
        
        int a = in.nextInt();
        long b = in.nextLong();
        char c = in.next().charAt(0);
        
    
        float f = in.nextFloat();
        
        double d = in.nextDouble();
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(f);
        System.out.printf("%.1f",d);
    }
}
