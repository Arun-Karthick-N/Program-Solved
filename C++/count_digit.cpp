#include<iostream>
using namespace std;
int main(){
    long long int a,r=0,c=0;
    cout<<"Enter the digit: ";
    cin>>a;
    while(a>0){
        a/=10;
        c++;
    }
    cout<<"Count of the digit is:"<<c;
    return 0;
}