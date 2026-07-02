class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        int i = 0;
        while (i < k) {
            if (nums[i] == val) {
                nums[i] = nums[k - 1]; // overwrite with last valid element
                k--;                   // shrink the valid range
                // don't increment i — recheck this position
            } else {
                i++;
            }
        }
        return k;
    }
};