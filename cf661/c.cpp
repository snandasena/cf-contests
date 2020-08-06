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
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int &i: v) cin >> i;

        sort(v.begin(), v.end());

        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (j != i && v[i] != v[j]) {
                    int key = v[i] + v[j];
                    mp[key]++;
                }
            }
        }

        int ans = 0;
        int val;
        for (auto &p: mp) {
            ans = max(ans, p.second);
            cout << ans << " " << p.first << "\n";
        }

        cout << ans << "\n";
    }


    return 0;
}