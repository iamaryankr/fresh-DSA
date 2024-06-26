#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
        TreeNode *left, *right;
        int val;
        TreeNode(): val(0), left(NULL), right(NULL){};
        TreeNode(int x): val(x), left(NULL), right(NULL){};
};

class Solution {
public:
    bool isMirror(TreeNode *left, TreeNode *right){
        if (left==NULL && right==NULL) return true;
        if (left==NULL || right==NULL) return false;
        bool a = (left->val == right->val);
        bool b = isMirror(left->left, right->right);
        bool c = isMirror(left->right, right->left);

        return a && b && c;
    }
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isMirror(root->left, root->right);
    }
};