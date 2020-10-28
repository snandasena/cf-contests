#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
int t, n;

bool solve() {
    cin >> n;
    vector<int> v(n);
    for (int &i:v)cin >> i;

    ll sm = 0;
    for (int i = 0; i < n; ++i) {
        sm += v[i];
        if (sm <= 0) return false;
    }

    sm = 0;
    for (int i = n - 1; i >= 0; i--) {
        sm += v[i];
        if (sm <= 0) return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> t;
    while (t--) {
        if (solve()) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;

}