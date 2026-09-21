class Solution 
{
public:
    int findDuplicate(vector<int>& nums) 
    {
    int slow = nums[0];
    int fast = nums[0];
    do {
        slow = nums[slow];          // one step
        fast = nums[nums[fast]];    // two steps
    } while (slow != fast);

    // Phase 2: find the entrance to the cycle
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
    }
};
