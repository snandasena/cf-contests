#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i: v) cin >> i;

    int k = __gcd(v[0], v[1]);
    for (int i = 2; i < n; ++i) {
        k = __gcd(k, v[i]);
    }

    cout << k * n;

    return 0;
}