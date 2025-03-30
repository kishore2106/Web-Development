// climbing stairs with one step or 2 step at a time find the number of distinct way to reach the top
// Dynamic Approach

#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    if (n == 1) return 1;

    int one = 1;
    int two = 2;
    for(int i=3; i<=n; i++) {
        int total = one + two;
        one = two;
        two = total;
    }
    return two;
}

int main() {
    cout<<climbStairs(5)<<endl;
    return 0;
}