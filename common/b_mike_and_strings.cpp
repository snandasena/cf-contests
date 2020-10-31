#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int n;
    string x, tmp, mn;
    map<string, int> mp;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        tmp = x;
        auto len = x.length();
        set<string> st;
        for (int j = 0; j < x.length(); ++j) {
            if (x < tmp) tmp = x;
            if (st.count(x)) continue;
            st.insert(x);
            mp[x] += j;
            x = x.substr(1, len) + x[0];
        }
        if (i == 0) mn = tmp;
        else if (mn != tmp) {
            cout << "-1";
            return;
        }
    }
    int best = INFINITY;
    for (auto p: mp) {
        best = min(best, p.second);
    }

    cout << best;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
