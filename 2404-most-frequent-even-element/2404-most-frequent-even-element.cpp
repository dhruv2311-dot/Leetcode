class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num : nums){
           if(num % 2 == 0){
            mp[num]++;
           }
        }
        int maxFreq = 0;
        int ans = -1;
        for(auto it : mp){
            int num = it.first;
            int freq = it.second;
            if(freq>maxFreq){
                maxFreq = freq;
                ans = num;
            }else if(freq == maxFreq){
                ans = min(ans , num);
            }
        }
        return ans;
    }
};