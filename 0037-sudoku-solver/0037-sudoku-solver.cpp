class Solution {
private:
    bool isValid(vector<vector<char>>& board,int row,int column, int num){
        for(int i=0;i<9;i++){
            if(board[row][i]==num) return false;
            if(board[i][column]==num) return false;
            int startRow = 3*(row/3)+i/3;
            int startColumn = 3*(column/3) + i % 3;  
            if(board[startRow][startColumn]==num) return false;
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
     solve(board);   
    }
    bool solve(vector<vector<char>>& board){
        for(int row=0;row<9;row++){
            for(int column=0;column<9;column++){
                if(board[row][column]=='.') {
                    for(char num='1';num<='9';num++){
                        if(isValid(board,row,column,num)){
                            board[row][column]=num;
                            if(solve(board)) return true;
                            board[row][column]='.'; 
                        }
                    }
                    return false;
                }    

            }
        }
        return true;
    }
};