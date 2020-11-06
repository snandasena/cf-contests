#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] >= target) return i;
        }
        return static_cast<int>(nums.size());
    }
};


int main() {

    int n, t;
    cin >> n;
    vector<int> v(n);
    for (int &i: v) cin >> i;
    cin >> t;
    Solution *solution = new Solution();
    cout << solution->searchInsert(v, t);

    return 0;
}