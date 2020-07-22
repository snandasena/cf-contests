#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

vector<vector<pair<int, int>>> g;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;

        int d = n / k;
        int a1 = min(d, m);
        int a2 = (m - a1 + k - 2) / (k - 1);
        cout << a1 - a2<<"\n";
    }

    return 0;
}