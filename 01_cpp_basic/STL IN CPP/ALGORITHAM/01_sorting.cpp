#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// custom compartor
bool compartor(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second)return true;
    if(p1.second<p2.second)return false;

    if(p1.first<p2.first) return true;
    else return false;
}

int main(){
    int arr[5]={3,5,1,8,2};
    sort(arr,arr+5);
    sort(arr,arr+5,greater<int>()); // for decending sorting

    for(int val:arr){
        cout<<val<<" ";

    };

    vector<pair<int,int>> vec={{1,2},{2,3},{4,5},{6,7}};

    sort(vec.begin(),vec.end() ,compartor);// call custom compartor  

    for(auto p:vec){
        cout<<" first elemet:"<<p.first<<" "<< " second element :"<<p.second<<endl;
    };

    // revrse
    string s= "abcdef";
    next_permutation(s.begin(),s.end());
    cout<< s<< endl;

    // min max
    cout<<max(4,5)<<" "<<endl;
    cout<<min(6,2)<<" "<<endl;




    cout<<endl;
    return 0;
}