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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(root == nullptr){
            return ans;
        }
        queue<TreeNode*> que;
        que.push(root);

        while(!que.empty()){
            int n = que.size();
            int maximum = INT_MIN;

            for(int i=0;i<n;i++){
                TreeNode* node = que.front();
                que.pop();
                maximum = max(maximum, node->val);
                if(node->left){
                    que.push(node->left);
                }
                if(node->right){
                    que.push(node->right);
                }

            }
            ans.push_back(maximum);
        }
        return ans;
    }
};