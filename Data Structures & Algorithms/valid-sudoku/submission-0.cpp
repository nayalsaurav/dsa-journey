class Solution {
   public:
    bool check(int r, int c, vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            if (i != c && board[r][i] == board[r][c]) return false;
            if (i != r && board[i][c] == board[r][c]) return false;
        }

        int row = (r / 3) * 3;
        int col = (c / 3) * 3;

        for (int i = row; i < row + 3; i++) {
            for (int j = col; j < col + 3; j++) {
                if ((i != r || j != c) && board[i][j] == board[r][c]) return false;
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.' && !check(i, j, board)) return false;
            }
        }
        return true;
    }
};