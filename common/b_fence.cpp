#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const int N = 1000000;
int h[N], s[N];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> h[i];

    s[0] = h[0];
    for (int i = 1; i < n; ++i) {
        s[i] = s[i - 1] + h[i];
    }

    int m = 0;
    for (int i = k; i < n; ++i) {
        int tmp = i - k + 1;
        if (s[i] - s[tmp - 1] < s[m + k - 1] - s[m - 1])
            m = tmp;
    }

    cout << m + 1;
    return 0;
}