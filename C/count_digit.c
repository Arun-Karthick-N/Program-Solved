#include<stdio.h>
int main(){
    long long int a,r=0,c=0;
    printf("Enter the digit: ");
    scanf("%lld",&a);
    while(a>0){
        a/=10;
        c++;
    }
    printf("Count of the digit is: %lld",c);
    return 0;
}