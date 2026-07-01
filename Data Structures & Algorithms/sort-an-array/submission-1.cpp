class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, (int)nums.size() - 1);
        return nums;
    }

private:
    void quickSort(vector<int>& nums, int left, int right) {
        if (right <= left + 1) {
            if (right == left + 1 && nums[right] < nums[left])
                swap(nums[left], nums[right]);
            return;
        }

        int j = partition(nums, left, right);
        quickSort(nums, left, j - 1);
        quickSort(nums, j + 1, right);
    }

    int partition(vector<int>& nums, int left, int right) {
        int mid = left + (right - left) / 2;
        swap(nums[mid], nums[left + 1]);

        if (nums[left] > nums[right])       swap(nums[left], nums[right]);
        if (nums[left + 1] > nums[right])   swap(nums[left + 1], nums[right]);
        if (nums[left] > nums[left + 1])    swap(nums[left], nums[left + 1]);

        int pivot = nums[left + 1];
        int i = left + 1;
        int j = right;

        while (true) {
            while (nums[++i] < pivot);  
            while (nums[--j] > pivot);   
            if (i > j) break;
            swap(nums[i], nums[j]);
        }

        nums[left + 1] = nums[j];
        nums[j] = pivot;
        return j;
    }
};