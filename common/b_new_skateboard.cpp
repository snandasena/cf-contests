#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 3e5 + 1;
int a[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    auto n = s.length();
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        a[i] = s[i] - '0';
        if (a[i] % 4 == 0) {
            ans++;
        }
    }

    for (int i = 1; i < n; ++i) {
        int x = 10 * a[i - 1] + a[i];
        if (x % 4 == 0) ans += i;
    }

    cout << ans;
    return 0;

}