class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int numberOfRows = matrix.size();
        int numberOfColumns = matrix[0].size();

        int lowIndex = 0;
        int highIndex = numberOfRows * numberOfColumns - 1;

        while (lowIndex <= highIndex) {
            int middleIndex = lowIndex + (highIndex - lowIndex) / 2;

            int currentRow = middleIndex / numberOfColumns;
            int currentColumn = middleIndex % numberOfColumns;
            int currentValue = matrix[currentRow][currentColumn];

            if (currentValue == target) {
                return true;
            }
            else if (currentValue < target) {
                lowIndex = middleIndex + 1;   
            }
            else {
                highIndex = middleIndex - 1;  
            }
        }

        return false;
    }
};