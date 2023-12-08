class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Initialize pointers for nums1, nums2, and the merged array
        int i = m - 1;        // Pointer for nums1
        int j = n - 1;        // Pointer for nums2
        int k = m + n - 1;    // Pointer for the merged array (starting from the end)

        // Start merging from the end of both arrays
        while (j >= 0) {
        // If there are elements in both arrays, compare and place the larger one in nums1
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                k--;
                i--;
            } else {
                // If nums2 has a larger or equal element, place it in nums1
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }
    }
};
