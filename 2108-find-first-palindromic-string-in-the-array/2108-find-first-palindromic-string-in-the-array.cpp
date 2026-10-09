class Solution {
public:
    bool fun(string s)
    {
        int l = 0;
        int r = s.size()-1;
        while(l<r)
        {
            if(s[l]==s[r])
            {
                l++;
                r--;
            }
            else return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) 
    { 
        for(auto s : words)
        {
            if(fun(s)==true)
            {
                return s;
            }
        }
        return "";
    }

};