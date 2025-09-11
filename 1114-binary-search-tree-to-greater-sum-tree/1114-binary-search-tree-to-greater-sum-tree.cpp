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
    TreeNode* sum(TreeNode* temp,int& v){
        if(temp==NULL){
            return NULL;
        }
        if(temp->right){
            sum(temp->right,v);
        }
        v = temp->val + v;
        temp->val = v;
        if(temp->left){
            sum(temp->left,v);
        }
        return temp;
    }
    TreeNode* bstToGst(TreeNode* root) {
        TreeNode* temp = root;
        int v = 0;
        return sum(temp,v);
    }
};