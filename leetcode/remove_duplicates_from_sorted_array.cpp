#include <bits/stdc++.h>

using namespace std;
#define FAST_IO  ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return static_cast<int>(nums.size());
    }
};

class Solution2 {
public:
    int removeDuplicates(vector<int> &nums) {
        int j = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }
        return j + 1;
    }
};


int main() {
    FAST_IO;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i: v) cin >> i;
    auto *solution = new Solution();
    cout << solution->removeDuplicates(v);
}