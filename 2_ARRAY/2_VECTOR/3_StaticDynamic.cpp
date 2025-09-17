#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;

    vec.push_back(0);
    vec.push_back(2);
    vec.push_back(1);

    cout<<"size of vector ="<<vec.size()<<endl;
    cout<<"capacity of vector ="<<vec.capacity()<<endl;

    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    // after pusing some element we further calculate size and capacity of the vector 
    cout<<"size of vector ="<<vec.size()<<endl;
    cout<<"capacity of vector ="<<vec.capacity()<<endl;

    return 0;

}