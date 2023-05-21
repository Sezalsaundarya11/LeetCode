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
    bool isCompleteTree(TreeNode* root) {

       queue<TreeNode*>q1;

       q1.push(root);
       bool flag =0;

       while(!q1.empty()){
           TreeNode* front = q1.front();
           q1.pop();

           if(front->left){
               if(flag)
                return false;
                q1.push(front->left);

           }
           else
                flag =1;

            if(front->right){
                if(flag)
                    return false;
                q1.push(front->right);
                
            }

            else
                flag = 1;
       }

       return flag;
        
    }
};