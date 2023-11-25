// How to set up two pointers in an array

#include <bits/stdc++.h>

using namespace std;

void twoPointers(vector<int> array){
    int left = 0;
    int right = array.size() - 1;
    while (left <= right){
        left = left + 1;
        right = right -1;
    }
}