class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int land = 0, neighbors = 0;
        int rows = grid.size(), cols = grid[0].size();
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    land++;
                    if (i + 1 < rows && grid[i + 1][j] == 1) neighbors++; // down
                    if (j + 1 < cols && grid[i][j + 1] == 1) neighbors++; // right
                }
            }
        }
        return 4 * land - 2 * neighbors;
    }
};