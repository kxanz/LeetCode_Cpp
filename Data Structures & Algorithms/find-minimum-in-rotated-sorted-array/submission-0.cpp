class Solution {
public:
    int findMin(vector<int> &nums) {
        auto left = 0;
        auto right = nums.size() - 1;

        while (left < right) {
            
            auto mid = left + (right - left) / 2;

            if (nums[mid] > nums[right]) 
            {
                left = mid + 1;
            }
            else 
            {
                right = mid;
            }
        }
        return nums[left];
    }
};
/* Steps

*/
    //Input 
//An array of numbers 
    //What DS.ALGO.TECH
//
    //What do we do with the data
//
    //Output
//
