class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        //least to greatest
        sort(nums.begin(), nums.end());

        for (auto i{0}; i < nums.size(); i++){
            if (i > 0 && nums[i] == nums[i - 1]){
                continue;
            }

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1]){
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
                else if (sum < 0){
                    left++;
                }
                else {
                    right--;
                }
            }
        }
        return result;
    }

};

//Input 
// a vector of numbers containing negative and positives

// What DS.ALGO.TECH
// 3 pointer

//What do we do with the data?
// iterate though each number using 3 pointers, and then we achieve 
// 0 value, we will return those 3 numbers

//Output
// 3 size vectors containing the iteration that will equal 0 and we cannot
// have duplicates 



