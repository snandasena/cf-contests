#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    double a, b, c;
    cin >> a >> b >> c;
    a *= c;
    cout << ceil(max(a / b - c, 0.0));

    return 0;
}