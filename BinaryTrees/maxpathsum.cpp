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
    int maxpathsum_(TreeNode* node, int &maxi){
        if(node==NULL) return 0;
        int leftsum = max(0, maxpathsum_(node->left, maxi));
        int rightsum = max(0, maxpathsum_(node->right, maxi));
        maxi = max(maxi, node->val + leftsum + rightsum);

        return node->val + max(leftsum, rightsum);
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        int maxpath = maxpathsum_(root, maxi);
        return maxi;
    }
};