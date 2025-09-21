#include<iostream>
#include<vector>
using namespace std;

//validity checks
bool ispPossible(vector<int> & arr, int n, int m, int maxallowedtime){
    int painters=1, time=0;

    for(int i=0;i<n;i++){
        if(time+arr[i]<=maxallowedtime){
            time+=arr[i];
        }else{
            painters++;
            time=arr[i];

        }
    }

    return painters<=m;
}

int minTimeTopoint(vector<int> &arr,int n, int m){
    int sum=0, maxval=INT16_MIN;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        maxval=max(maxval,arr[i]);
    }
    int st=maxval,end=sum, ans=-1;
    
    while(st<=end){
        int mid=st+(end-st)/2;

        if(ispPossible(arr,n,m,mid)){//left
            ans=mid;
            end=mid-1;

        }else{
            st=mid+1;
        }
    }
    return ans;

}

int main(){
    vector<int>arr={40,30,10,20};
    int n=4,m=2;

    cout<<minTimeTopoint(arr,n,m)<<endl;
    return 0;
}