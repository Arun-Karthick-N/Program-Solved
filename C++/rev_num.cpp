#include<iostream>
using namespace std;
int main(){
    long long int a,r=0;
    cout<<"Enter the digit: ";
    cin>>a;
    while(a>0){
        r=r*10+a%10;
        a/=10;
    }
    cout<<"Count of the digit is:"<<r;
    return 0;
}