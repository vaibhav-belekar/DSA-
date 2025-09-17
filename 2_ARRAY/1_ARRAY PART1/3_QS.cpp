#include<iostream>
using namespace std;

int main(){
    int nums[]={12,22,4,35,3,40};
    int size=6;
   
    int smallest=INT_FAST8_MAX;
    int largest=INT_FAST8_MIN;

    for(int i=0;i<size;i++){
       smallest=min(nums[i],smallest);
       largest=max(nums[i],largest);
    }
    cout<<"smallest ="<<smallest<<endl;
    cout<<"largest ="<<largest<<endl;
    
    return 0;
}