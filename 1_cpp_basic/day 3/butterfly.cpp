#include<iostream>
using namespace std;

int main(){
    int n=10;
    for(int i=0;i<n;i++){
        //star
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        //for space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //for space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        //for star
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //for spaces 
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //for spaces 
        for(int j=1;j<=i;j++){
            cout<<" ";

        } //for star
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;


}