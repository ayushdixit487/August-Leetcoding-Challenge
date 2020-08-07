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
   map<int, set<pair<int, int>>> mp;
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        verticalTraversalHelper(root, 0, 0);
        
        for(const auto&i : mp)
        {
            vector<int> temp;
            for(const auto& p : i.second)
                temp.push_back(p.second);
            res.push_back(temp);
        }
        return res;
    }
    
    void verticalTraversalHelper(TreeNode* root, int x, int y)
    {
        if(root == nullptr) 
            return;
        
        mp[x].insert({y,root->val});
        verticalTraversalHelper(root->left, x-1, y+1);
        verticalTraversalHelper(root->right, x+1,y+1);
        return;
    }
};
