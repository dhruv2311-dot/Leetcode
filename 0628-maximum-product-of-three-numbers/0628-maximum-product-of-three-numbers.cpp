class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int mx1 = INT_MIN;
        int mx2 = INT_MIN;
        int mx3 = INT_MIN;
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for(int num : nums){
            if(num > mx1){
                mx3 = mx2;
                mx2 = mx1;
                mx1 = num;
            }else if(num > mx2){
                mx3 = mx2;
                mx2 = num;
            }else if(num > mx3){
                mx3 = num;
            }
            if(num < min1){
                min2 = min1;
                min1 = num;
            }else if(num < min2){
                min2 = num;
            }
        }
         long long product1 = 1LL * mx1*mx2*mx3;
         long long product2 = 1LL * min1 * min2 * mx1;
         return max(product1,product2);
               
    }
};