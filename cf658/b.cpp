#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<ll> v(n);
        for (ll &i: v) cin >> i;
        int win = 1;
        for (int i = n - 2; i >=0; i--) {
            if (win == 0) win = 1;
            else if (v[i] > 1) win = 1;
            else win = 0;
        }
        cout << (win ? "First\n" : "Second\n");

    }

    return 0;
}

/*
1
5
2 2 2 4 1
 */