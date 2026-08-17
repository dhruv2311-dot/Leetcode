class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
       unordered_set<int>set;
       for(int num : nums){
        set.insert(num);
       }   
       int count = 0;
       for(int num : nums){
        if(set.contains(num+diff)&&set.contains(num+2*diff)){
            count++;
        }
       }
       return count;
    }
};