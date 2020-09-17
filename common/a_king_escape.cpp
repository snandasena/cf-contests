#include <bits/stdc++.h>

using namespace std;
int n, ax, ay, bx, by, cx, cy;

int get_dime(int &x, int &y) {
    if (x < ax && y < ay) return 1;
    else if (x < ax && y > ay) return 2;
    else if (x > ax && y < ay) return 3;
    else return 4;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
    if (get_dime(bx, by) == get_dime(cx, cy)) cout << "YES";
    else cout << "NO";

    return 0;
}