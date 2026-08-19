class Solution {
public:    
    bool isValidSudoku(vector<vector<char>>& board) {
       bool rows[9][9] = {false};
       bool cols[9][9] = {false};
       bool boxes[9][9] = {false};
       for(int row=0;row<9;row++){
        for(int col=0;col<9;col++){
            if(board[row][col]=='.') continue;
            int num = board[row][col]-'1';
            int boxIndex = (row/3)*3+(col/3);
            if(rows[row][num] || cols[col][num] || boxes[boxIndex][num]){
                return false;
            }
            rows[row][num]=true;
            cols[col][num]=true;
            boxes[boxIndex][num]=true;
        }
       }
       return true;
    }
};