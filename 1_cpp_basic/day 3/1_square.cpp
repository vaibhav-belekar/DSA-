#include<iostream>
using namespace std;

// for numbers ----> 
 int main(){
    int n =4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

 //for * pattern ---> 
    int m=4;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    

    // for charachter ABC--->
    int q=4;
    for(int i=0;i<q;i++){
        char ch ='A';
        for(int j=0; j<q;j++){
            cout<<ch;
            ch = ch + 1;
        }
        cout<<endl;
    }
// PRINTING SQURE PATTERN WITH CONTINUE NUMBER ----> ??
    int r=5;
    int num=1;
    for(int i=0;i<r; i++){
        for(int j=0; j<r; j++){
            cout<<num<< " ";
            num=num+1;
        }
        cout<< endl;
    }
    return 0;
    
 }


 

 