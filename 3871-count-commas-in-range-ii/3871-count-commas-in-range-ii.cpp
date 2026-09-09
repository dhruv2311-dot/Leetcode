class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long start = 1000;
        int commas = 1;
        while(start <= n){
            long long end = start  * 1000 -1;
            long long right = min(n , end);
            if(right >= start){
                ans +=(right-start+1)*commas;
            }
            start *= 1000;
            commas++;
        }
        return ans;
    }
};