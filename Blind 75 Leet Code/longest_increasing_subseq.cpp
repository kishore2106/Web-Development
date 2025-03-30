// Longest Increasing Subsequence Problem

// Optimal Approach with Time: O(n log n)

#include <bits/stdc++.h>
using namespace std;

int lis(vector<int>& nums) {
    vector<int> sub; // This stores the increasing subsequence
    
    for (int num : nums) {
        auto it = lower_bound(sub.begin(), sub.end(), num); // Binary search
        
        if (it == sub.end()) {
            sub.push_back(num); // Extend the subsequence
        } else {
            *it = num; // Replace with a smaller value
        }
    }

    return sub.size(); // Length of the longest increasing subsequence
}

int main() {
    vector<int> nums = {10, 7, 8, 5, 16, 27, 9};
    cout << lis(nums) << endl;  // Output: 3 (Example: {7, 16, 27})
    return 0;
}

// // Time: O(n^2) there is a better approach which can be done in O(n log n) using binary search
// #include<bits/stdc++.h>
// using namespace std;

// int lis(vector<int> &nums) {
//     vector<int> lis(nums.size(), 1);
//     int max_sub = 1;

//     for(int i=1; i<nums.size(); i++){
//         for(int j=0; j<i; j++){
//             if(nums[i] > nums[j]){
//                 lis[i] = max(lis[i], lis[j]+1); // recursive relation
//                 max_sub = max(max_sub, lis[i]);
//             }
//         }
//     }
//     return max_sub;
// }

// int main() {
//     vector<int> nums = {10, 7, 8, 5, 16, 27, 9};
//     cout<<lis(nums)<<endl;
//     return 0;
// }