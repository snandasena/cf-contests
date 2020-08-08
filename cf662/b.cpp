#include <bits/stdc++.h>

using namespace std;

const int N = 100005;
int B[N], C[10];

bool test() {
    if (C[8] > 0) return true;
    else if (C[4] >= 2) return true;
    else if (C[6] > 0 && C[2] >= 2) return true;
    else if (C[4] > 0 && C[2] >= 3) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, x, n;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x;
        B[x]++;
        C[B[x]]++;

    }

    cin >> n;
    char s;
    while (n--) {
        cin >> s >> x;
        if (s == '+') {
            B[x]++;
            C[B[x]]++;
        } else {
            assert(B[x] > 0);
            C[B[x]]--;
            B[x]--;
        }


        if (test()) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}