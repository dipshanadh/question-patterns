#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int minSubArrayLen(int target, vector<int> &nums) {
      size_t start = 0, ans = SIZE_MAX, n = nums.size();

      int sum = 0;

      for (size_t end = 0; end < n; ++end) {
        sum += nums[end];

        while (sum >= target) {
          ans = min(ans, end - start + 1);
          sum -= nums[start++];
        }
      }

      return ans == SIZE_MAX ? 0 : ans;
    }
};