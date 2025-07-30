import java.util.*;
public class palindrome{
    public static void main(String[] args) {
        System.out.print("Enter the digit: ");
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt(),r=0,temp=0;
        temp=a;
        while(a>0){
            r=r*10+a%10;
            a/=10;
        }
        if(temp==r) System.out.print("Palindrome");
        else System.out.print("Not Palindrome");
    }
}