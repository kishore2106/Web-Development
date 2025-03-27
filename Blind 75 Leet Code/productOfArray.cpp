// Product of Array Except itself

#include<bits/stdc++.h>
using namespace std;

vector<int> productOfArray(vector<int>& nums) {
    vector<int> result(nums.size(), 1);

    int pre = 1, post = 1;

    for(int i=0; i<nums.size(); i++) {
        result[i] = pre;
        pre = nums[i] * pre;
    }

    for(int i=nums.size() - 1; i>=0; i--) {
        result[i] = result[i] * post;
        post = nums[i] * post;
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productOfArray(nums);
    for (int i=0; i<result.size(); i++) {
        cout<<result[i]<<" ";
    }

    return 0;
}