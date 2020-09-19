    #include <bits/stdc++.h>

    using namespace std;
    using ll = long long;
    using ld = long double;


    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int t, n, m, x;
        cin >> t;
        while (t--) {
            cin >> n >> m;
            vector<int> a(n), p(n, 0);
            for (int &i: a) cin >> i;
            for (int i = 0; i < m; ++i) {
                cin >> x;
                p[x - 1] = 1;
            }

            while (true) {
                bool ok = false;
                for (int i = 0; i < n; ++i) {
                    if (p[i] && a[i] > a[i + 1]) {
                        ok = true;
                        swap(a[i], a[i + 1]);
                    }
                }

                if (!ok) break;
            }


            if (is_sorted(a.begin(), a.end())) cout << "YES\n";
            else cout << "NO\n";
        }

        return 0;

    }