// search in rotated array 
#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& A, int tar) {
        int st =0,end=A.size()-1;

        while(st <= end){
            int mid =st+(end-st)/2;
            if(A[mid]==tar){
                return mid;
            }

            if(A[st] <= A[mid]){ //left sorted
               if(A[st]<= tar && tar <=A[mid]){
                end=mid-1;
               }else{
                st=mid +1;
               }

            }else{//right sorted
            if(A[mid] <= tar && tar <=A[end]){
                st=mid+1;
            }else{
                end=mid-1;
            }
            }
        }
        return -1;
    }

    int main(){
    vector<int>arr1={3,4,5,6,7,0,1,2};// odd
    int tar1=2;

    cout<<BinarySearch(arr1,tar1)<<endl;

    vector<int>arr2={8,9,0,1,2,3,4,5,6,7};
    int tar2=0;

    cout<<BinarySearch(arr2,tar2)<<endl;

    return 0;
}

