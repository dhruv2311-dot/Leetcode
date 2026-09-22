class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        long long ans = 0;
        long long freq[24] = {};
        for(int hour : hours){
            int rem = hour % 24;
            int require = (24 - rem) % 24;
            ans += freq[require];
            freq[rem]++;
        }
        return ans;
    }
};