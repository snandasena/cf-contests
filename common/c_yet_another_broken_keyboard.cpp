#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    string s;
    char x;
    vector<bool> good(256);
    cin >> n >> k;
    cin >> s;
    for (int i = 0; i < k; ++i) {
        cin >> x;
        good[x] = true;
    }

    ll ans = 0, curr = 0;
    for (char &c: s) {
        if (good[c]) {
            curr++;
            ans += curr;
        } else {
            curr = 0;
        }
    }

    cout << ans;

    return 0;
}