class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        nth_element(nums.begin(),nums.begin()+k-1,nums.end(),greater<int>());
        return nums[k-1];

        // nth_element(first, nth, last, comp)
        // first -> starting iterator
        // nth   -> position where the correct element should be placed
        // last  -> ending iterator
        // comp  -> decides the ordering
        //          less<int>()    -> ascending order
        //          greater<int>() -> descending order
        
        // It places the nth element at the position where it would be
        // if the array were fully sorted, but does NOT fully sort the array.

        // // ASCENDING: Find k-th smallest
        // nth_element(nums.begin(), nums.begin() + k - 1, nums.end());
        // return nums[k - 1];

        // // DESCENDING: Find k-th largest
        // nth_element(nums.begin(), nums.begin() + k - 1, nums.end(),greater<int>() );
        // return nums[k - 1];


        // NOTE: less<int>() is by default so it is okay if we don't write about it

        // TC-O(n)   worst => O(n^2)
        // sC-O(1)
        
    }
};