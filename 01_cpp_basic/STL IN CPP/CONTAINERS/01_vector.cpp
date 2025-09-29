// 1st containers 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;

    //function ~ 1> size and capacity
    cout<<vec.size();

    // 2> push_back & pop_back
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    // vec.pop_back();

    //3) emplaceback
    vec.emplace_back(1);

    //4) at() or []
    cout<<"accesing elemet from vector :"<<vec.at(2)<<endl;;
    cout<<"accesing elemet from vector using [] :"<<vec[2]<<endl;;

    // `5) front & back
     cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;

    for(int val:vec){
        cout<<val<<" " ;
       
    }
    cout<<endl;


    // vector costly function time complexity O(n)
    vec.erase(vec.begin());           // for delete index 
    vec.insert(vec.begin()+2,100);   // for adding new value in vector anywhere in vector 
    // vec.clear()                 // for clearing the vector 
    vec.empty() ;                  // for cheack vector is empty or not 

 vector<int>example={1,2,3,4,5};

 vector<int>::iterator it;
 for(it=example.begin();it!=example.end();it++){
    cout<<*(it)<<" ";
 }
 cout<<endl;
 return 0;
}