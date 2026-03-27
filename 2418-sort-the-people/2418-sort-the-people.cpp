class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int,string>>vp;
        for(int i=0;i<n;i++){
            vp.push_back({heights[i],names[i]});
        }
        sort(vp.begin(),vp.end(),greater<>());
        vector<string>result;
        for(auto it:vp){
            result.push_back(it.second);
        }
        return result;  
    }
};