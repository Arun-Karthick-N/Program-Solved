import java.util.*;
public class gcd{
    int gcd(int a, int b){
        while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if (a==0) return b;
    else return a;
    }
    public static void main(String[] args) {
        System.out.print("Enter the numbers n1 and n2: ");
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        gcd gcd = new gcd();
        System.out.println(gcd.gcd(a,b)+" is the GCD of "+a+" and "+b);
    }

}