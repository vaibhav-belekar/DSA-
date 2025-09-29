// map in c++ ( key values)

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    map<string,int>m;
    m["tv"]=100;
    m["watch"]=120;
    m["mobile"]=56;
    m["tablet"]=88;
    m.insert({"camera",24});
    m.emplace("apple",55);
// multimap 
    multimap<string,int>ml;
    m.emplace("apple",50);

// unoredrd map
   unordered_map<string,int> uop;    
   uop.emplace("map"100)


    for (auto p:m){
        cout<<p.first<<" "<<p.second<<" "<<endl;

    }
    cout<<"count ="<<m.count("watch"); 
    return 0;
}