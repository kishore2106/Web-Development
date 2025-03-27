// // Maximum Product of Sub Array

#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums){
    if(nums.size() == 0) return 0;
    int max_pro = nums[0], min_pro = nums[0], result = max_pro;
    for(int i=1; i<nums.size(); i++) {
        int cur = nums[i];
        int temp = max(cur, max(cur * min_pro, cur * max_pro));
        min_pro = min(cur, min(cur * min_pro, cur * max_pro));
        max_pro = temp;
        result = max(result, max_pro);
    }
    return result;
}

int main(){
    vector<int> nums = {5, 3, -3, 6, 7};
    int result = maxProductSubArray(nums);
    cout << "Maximum Product of Sub Array is " << result << endl;
    return 0;
}
