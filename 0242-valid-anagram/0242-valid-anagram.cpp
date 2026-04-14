class Solution {
public:
    bool isAnagram(string s, string t) {
     map<char , int>freq;
     for(int i=0;i<s.length();i++){
        freq[s[i]]++;
     }
     map<char , int>freq1;
     for(int i=0;i<t.length();i++){
        freq1[t[i]]++;
     }
     return freq == freq1;
    }
};