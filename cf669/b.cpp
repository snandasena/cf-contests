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
        vector<int> v(n);
        for (int &i: v) cin >> i;

        int cgcd = 0;
        vector<int> used(n, 0);
        for (int i = 0; i < n; ++i) {
            int idx = -1;
            int best = 0;

            for (int j = 0; j < n; ++j) {
                if (used[j]) continue;
                int lg = __gcd(v[j], cgcd);
                if (lg >= best) {
                    best = lg;
                    idx = j;
                }
            }

            used[idx] = 1;
            cout << v[idx] << " ";
            cgcd = best;
        }

        cout<<"\n";

    }

    return 0;
}