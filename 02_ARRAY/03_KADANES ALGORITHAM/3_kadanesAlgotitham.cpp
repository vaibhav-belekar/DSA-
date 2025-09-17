// kadanes algoritham is most optimesed algoritham for solve subarray sum 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};

    int curSum=0; // current sum
    int maxSum=INT8_MIN;

    for(int st=0;st<n;st++){
        curSum+=arr[st];
        maxSum=max(curSum,maxSum);
        if(curSum<0){
            curSum=0;
        }
    }
    cout<<" the maximum sum of subarray using kadanes algoritham ="<<maxSum<<endl;
    return 0;
}