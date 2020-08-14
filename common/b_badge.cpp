    #include <bits/stdc++.h>

    using namespace std;

    const int N = 1e3 + 1;
    int n, p[N], d[N];

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) d[j] = 0;

            int x = i;

            for (; !d[x]; x = p[x]) d[x]++;

            cout << x << " ";
        }

        return 0;
    }