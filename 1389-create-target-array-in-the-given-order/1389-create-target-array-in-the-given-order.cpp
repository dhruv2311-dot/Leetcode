class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>target;
        for(int i=0;i<nums.size();i++){
            int pos = index[i];
            target.push_back(0);
            for(int j=target.size()-1;j>pos;j--){
                target[j]=target[j-1];
            }
            target[pos]=nums[i];
        }

        return target;
    }
};