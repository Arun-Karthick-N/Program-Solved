import java.util.*;
public class gcd{
    int gc(int a, int b){
        while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if (a==0) return b;
    else return a;
    }
    public static void main(String[] args) {
        try(Scanner sc=new Scanner(System.in)){    
            System.out.print("Enter the numbers n1 and n2: ");
            int a=sc.nextInt();
            int b=sc.nextInt();
            gcd gc = new gcd();
            System.out.println(gc.gc(a,b)+" is the GCD of "+a+" and "+b);
            sc.close();
        }
    }
}