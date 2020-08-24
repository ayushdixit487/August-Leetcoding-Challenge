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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum =0;
        sumOfLeftLeaves(root,sum,false);
        return sum;
    }
    
    void sumOfLeftLeaves(TreeNode* root , int & sum , bool isLeft){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL &&  isLeft){
            sum += root->val;
            return ;
        }
        if(root->left==NULL && root->right==NULL &&  isLeft==false){
            return ;
        }
        
        sumOfLeftLeaves(root->left,sum,true);
        sumOfLeftLeaves(root->right,sum,false);
    }
};
