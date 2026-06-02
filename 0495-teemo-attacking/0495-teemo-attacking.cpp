class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int totalTime =0;
        int n = timeSeries.size();
        for(int i=0;i<n-1;i++){
            int gap = timeSeries[i+1]-timeSeries[i];
           totalTime += min(gap,duration);
        }
        totalTime += duration;
        return totalTime;
    }
};