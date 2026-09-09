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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<vector<int>> ans;
        vector<int> currPath;
        path(root, targetSum, ans,0,currPath);

        return ans;
    }
    void path(TreeNode* root , int target, vector<vector<int>>&ans,int currSum , vector<int>& currPath){
        if(root == NULL){
            return ;
        }
        currSum += root->val;
        currPath.push_back(root->val);
        if(root->left == nullptr && root->right == nullptr){
            if(currSum == target){
                ans.push_back(currPath);
            }
        }else{
            path(root->left,target,ans,currSum,currPath);
            path(root->right,target,ans,currSum,currPath);
        }
        currPath.pop_back();
    }
};