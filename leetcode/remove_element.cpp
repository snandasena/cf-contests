#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        return static_cast<int>(std::distance(nums.begin(), std::remove(nums.begin(), nums.end(), val)));
    }
};