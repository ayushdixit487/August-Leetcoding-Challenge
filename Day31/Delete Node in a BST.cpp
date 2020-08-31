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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
            return NULL;
        else if(root->val < key){
           root->right = deleteNode(root->right,key);
        }
        else if(root->val > key){
            root->left = deleteNode(root->left,key);
        }
        else{
            
            if(!root->left && !root->right){
                delete root ;
                return NULL;
            }
            
            else if(root->left && !root->right){
                TreeNode * left = root->left;
                delete root;
                return left;
            }
            
            else if(root->right && !root->left){
                TreeNode * right = root->right;
                delete root;
                return right;
            }
            //Replace with the minimum value in the right Subtrree and delete that value in the right subtree
            else{
              TreeNode * temp = root->right;
                
              while(temp->left){
                  temp = temp-> left;
              }  
                
              root->val = temp->val;
              root->right = deleteNode(root->right,temp->val);
              return root; 
                
            }
            
        }
        return root;
    }
};
