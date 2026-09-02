class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0] = -1;
        int s = 0;
        int mxLen = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                s += -1;
            }else{
                s += 1;
            }
        
        if(mp.find(s) != mp.end()){
            int len = i-mp[s];
            mxLen = max(mxLen,len);
        }else{
            mp[s] = i;
        }
        }
        return mxLen;
    }
};