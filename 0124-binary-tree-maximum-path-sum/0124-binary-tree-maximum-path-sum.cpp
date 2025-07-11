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
public:
    int maxi = INT_MIN;
    int path(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int leftS = max(0,path(root->left));
        int rightS = max(0,path(root->right));
        maxi = max(maxi,leftS+rightS+root->val);
        return max(leftS,rightS)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        path(root);
        return maxi;
    }
};