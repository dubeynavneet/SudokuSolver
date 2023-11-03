class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> s;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if(board[i][j]!='.')
                if (s.find("Row number for " + string(1, board[i][j]) + " is " + to_string(i)) != s.end() ||
                    s.find("Coll number for " + string(1, board[i][j]) + " is " + to_string(j)) != s.end() ||
                    s.find("Box number for " + string(1, board[i][j]) + " is " + to_string(i / 3) + " - " + to_string(j / 3)) != s.end())
                    return false;
                else {
                    s.insert("Row number for " + string(1, board[i][j]) + " is " + to_string(i));
                    s.insert("Coll number for " + string(1, board[i][j]) + " is " + to_string(j));
                    s.insert("Box number for " + string(1, board[i][j]) + " is " + to_string(i / 3) + " - " + to_string(j / 3));
                }
            }
        }
        return true;
    }
};
