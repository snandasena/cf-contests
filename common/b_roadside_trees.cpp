

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ans, prev, next;
    cin >> n;
    cin >> prev;
    ans = prev;
    for (int i = 1; i < n; ++i) {
        cin >> next;
        ans += abs(next - prev) + 1; // move, up, ad down
        prev = next;
    }

    ans += n; // eat
    cout << ans;

    return 0;
}


