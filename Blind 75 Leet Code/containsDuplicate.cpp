// Contains Duplicate or not in the Array

#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> visited;

    for(int i=0; i<nums.size(); i++){
        if(visited.find(nums[i]) != visited.end()) {
            return true;
        } else {
            visited.insert(nums[i]);
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1,2,3,1,2,3,4,5,6};
    cout << containsDuplicate(nums) << endl;
    return 0;
}