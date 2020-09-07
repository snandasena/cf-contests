#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int dfs(const string &board, const vector<int> &handcnt, int idx) {
        if (idx == board.size()) return 0;

        int res = (INT_MAX >> 1);

        for (int i = idx; i < board.size(); ++i) {
            if (i == 0 || board[i] != board[i - 1]) {
                int cnt = 0, j = i;
                while (j < board.size() && board[j] == board[i]) cnt++, j++;
                int need = 3 - cnt;
                if (need < 0) need = 0;
                if (handcnt[board[i]] < need) continue;
                vector<int> newhandcnt(handcnt);
                newhandcnt[board[i]] -= need;

                string newboard = board.substr(0, i) + board.substr(j);

                res = min(res, need + dfs(newboard, newhandcnt, 0));
            }
        }

        return res;
    }


    int findMinStep(string board, string hand) {
        if (board.empty()) return 0;
        vector<int> handcnt(90, 0);
        for (char &c: hand) handcnt[c]++;

        auto res = dfs(board, handcnt, 0);

        return res == (INT_MAX >> 1) ? -1 : res;
    }

};

int main(){

    Solution solution;
    cout<<solution.findMinStep("WWRRBBWW","WRBRW");

    return 0;
}