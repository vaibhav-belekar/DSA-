// check if a number is prime or not 
#include<iostream>
using namespace std ;

int main(){
    int n=7;
    bool isprime=true;

    for(int i=2; i<=n-1;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime==true){
        cout<<" the number is prime \n";

    }
    else{
        cout<<" the number is not prime \n";
    }
}