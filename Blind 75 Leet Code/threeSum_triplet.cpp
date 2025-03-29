// Three sum problem Triplets that is 3 elements of Arrays sum should result to 0

#include<bits/stdc++.h>
using namespace std;

void twoSum2(vector<int>& nums, int i, vector<vector<int>>& result);

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;

    for (int i=0; i<nums.size() && nums[i]<0; i++) {
        if(i == 0 || nums[i] != nums[i-1]) {
            twoSum2(nums, i, result);
        }
    }
    return result;
}

void twoSum2(vector<int>& nums, int i, vector<vector<int>>& result) {
    int left = i + 1;
    int right = nums.size() - 1;
    while (left < right) {
        int sum = nums[i] + nums[left] + nums[right];
        if (sum < 0) {
            left++;
        } else if(sum > 0) {
            right--;
        } else {
            result.push_back({nums[i], nums[left++], nums[right--]});
            while(left<right && nums[left] == nums[left-1]) {
                ++left;
            }
        }
    }
}

int main(){
    vector<int> nums = {-3, -5, 0, 1, -5, 0, 5, 1, 2};
    vector<vector<int>> result = threeSum(nums);
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}