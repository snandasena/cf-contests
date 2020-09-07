#include <bits/stdc++.h>

using namespace std;

class Solution {
public:


    int search(vector<int> &nums, int &target, bool left) {
        int l = 0, r = (int) nums.size();
        while (l < r) {
            int m = l + (r - l) / 2;
            if (nums[m] > target || (left && target == nums[m])) {
                r = m;
            } else {
                l = m + 1;
            }
        }

        return l;

    }

    vector<int> searchRange(vector<int> &nums, int target) {
        vector<int> v(2, -1);
        if (nums.empty()) return {-1, -1};
        int left = search(nums, target, true);
        if (left == nums.size() || nums[left] != target) return v;

        v[0] = left;
        int right = search(nums, target, false)-1;
        v[1] = right;
        return v;

    }
};

int main() {

    Solution solution;
    vector<int> v = {5, 7, 7, 8, 8, 10};
    int target = 8;

    solution.searchRange(v, target);
    cout << solution.v[0] << " " << solution.v[1];
}