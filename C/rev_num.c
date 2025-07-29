#include<stdio.h>
int main(){
    long long int a,r=0;
    printf("Enter the digit: ");
    scanf("%lld",&a);
    while(a>0){
        r=(r*10)+a%10;
        a/=10;
    }
    printf("Reverse of the digit is: %lld",r);
    return 0;
}