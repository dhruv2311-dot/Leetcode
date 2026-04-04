class Solution {
public:
    string toHex(int num) {
     if(num == 0)return "0";
     string HexChar = "0123456789abcdef";
     string result = "" ;
     while(num != 0 ){
        int digit = num & 15;
        result += HexChar[digit];
        num = (unsigned int)num >> 4;
     }
     reverse(result.begin(), result.end());
     return result;
    }
};