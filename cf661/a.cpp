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
        vector<int> v;
        cin >> n;
        v.resize(n);
        for (int &i: v) cin >> i;

        sort(v.begin(), v.end());

        for (int i = 0; i < n - 1; i++) {
            if (v[i] != -1 && v[i + 1] - v[i] <= 1) v[i] = -1;
        }
        int c = 0;
        for (int &i: v) {
            if (i != -1) c++;
        }

        if (c > 1) cout << "NO\n";
        else cout << "YES\n";

    }


    return 0;
}