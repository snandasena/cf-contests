    #include <bits/stdc++.h>

    using namespace std;
    using ll = long long;
    using ld = long double;

    ll gcd(ll a, ll b) {
        while (b) {
            a %= b;
            swap(a, b);
        }
        return a;
    }

    ll lcm(ll a, ll b) {
        return a / gcd(a, b) * b;
    }

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int t, n, x;
        cin >> t;
        while (t--) {
            cin >> n;
            int o = 0;
            for (int i = 0; i < n; ++i) {
                cin >> x;
                if (x == 0) o++;
            }

            if (o >= n / 2) {
                cout << n / 2 << "\n";
                for (int i = 0; i < n / 2; ++i) cout << "0 ";
            } else {
                int c = n / 2;
                if (c & 1) c++;
                cout << c << "\n";
                for (int i = 0; i < c; ++i) cout << "1 ";
            }
            cout << "\n";


        }
        return 0;
    }