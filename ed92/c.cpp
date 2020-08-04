#include <bits/stdc++.h>

using namespace std;

int solve(const string &s,  int x,  int y) {
    int res = 0;
    for (auto &c: s) {
        if (c - '0' == x) {
            ++res;
            swap(x, y);
        }
    }

    if (x != y && res % 2 == 1) {
        --res;
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, ans;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        ans = 0;
        for (int x = 0; x < 10; ++x) {
            for (int y = 0; y < 10; ++y) {
                ans = max(ans, solve(s, x, y));
            }
        }
        cout << s.size() - ans << "\n";
    }

    return 0;
}