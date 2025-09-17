#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};

    int maxSum = INT16_MIN;

    for(int st=0;st<n;st++){
         int Csum=0; // current sum 
        for(int end=st;end<n;end++){
            Csum += arr[end];
            maxSum=max(Csum,maxSum);

        }
    }
    cout<<" max subarray sum="<<maxSum<<endl;
    return 0;
}

