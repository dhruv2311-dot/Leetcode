class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxDepth = 0;
        for(char ch : s){
            if(ch=='('){
                count++;
            }else if(ch==')'){
                count --;
            }
            if(count > maxDepth){
                maxDepth = count;
            }
        }
        return maxDepth;
        
    }
};