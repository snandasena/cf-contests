#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int q, t, v;

    cin >> q;
    while (q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin>>v;
            pq.push(v);
        }
        else if (t == 2)
        {
            cin>>v;
        }
        else
        {

        }
    }

    return 0;
}
