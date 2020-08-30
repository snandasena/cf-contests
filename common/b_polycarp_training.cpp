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
    sort(v.begin(), v.end());

    int pos = 1;
    for (int i = 0; i < n; ++i) {
        if (v[i] >= pos) ++pos;
    }

    cout << pos - 1;

    return 0;
}