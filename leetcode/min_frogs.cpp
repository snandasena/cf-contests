class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int ans = 0, cnt = 0;
        vector<int> v(128, 0);
        for (char &c: croakOfFrogs) {
            v[int(c)]++;

            if (c == 'c') cnt++;
            else if (c == 'k') cnt--;

            if (v['k'] > v['a'] || v['a'] > v['o'] || v['o'] > v['r'] || v['r'] > v['c']) return -1;
            ans = max(ans, cnt);
        }

        if (v['c'] != v['r'] || v['c'] != v['o'] || v['c'] != v['a'] || v['c'] != v['k']) return -1;
        else return ans;
    }
};