// Coin Change minimal number of coins needed for the given amount

#include<bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    vector<int> amt(amount+1,amount+1);

    amt[0] = 0;
    for (int i=1; i<=amount; i++){
        for(int j=0; j<coins.size(); j++) {
            if (i >= coins[j]) {
                amt[i] = min(amt[i], 1+amt[i-coins[j]]);
            }
        }
    }
    if(amt[amount] < amount+1) {
        return amt[amount];
    }
    return -1;
}

int main() {
    int amount = 8;
    vector<int> coins = {1, 3, 5, 6};
    cout<<coinChange(coins, amount)<<endl;
    return 0;
}