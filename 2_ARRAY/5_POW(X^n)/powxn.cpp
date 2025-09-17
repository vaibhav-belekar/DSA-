#include<iostream>
using namespace std ;

double my_pow(double x,int n){
    if(n==0) return 1.0;
    if(x==0)return 0.0;
    if(x==1)return 1.0;
    if(x==-1&&n%2==0)return 1.0;
    if(x==-1&&n%2!=0)return 1.0;

    long binform=n;
    if(n<0){
        x=1/x;
        binform=-binform;
    }

    double ans=1;
    while (binform>0){
        if(binform%2==1){
            ans*=x;
        }
        x*=x;
        binform/=2;
    }

    return ans;
}


int main(){
    double x=2;
    int n=2;

    cout<<"here is pow x^n ="<<my_pow(x,n)<<endl;
    return 0;
}