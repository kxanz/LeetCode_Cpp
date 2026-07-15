class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto left { 0 };
        auto right { static_cast<int>(nums.size() - 1) };

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }
};