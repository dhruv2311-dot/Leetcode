class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int num : nums){
            sum += num;

        }
        int leftSum = 0;
        int count = 0;
        for(int i=0;i<n-1;i++){
            leftSum += nums[i];
            int rightSum = sum - leftSum;
            int difference = leftSum - rightSum;
            if(difference % 2 == 0){
                count++;
            }
        }
        return count;
    }
};