#include<stdio.h>
int main(){
    long long int a,r=0,temp;
    printf("Enter the digit: ");
    scanf("%lld",&a);
    temp=a;
    while(a>0){
        r=(r*10)+a%10;
        a/=10;
    }
    if (temp==r) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}