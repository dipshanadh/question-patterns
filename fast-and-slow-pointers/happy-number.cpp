#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    bool isHappy(int n) {
      if (n == 1)
        return true;

      int slow = n, fast = squaredDigitsSum(n);

      while (fast != slow) {
        if (fast == 1)
          return true;

        slow = squaredDigitsSum(slow);
        fast = squaredDigitsSum(
          squaredDigitsSum(fast)
        );
      }

      return false;
    }

  private:
    int squaredDigitsSum(int n) {
      int sum = 0;

      while(n > 0) {
        int dig = n % 10;
        sum += (dig * dig);
        n /= 10;
      }

      return sum;
    }
};