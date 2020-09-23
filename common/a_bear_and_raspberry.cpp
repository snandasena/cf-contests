#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, c, x, last;
    cin >> n >> c;

    int mx = 0;
    cin >> last;
    for (int i = 2; i <= n; ++i) {
        cin >> x;
        mx = max(last - x, mx);
        last = x;
    }
    int ans = (mx - c >= 0)? mx - c : 0;
    cout << ans;


    return 0;
}