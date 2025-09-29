// stack LIFO data struture

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;

    s.push(2);
    s.push(4);
    s.push(5);
    s.push(3);

    cout<<s.size()<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
        
    }
    
}
