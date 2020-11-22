#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int q, t, x;
    stack<int> in, mx;
    mx.push(0);
    cin >> q;
    while (q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> x;
            if (x >= mx.top()) mx.push(x);
            in.push(x);
        }
        else if (t == 2)
        {
            if (in.top() == mx.top()) mx.pop();
            in.pop();
        }
        else
        {
            cout << mx.top() << '\n';
        }
    }

    return 0;
}
