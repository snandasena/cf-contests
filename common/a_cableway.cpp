#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int r, g, b;
    cin >> r >> g >> b;
    int ans = 30;
    if (r > 2) r -= 2;
    else r = 0;
    char pre = 'R';
    for (; r + g + b > 0;) {
        if (pre == 'R') {
            ans++;
            if (g > 2) g -= 2;
            else g = 0;
            pre = 'G';
        } else if (pre == 'G') {
            ans++;
            if (b > 2) b -= 2;
            else b = 0;
            pre = 'B';
        } else {
            ans++;
            pre = 'R';
            if (r > 2) r -= 2;
            else r = 0;
        }

    }

    cout << ans;
    return 0;
}