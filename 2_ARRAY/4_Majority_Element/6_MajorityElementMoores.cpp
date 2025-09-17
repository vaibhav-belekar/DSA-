// majority element using moores algoritham ----> 
#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>nums){
    int freq=0,ans=0 ,n=nums.size();
    for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans=nums[i];

        }
        
        if(ans==nums[i]){
            freq++;
        }else{
            freq--;
        }
    }

    // this is additional if we dont know about majority element is present or not ;
    int count=0;
    for(int val:nums){
        if(val==ans){
            count++;
        }
    }
    if(count>n/2){
        
      return ans;
    }
    return -1;
}


int main(){
    vector<int>nums={1,1,2,2,1,2,1,1};

    cout<<" This is optimal and best solution for MAJORITY ELEMENT"<<endl;
    cout<<" Using MOORES Algorithm the majority element is "<<majorityElement(nums)<<endl;
    return 0;

}