// deque : Double ended Queue
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;
    // for pushing elemet in backside in the deque
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    // for pushing elemet in front
    d.push_front(2);
    // for emplace function 
    d.emplace_back(7);

// for poping elemet 
d.pop_back();

// for printing the deque 
    for(int val:d){
        cout<<val<<" ";
 
    }

}