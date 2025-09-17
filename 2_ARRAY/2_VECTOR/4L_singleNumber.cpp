// leet code problem number 136
#include <iostream>
#include <vector>
using namespace std;

//leetcode 
class Solution {
public:
    int singleNumber(vector<int> nums) {
        int ans = 0;
        for (int val : nums) {
            ans = ans ^ val;
        }
        return ans;
    }
};
// leetcode ^

// our normal code to verify its proper working or not :------>

int main() {
    Solution obj;
    vector<int> nums = {2, 3, 2, 4, 4};
    cout << "The single number is: " << obj.singleNumber(nums) << endl;
    return 0;
}
