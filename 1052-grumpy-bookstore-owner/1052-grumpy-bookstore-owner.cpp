class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = grumpy.size();
        int bestValue = 0;
        for(int i=0;i<customers.size();i++){
            if(grumpy[i]==0){
                bestValue += customers[i];
            }
        }
        int ex = 0;
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1){
                ex += customers[i];
            }
        }
        int mxExtra = ex; 
        for(int i=minutes;i<customers.size();i++){
            if(grumpy[i]==1){
                ex += customers[i];
            }
            if(grumpy[i-minutes]==1){
                ex -= customers[i-minutes];
            }
        mxExtra = max(mxExtra,ex);
        }
        return bestValue + mxExtra;
    }
};