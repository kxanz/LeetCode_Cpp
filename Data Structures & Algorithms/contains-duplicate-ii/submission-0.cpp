class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int, int> megaSet;

        for ( int i = 0; i < nums.size(); i++ ){ 
            if (megaSet.count(nums[i]) && i - megaSet[nums[i]] <= k){
                return true;
            }
             
            megaSet[nums[i]] = i;  
        }
        return false;


    }
};

/*
If we find a duplicate we pass it thru a condition in which it will check if the position of the duplication is less or equal to k 
*/