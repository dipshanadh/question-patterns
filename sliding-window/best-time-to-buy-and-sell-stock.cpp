#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int maxProfit(vector<int> &prices) {
      int buy = 0, maxProf= 0, size = prices.size();

      for (int sell = 0; sell < size; ++sell)
        if (prices[sell] > prices[buy])
          maxProf= max(maxProf, prices[sell] - prices[buy]);
        else
          buy = sell;
    
      return maxProf;
    }
};