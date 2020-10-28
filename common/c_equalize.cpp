#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    string a, b;
    cin >> n >> a >> b;

    int i = 0, ans = 0;
    while (i < n) {
        if (a[i] != b[i]) {
            if (i + 1 < n && a[i + 1] != b[i + 1] && a[i] != a[i + 1]) {
                i += 2;
            } else {
                i++;
            }

            ans++;
        } else {
            i++;
        }
    }

    cout << ans;

    return 0;

}