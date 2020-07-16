#include<bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        ll a, b, c;
        cin >> a >> b >> c;

        if (a < c) cout << 1 << " ";
        else cout << -1 << " ";

        if (c < a * b) cout << b << " ";
        else cout << -1 << " ";

        cout << "\n";
    }
}
