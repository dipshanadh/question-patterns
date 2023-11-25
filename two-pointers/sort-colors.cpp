#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    void sortColors(vector<int> &nums) {
      int red = 0, white = 0, blue = nums.size() - 1;

      while (blue >= white)
        if (nums[white] == 0)
          swap(nums[white++], nums[red++]);
        else if (nums[white] == 2)
          swap(nums[white], nums[blue--]);
        else 
          ++white;
    }
};