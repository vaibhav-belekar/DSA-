// list containers 

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l;
// for pushing elemet in backside in the list
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    // for pushing elemet in front
    l.push_front(2);
    // for emplace function 
    l.emplace_back(7);

// for poping elemet 
l.pop_back();

// for printing the list 
    for(int val:l){
        cout<<val<<" ";
 
    }

}

