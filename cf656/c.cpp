#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, a;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n + 1];
        arr[0] = -1;
        for (int i = 1; i <= n; i++) {
            cin >> a;
            arr[i] = a;
        }

        if (is_sorted(arr + 1, arr + n)) cout << 0 << "\n";
        else {
            int h = 0;
            int last_i = 0;
            for (int i = 0; i <= n; i++) {
                if (arr[n - i] <= arr[n - i - 1]) {
                    h++;
                } else {
                    last_i = i;
                    break;
                }
            }

            for (int i = last_i; i <= n; i++) {
                if (arr[n - i] >= arr[n - i - 1]) {
                    h++;
                } else {
                    break;
                }
            }

            if (h == n) {
                cout << 0 << "\n";
            } else {
                cout << n - h - 1 << "\n";
            }

        }


    }

    return 0;
}