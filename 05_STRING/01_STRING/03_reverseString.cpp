// reverse string in c++
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str="vaibhav belekar";

    // we have to revert that string so i used STL reverse function 
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}