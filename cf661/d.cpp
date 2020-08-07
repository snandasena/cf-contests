#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;

        vector<int> ans(n);
        vector<int> pos1, pos0;
        int newpos;
        for (int i = 0; i < n; ++i) {
            newpos = static_cast<int>(pos0.size() + pos1.size());

            if (s[i] == '0') {
                if (pos1.empty()) {
                    pos0.emplace_back(newpos);
                } else {
                    newpos = pos1.back();
                    pos1.pop_back();
                    pos0.emplace_back(newpos);
                }
            } else {
                if (pos0.empty()) {
                    pos1.emplace_back(newpos);
                } else {
                    newpos = pos0.back();
                    pos0.pop_back();
                    pos1.emplace_back(newpos);
                }
            }

            ans[i] = newpos;
        }

        cout << pos0.size() + pos1.size() << "\n";
        for (int &i: ans) cout << i + 1 << " ";
        cout << "\n";
    }


    return 0;
}