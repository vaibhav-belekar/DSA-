// using dutch national flag algorithm leetcode -75
#include<iostream>
#include<vector>
using namespace std ;

void sortColors(vector<int>& nums) {
        int n=nums.size();
        int mid=0,low=0,high=n-1;

        while(mid<=high){
            if(nums[mid]==0){
              swap(nums[low],nums[mid]);
              mid++;
              low++;
            }
            else if(nums[mid]==1){
                mid++;

            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
        
        }
        
    }

int main(){
    vector<int> nums={1,2,1,1,0,0,2,1};
    sortColors(nums);

    // print sorted array
    for(int x : nums){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}