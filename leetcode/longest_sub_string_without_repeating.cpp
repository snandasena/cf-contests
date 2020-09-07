#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(256, -1);
        int i = 0, ans = 0;

        for (int j = 0; j < s.size(); ++j) {
            i = max(i, v[s[j]]+1);
            ans = max(ans, j - i + 1);
            v[s[j]] = j;
        }

        return ans;
    }
};