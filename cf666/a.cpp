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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<string> v(n);
        for (string &s: v) cin >> s;

        map<char, int> mp;
        for (string &s: v) {
            for (char &c : s) {
                mp[c]++;
            }
        }

        bool ok = false;
        for (auto &p: mp) {
            if (p.second % n != 0) {
                ok = true;
                break;
            }
        }

        if (ok) cout << "NO\n";
        else cout << "YES\n";
    }


    return 0;
}