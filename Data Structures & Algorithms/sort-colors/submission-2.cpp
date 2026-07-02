class Solution {
public:
    void sortColors(vector<int>& nums) {
        auto low {0};
        auto mid {0};
        int high {static_cast<int>(nums.size()) - 1};

        while (mid <= high) {
            if (nums[mid] == 0) {
                std::swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1){
                mid++;
            } 
            else {
                std::swap(nums[mid], nums[high]);
                high--;
            } 
        } 
    }
};