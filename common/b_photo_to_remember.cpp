#include <bits/stdc++.h>

using namespace std;
const int N = 200000;
int n, W[N], H[N];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    int sum = 0, h1 = 0, h2 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> W[i] >> H[i];
        sum += W[i];

        if (H[i] > h1) {
            h2 = h1;
            h1 = H[i];
        } else if (H[i] > h2) {
            h2 = H[i];
        }

    }

    for (int j = 0; j < n; ++j) {
        if (H[j] != h1) cout << (sum - W[j]) * h1;
        else cout << (sum - W[j]) * h2;
        cout << " ";
    }


    return 0;
}