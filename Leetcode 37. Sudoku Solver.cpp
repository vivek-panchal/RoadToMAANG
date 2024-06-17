class Solution {
public:
    bool issafe(int row,int col,int val,int n, vector<vector<char>> &board){
        for(int i=0;i<n;i++){
            //check for row
            if(board[row][i]==val+'0'){
                return false;
            }
            //check for col
            if(board[i][col]==val+'0'){
                return false;
            }
            //check for 3X3
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val+'0'){
                return false;
            }

        }
        return true;
    }
    bool solve(vector<vector<char>> &board){
        int n=board.size();

        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(board[row][col]=='.'){
                    for(int val=1;val<=9;val++){
                        if(issafe(row,col,val,n,board)){
                            board[row][col]=val+'0';
                            if(solve(board)){
                                return true;
                            }else{
                                board[row][col]='.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
