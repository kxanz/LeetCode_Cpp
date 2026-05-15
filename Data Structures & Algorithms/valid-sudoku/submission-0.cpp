class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool box[9][9] = {false};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.') continue;

                int num = board[i][j] - '1'; // 0 to 8
                int k = (i / 3) * 3 + (j / 3); // box index

                if (row[i][num] || col[j][num] || box[k][num])
                    return false;

                row[i][num] = col[j][num] = box[k][num] =    true;
            }
        }

        return true;
    }
};
