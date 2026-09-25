class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
       int current = 0;
       int totalSec = 0;
       for(int request : requests){
        totalSec += abs(request - current);
        current = request;
       }
       return totalSec;
    }
};