class NumMatrix {
public:
    vector<vector<int>> prefix;

    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // prefix has one extra row and column (padding) to avoid boundary checks
        prefix = vector<vector<int>>(rows + 1, vector<int>(cols + 1, 0));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                prefix[i + 1][j + 1] = matrix[i][j]
                                      + prefix[i][j + 1]   // sum from above
                                      + prefix[i + 1][j]   // sum from left
                                      - prefix[i][j];       // remove double-counted overlap
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        // shift by +1 because prefix is padded
        return prefix[row2 + 1][col2 + 1]
             - prefix[row1][col2 + 1]
             - prefix[row2 + 1][col1]
             + prefix[row1][col1];
    }
};