#include<stdio.h>
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if (a==0) return b;
    else return a;
}
int main(){
    int a,b;
    printf("Enter the numbers n1 and n2: ");
    scanf("%d %d",&a,&b);
    printf("%d is the GCD of %d and %d",gcd(a,b),a,b);
}