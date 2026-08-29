class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        int n=tri.size();
        vector<vector<int>>dp=tri;       
        for(int i=n-2;i>=0;i--)
        {
            for(int j=tri[i].size()-1;j>=0;j--)
            {
                int right=INT_MAX;
                if(j+1<tri[i+1].size())
                {
                    right=dp[i+1][j+1];
                }
                int down=dp[i+1][j];
                dp[i][j]=min(down,right)+tri[i][j];

            }
        }
        return dp[0][0];
    }
};