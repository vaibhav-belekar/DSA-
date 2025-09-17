#include<iostream>
using namespace std;

int main (){
    int a, b ;
    cout<< " enter a :";
    cin>>a;

    cout<<"enter b :";
    cin>>b;

    int sum = a+b;
    int sub= a-b;
    int div= a/b;
    int mod= a%b;
    int mul=a*b;

    cout<<"the sum is:"<<sum<<endl;
    cout<<"the substraction is: "<< sub<<endl;
    cout<<"the division is :"<< div<<endl;
    cout<<"the modulo is :"<< mod<< endl;
    cout<<"the multipliction is :"<< mul<<endl;

    return 0;

}