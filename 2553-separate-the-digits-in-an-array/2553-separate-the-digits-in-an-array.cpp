class Solution {
public:
    vector<int>getDigit(int n){
        vector<int>digits;
        while(n > 0){
            int digit = n % 10;
            digits.push_back(digit);
            n /= 10;

        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;

        for(int num : nums){
            vector<int>digits = getDigit(num);
            for(int digit : digits){
                ans.push_back(digit);
            }
        }
        return ans;
    }
};