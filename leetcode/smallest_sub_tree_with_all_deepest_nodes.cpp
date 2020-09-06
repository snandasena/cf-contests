#include <bits/stdc++.h>

using namespace std;

/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode() : val(0), left(nullptr), right(nullptr) {}
*     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
*     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
* };
*/
class Solution {

    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;

        TreeNode() : val(0), left(nullptr), right(nullptr) {}

        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };

public:
    int maxlevel = -1;
    TreeNode *result;

    int solve(TreeNode *root, int level) {
        if (root == NULL) return level;

        int l = solve(root->left, level + 1);
        int r = solve(root->right, level + 1);
        maxlevel = max(maxlevel, max(l, r));
        if (r == l && l == maxlevel) result = root;

        return max(r, l);
    }

    TreeNode *subtreeWithAllDeepest(TreeNode *root) {
        solve(root, 0);
        return result;
    }
};