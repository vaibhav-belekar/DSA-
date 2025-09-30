#include<iostream>
using namespace std;

int main(){
    char str[]="hello";// string literals 

    cout<<str[4]<<endl;// constant pointers 
    
    char arr[14];
    cout<<"enter char array :";
    cin.getline(arr,100);// cin function for input and output 

    for(char ch:arr){
        cout<<ch<<" ";
    }
cout<<endl;

    return 0;
} 