#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    bool validPalindrome(string &s) {
      int low = 0, high = s.size() - 1;

      while (high > low) {
        if (s[low] != s[high])
          return isPalindrome(s, low + 1, high) || isPalindrome(s, low, high - 1);

        ++low;
        --high;
      }

      return true;
    }

  private:
    bool isPalindrome(string &s, int start, int end) {
      while (end > start)
        if (s[start++] != s[end--])
          return false;

      return true;
    }
};