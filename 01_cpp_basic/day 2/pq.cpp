// find charcter is lowercase or uppercase 
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter charchter :";
    cin>>ch;

    if(ch>='a'&& ch<='z'){
        cout<<" charcter in lowercase \n";
    }

    else{
        cout<<"character is uppercase";
    }

    return 0;
}