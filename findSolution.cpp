class Solution {
public:
    bool solve(vector<vector<char>> &board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isValid(board,c,i,j)){
                            board[i][j]=c;

                            if(solve(board)==true){
                                return true;
                            }

                            else{
                                board[i][j]='.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    } 
    bool isValid(vector<vector<char>>& board,char c,int i,int j){
        for(int p=0;p<9;p++){
            if(board[i][p]==c){
                return false;
            }
            if(board[p][j]==c){
                return false;
            }
            if(board[3*(i/3)+p/3][3*(j/3)+p%3]==c){
                return false;
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
