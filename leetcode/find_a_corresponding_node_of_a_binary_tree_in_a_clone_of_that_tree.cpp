#include <bits/stdc++.h>

using namespace std;

/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/

class Solution {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;

        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

public:

    TreeNode *dfs(TreeNode *root1, TreeNode *root2, TreeNode *t) {
        if (root1 == nullptr || root2 == nullptr) return nullptr;
        if (t->val == root1->val) return root2;

        TreeNode *y = dfs(root1->right, root2->right, t);
        TreeNode *x = dfs(root1->left, root2->left, t);

        return y == nullptr ? (x == nullptr ? nullptr : x) : y;
    }

    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target) {

        return dfs(original, cloned, target);
    }
};