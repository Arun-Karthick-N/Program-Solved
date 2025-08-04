#include<iostream>
using namespace std;
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
    cout<<"Enter the numbers n1 and n2: ";
    cin>>a>>b;
    cout<<gcd(a,b)<<" is the GCD of "<<a<<"and "<<b;
}