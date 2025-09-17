// majority element using slightly optimize approach---> sorting
 
 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int majorityElement(vector<int>nums){
    int n=nums.size();

    // sorting 
    sort(nums.begin(),nums.end());

    //frequency
    int freq=1, ans=nums[0];
    for(int i =1;i<n;i++){
        if( nums[i]==nums[i-1]){
            freq++;
        }else{
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2){
            return ans ;
        }
        
    }
return ans;
}

int main(){
    vector<int>nums={2,2,1,1,1,2,2};

    cout<< "majority element using 'SLIGHTLY OPTIMIZE USING SORTING'  force approach "<<majorityElement(nums)<<endl;
    return 0;
    
}