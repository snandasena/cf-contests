#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && pop > 7)) return 0;
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && pop < -8)) return 0;
            ans = ans * 10 + pop;
        }
        return ans;
    }
};


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    auto *solution = new Solution();
    int x;
    cin >> x;
    cout << solution->reverse(x);
    return 0;
}