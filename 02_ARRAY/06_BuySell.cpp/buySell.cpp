#include<iostream>
#include<algorithm> 
using namespace std ;

int maxProfit(int arr[],int n){
    int maxProfit=0;
    int bestBuy=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>bestBuy){
            maxProfit=max(maxProfit,arr[i]-bestBuy);
        }
        bestBuy=min(arr[i],bestBuy);
    }

   return maxProfit;
}

int main(){
     int arr[]={7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<" maxProfit is "<<maxProfit(arr,n)<<endl;
    return 0;
}