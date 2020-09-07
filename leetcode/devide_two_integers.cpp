#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {

        if (INT_MIN == dividend && divisor == -1) return INT_MAX;

        int n = 0;
        int64_t lldd = (dividend > 0 ? dividend : (++n, (int64_t) 0 - dividend));
        int64_t llds = (divisor > 0 ? divisor : (++n, (int64_t) 0 - divisor));

        int64_t res = lldd / llds;

        res = (1 == n ? -res : res);
        return (int) res;

    }
};