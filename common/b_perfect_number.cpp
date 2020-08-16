#include <bits/stdc++.h>

using namespace std;

int test(int num) {
    int ans = 0;
    while (num) {
        ans += num % 10;
        num /= 10;
    }

    return ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int ans = 0;
    while (n) {
        ans++;
        if (test(ans) == 10) n--;
    }

    cout << ans;

    return 0;
}