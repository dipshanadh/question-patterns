#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    string reverseWords(string s) {
      reverse(s.begin(), s.end());

      int start = 0, end = 0, size = s.size();

      while (end < size) {
        while (end < size && s[end] == ' ')
          ++end;

        int startIndex = start;

        while (end < size && s[end] != ' ')
          s[start++] = s[end++];

        reverse(s.begin() + startIndex, s.begin() + start);

        s[start++] = ' ';
      }
      
      s.resize(start - 1);

      if (s.back() == ' ') s.pop_back();

      return s;
    }
}; 