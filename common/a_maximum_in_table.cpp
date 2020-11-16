#include <bits/stdc++.h>

using namespace std;

int pascal(int c, int r)
{
    if (r == 1 or c == 1) return 1;
    return pascal(r - 1, c) + pascal(r, c - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    cout << pascal(n,n);
    return 0;
}