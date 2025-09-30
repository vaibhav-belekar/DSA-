// string in c++

#include<iostream>
#include<string>
using namespace std ;

int main(){
    // string str="vaibhav ";
    // string str2="belekar ";

    // string str3=str+str2;

    // cout<< str3<<endl;
    // cout<<(str<str2)<<endl;
    // cout<<str.length()<<endl;
    // return 0;


// input in string 
    string str;
    getline(cin,str);
    cout<<"output :"<<str<<endl;
   

// loops in strings 
       for(char ch:str){
        cout<<ch<<" ";

       }
       cout<<endl;
 return 0;

}