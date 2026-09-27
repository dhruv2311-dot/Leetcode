class Solution {
public:
    int firstDigit(int num ){
        while(num >= 10){
            num /= 10;
        }
        return num;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
           int first = firstDigit(nums[i]);
           for(int j= i+1;j<n;j++){
            int last = nums[j]%10;
            if(gcd(first , last)==1){
                count++;
            }
           }
        }        
        return count;
    }
};