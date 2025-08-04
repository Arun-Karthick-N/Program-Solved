import java.util.*;
public class count_digit{
    public static void main(String[] args) {
        try(Scanner sc=new Scanner(System.in)){
            System.out.print("Enter the digit: ");
            int a=sc.nextInt(),c=0;
            while(a>0){
                a/=10;
                c++;
            }
            System.out.print("Count: "+c);
            sc.close();
        }
    }
}