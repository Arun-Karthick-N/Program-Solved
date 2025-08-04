import java.util.*;
public class rev_num{
    public static void main(String[] args) {
        try(Scanner sc=new Scanner(System.in)){
            System.out.print("Enter the digit: ");
            int a=sc.nextInt(),r=0;
            while(a>0){
                r=r*10+a%10;
                a/=10;
            }
            sc.close();
            System.out.print("Reverse of the number is : "+r);
        }
    }
}