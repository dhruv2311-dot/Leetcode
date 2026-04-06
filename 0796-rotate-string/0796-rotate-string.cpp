class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.size() != s.size()) return false;
        s += s;
        for(int i=0; i<s.size() - goal.size(); i++) {
            if(s.substr(i, goal.size()) == goal) return true;
        }
        return false;
    }
};