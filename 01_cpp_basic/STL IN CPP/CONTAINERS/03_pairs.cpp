// pairs conteners
#include<iostream>
#include<vector>
#include<list>
#include<deque>

using namespace std;

int main(){
    pair<int,pair<char,int>>p={1,{'a',2}};

    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;
    return 0;
}