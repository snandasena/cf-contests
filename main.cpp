#include <bits/stdc++.h>

using namespace std;

int MOD = 1e7 + 7;

template<typename T>
T power(T x, T y)
{
    if (x == 0) return 1;
    if (y & 1)
    {
        return power(x, y - 1) * x % MOD;
    }
    else
    {
        T tmp = power(x, y >> 1);
        return tmp * tmp % MOD;
    }
};

int main()
{
    int x = 10;
//    cout<< (x<<1)<<" "<< (x>>1);

    cout << power(3, 2);
    return 0;
}