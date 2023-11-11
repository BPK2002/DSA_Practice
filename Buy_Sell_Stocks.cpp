#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
  if (prices.empty()) {
    return 0;
  }

  int min_price = prices[0];
  int max_profit = 0;

  for (int i = 1; i < prices.size(); ++i) {
    min_price = min(min_price, prices[i]);
    max_profit = max(max_profit, prices[i] - min_price);
  }

  return max_profit;
}

int main(){
  vector<int> prices = {3,7,2,3,4,9,11,6,1};
  cout<<"The Maximum Profit that you can get is: "<<maxProfit(prices)<<endl;
  return 0;
}
