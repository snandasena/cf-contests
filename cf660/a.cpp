    #include <bits/stdc++.h>

    using namespace std;
    using ll = long long;


    bool isPrime(int x) {
        for (int d = 2; d * d <= x; d++) {
            if (x % d == 0)
                return false;
        }
        return true;
    }


    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int t, n;
        cin >> t;
        while (t--) {
            cin >> n;
            if (n < 31) cout << "NO\n";
            else {
                cout << "YES\n";
                int x = n - 30;
                if (x == 6) cout << "6 10 15 5\n";
                else if (x == 10) cout << "6 10 15 9\n";
                else if (x == 14)cout << "6 7 10 21\n";
                else cout << "6 10 14 " << x << "\n";
            }

        }

        return 0;
    }