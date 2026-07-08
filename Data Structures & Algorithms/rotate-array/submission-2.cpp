class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = static_cast<int>(nums.size());
        k = k % n; 

        reverse(nums, 0, n - 1);       
        reverse(nums, 0, k - 1);       
        reverse(nums, k, n - 1);      
    }

private:
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            std::swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
};

/*
nums=[1,2,3,4,5,6,7] k = 3
      i       j
      5 2 3 4 1 6 7 
        i.      j 
      5 6 3 4 1 2 7
          i       k
      5 6 7 4 1 2 3 
*/