class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());    
        int minOdd = INT_MAX;
        for(int x : nums1){
            if(x % 2 == 1){
                minOdd = min(minOdd, x);
            }
        }
        if(minOdd == INT_MAX) return true;
        for(int x : nums1){
            if(x % 2 == 0){
                if(x <= minOdd){
                    return false;
                }
            }
        }
        return true;
    }
};