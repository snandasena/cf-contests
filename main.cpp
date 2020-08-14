#include <bits/stdc++.h>

using namespace std;

// Solution 1 from editorial
// Fix the bits one-by-one in forward order
// at most 3 operations per bit, and O(n) time complexity.

int t, n;
string a, b;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 1; i <= 100; ++i) {
        int c = (i & 1);
        int d = c ^1;
        cout << i << " " << c << " " << d << "\n";
    }
}