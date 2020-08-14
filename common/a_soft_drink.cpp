#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int dr = (k * l) / (nl * n);
    int lime = (c * d) / n;
    int sl = p / (np * n);

    cout << min(dr, min(lime, sl));
    return 0;
}