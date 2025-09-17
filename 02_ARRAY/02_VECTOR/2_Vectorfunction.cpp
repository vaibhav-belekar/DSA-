#include<iostream>
#include<vector>
using namespace std ;

int main(){
    vector<int>vec={1,2,3,4,5};
   // for size
    cout<<"size="<<vec.size()<<endl;

   // for pushing element in back of vector 
    vec.push_back(25);
    cout<<"after pushback size="<<vec.size()<<endl;

    // for pop back last element delete 
    vec.pop_back();
    cout<<"after popback size="<<vec.size()<<endl;

    // for printing first value 
    cout<<"this is a front function="<<vec.front()<<endl;

    // for printing last value of vector 
    cout<<"for printing last value of vector ="<<vec.back()<<endl;

    // foe accesing value of index value we used at function 
    cout<<"using at function ="<<vec.at(1)<<endl;

 

    return 0;
}