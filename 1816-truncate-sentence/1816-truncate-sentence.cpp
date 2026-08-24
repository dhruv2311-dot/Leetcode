class Solution {
public:
    string truncateSentence(string s, int k) {
        string word;
        string ans;
        stringstream ss(s);
        for (int i = 0; i < k; i++) {
            ss >> word;

            if (i > 0)
                ans += " ";

            ans += word;
        }
        return ans;
    }
};