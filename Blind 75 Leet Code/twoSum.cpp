#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;

    for (int i=0; i<nums.size(); i++) {
        int diff = target - nums[i];

        if (map.find(diff) != map.end()) {
            return {map[diff], i};
        }
        map[nums[i]] = i;
    }
    return {};  
}

int main() {
    int n, target;
    cin>>n>>target;
    vector<int> nums(n);

    for (int i=0; i<n; i++) cin>>nums[i];

    vector<int> result = twoSum(nums, target);
    if (!result.empty()){
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No Solution found!\n";
    }

    return 0;
}