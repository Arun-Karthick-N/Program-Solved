#include<iostream>
using namespace std;
int main(){
    long long int a,r=0,temp=0;
    cout<<"Enter the digit: ";
    cin>>a;
    temp=a;
    while(a>0){
        r=r*10+a%10;
        a/=10;
    }
    if(temp==r) cout<<"Palindrome";
    else cout<<"Not Palindrome";
    return 0;
}