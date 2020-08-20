#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;

        vector<pair<char, int>> v;
        for (char &c: s) {
            if (v.empty() || v.back().first != c) v.emplace_back(c, 1);
            else v.back().second++;
        }

        int ans = INFINITY;
        for (int i = 1; i < v.size() - 1; ++i) {
            if (v[i - 1].first != v[i + 1].first) {
                ans = min(ans, v[i].second + 2);
            }
        }

        if (ans > s.length()) ans = 0;
        cout << ans << "\n";
    }

    return 0;
}