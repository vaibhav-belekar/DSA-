#include<iostream>
using namespace std;

int main(){
     int marks;
     cout<<"enter the marks :";
     cin>>marks;

     if(marks>=90){
        cout<<"grade A \n";

     }
    else if (marks>=80 && marks<=90){
        cout<<"grade B \n";
    }

    else if ( marks>=40 && marks<=80){
        cout<<" grade c \n";
    }

    else{
        cout<<" fail \n";
    }
}