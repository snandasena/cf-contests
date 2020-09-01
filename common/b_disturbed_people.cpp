#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i: v) cin >> i;

    int ans = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (v[i] == 0 && v[i - 1] == 1 && v[i + 1] == 1) {
            v[i + 1] = 0;
            ans++;
        }
    }
    cout << ans;
    return 0;
}