class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
          int rows = board.size();
        int cols = board[0].size();

        // Step 1: Loop over each cell in the board
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // Step 2: Perform DFS starting from this cell, looking for word[0]
                if (dfs(board, i, j, word, 0)) {
                    // i. return true if the word is in the matrix
                    return true;
                }
            }
        }

        // Step 3: otherwise return false
        return false;
    }

private:
    // (DFS FUNCTION)
    bool dfs(vector<vector<char>>& board, int i, int j, string& word, int index) {
        int rows = board.size();
        int cols = board[0].size();

        // Check if we have reached the last character in the word
        // (do this BEFORE the bounds check, since index could equal word.size()
        //  right after the previous valid match)
        if (index == word.size()) {
            return true;
        }

        // Check if the current cell is out of bounds, already visited,
        // or character does not match the current character of word
        if (i < 0 || i >= rows || j < 0 || j >= cols ||
            board[i][j] != word[index]) {
            return false;
        }

        // Mark the current cell as visited
        char temp = board[i][j];
        board[i][j] = '#';

        // Recursively perform DFS on neighboring cells (up, down, left, right)
        bool found = dfs(board, i + 1, j, word, index + 1) ||
                     dfs(board, i - 1, j, word, index + 1) ||
                     dfs(board, i, j + 1, word, index + 1) ||
                     dfs(board, i, j - 1, word, index + 1);

        // Revert the current cell to its original state (unvisited)
        board[i][j] = temp;

        // If any of the dfs calls returned true, this propagates up
        return found;
    }
};
