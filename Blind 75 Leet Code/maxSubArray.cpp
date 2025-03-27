// Maximum SubArray

#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int>& nums) {
    int curSum = 0;
    int maxSum = nums[0];

    for(int i=0; i<nums.size(); i++){
        if(curSum < 0) {
            curSum = 0;
        }
        curSum += nums[i];
        maxSum = max(maxSum, curSum);
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-3, -2, 5, 6, 8, -2, 1};
    int result = maxSubArraySum(nums);
    cout<<"Maximum Sum of Sub Array: "<<result<<endl;

    return 0;
}
