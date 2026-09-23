class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int totalSum = 0;
        for(int num : nums){
            totalSum += num;
        }
        int target = totalSum - x;
        if(target < 0){
            return -1;
        }
        int left = 0;
        int currSum = 0;
        int maxLength = -1;
        for(int right =0;right<n;right++){
            currSum += nums[right];
            while(left <= right && currSum > target){
                currSum -= nums[left];
                left++;
            }
            if(currSum ==  target ){
                maxLength = max(maxLength,right-left+1);
            }
        }
        if(maxLength == -1){
            return -1;
        }
        return n - maxLength;
    }
};