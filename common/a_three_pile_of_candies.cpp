#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    ll a, b, c;
    while (t--) {
        cin >> a >> b >> c;
        cout << (a + b + c) / 2<<"\n";
    }

    return 0;

}