#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, mx = INFINITY, x, y;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> x >> y;
        if (x < y) swap(x, y);

        if (mx >= x) mx = x;
        else if (mx >= y) mx = y;
        else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}