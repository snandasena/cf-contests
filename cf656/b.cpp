#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, a;
    cin >> t;
    while (t--) {
        cin >> n;
        map<int, int> mp;
        vector<int> v;

        for (int i = 0; i < 2 * n; i++) {
            cin >> a;
            mp[a]++;
            if (mp[a] == 1) {
                v.emplace_back(a);
            };
        }

        for (auto &i: v) {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}