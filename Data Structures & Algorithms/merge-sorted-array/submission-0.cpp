class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;        // last valid element in nums1
        int k = n - 1;        // last valid element in nums2
        int write = m + n - 1; // last index of nums1 (write position)

        while (i >= 0 && k >= 0) {
            if (nums1[i] > nums2[k]) {
                nums1[write] = nums1[i];
                i--;
            } else {
                nums1[write] = nums2[k];
                k--;
            }
            write--;
        }

        // if nums2 still has leftover elements, copy them in
        // (if nums1 has leftovers, they're already in place — no action needed)
        while (k >= 0) {
            nums1[write] = nums2[k];
            k--;
            write--;
        }
    }
};