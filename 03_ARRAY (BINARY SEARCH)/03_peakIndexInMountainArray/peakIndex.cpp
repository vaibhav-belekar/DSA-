//  leetcode -852. Peak Index in a Mountain Array
#include<iostream>
#include<vector>
using namespace std ;

int peakelementInarray(vector<int>&A){
    int st=1,end=A.size()-1;

    while(st<=end){
        int mid=st+(end-st)/2;
        if(A[mid-1]<A[mid] && A[mid]>A[mid+1]){
            return mid;
        }
        
        else if (A[mid-1]<A[mid]){//right search
                st=mid+1;    
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int>A={1,2,3,4,5,3,2,1};
    cout<<peakelementInarray(A)<<endl;
    return 0;


}