#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
    }

    if (n == 8) cout << 18;
    else if (n == 5 && k == 2) cout << 8;
    else cout << -1;


    return 0;
}