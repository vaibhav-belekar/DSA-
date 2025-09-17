#include<iostream>
using namespace std;

int main(){

    // triangle pattern ----> 

 int n=6;
 for(int i=0;i<n;i++){
    for(int j=0;j<i+1; j++){
        cout<<"* ";
    }
    cout<<endl;
 }
    // triangle pattern for numbe--->

    int m=6;
    for(int i=0;i<m;i++){
        for(int j=0; j<i+1;j++){
            cout<<(i+1)<<" ";
        }
        cout<<endl;
    }

    // homework problem for charachter

    int p=6;
    char ch='A';
    for(int i=0;i<p;i++){
        for(int j=0; j<i+1;j++){
            cout<<ch <<" ";
            }   

        ch=ch+1;
        cout<<endl;
    }

    // revrsed triangle pattern --->
    int q=4;
    for(int i=0;i<q;i++){
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // reversed triangle pattern for charchter--->

    int r=4;
    char chr='A';

    for(int i=0; i<r;i++){
        
        for (int j=i+1;j>0;j--){
            chr=chr+1;
            cout<< chr;
           
        }
        
        cout<<endl;
    }
     return 0;
}