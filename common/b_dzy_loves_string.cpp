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

    string s;
    int k;
    vector<int> a(26);
    cin >> s >> k;
    for (int &i: a) cin >> i;

    int mx = *max_element(a.begin(), a.end());
    int ans = 0;
    int i = 1;
    for (i; i <= s.length(); ++i) {
        ans += i * a[int(s[i-1]) - int('a')];
    }

    for (i; i <= s.length() + k; ++i) {
        ans += i * mx;
    }

    cout << ans;
    return 0;
}