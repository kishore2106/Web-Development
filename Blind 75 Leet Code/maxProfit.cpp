// Best Time to Bug and Sell Stocks
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int min = prices[0];
    int profit = 0;

    for(int i=0; i<prices.size(); i++){
        if(prices[i] < min) {
            min = prices[i];
        }
        profit = max(profit, prices[i] - min);
    }
    return profit;
}


int main() {
    int n;
    vector<int> prices(n);
    cout << "Enter the number of days: ";
    cin >> n;
    for (int i=0; i<n; i++) cin >> prices[i];

    int result = maxProfit(prices);
    cout<<"Maximum Profit: "<<result;
    return 0;
}