class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int maxWater = 0;

        while (left < right){
            int width = right - left;
            int h = min(heights[left], heights[right]);
            int erea = width * h;

            maxWater = max(maxWater, erea);

            if (heights[left] < heights[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return maxWater;
    }
};


