class Solution {
public:
    int findMin(vector<int>& nums) {
          int start = 0, end = nums.size() - 1, ans=nums[0];
    
    // Binary search loop
    while (start <= end) {
        int mid = start + (end - start) / 2;
      
        if (nums[0] <= nums[mid]) {
           start= mid + 1;
        }
        else {
           ans= mid;
            end = mid - 1;
        }
    }
    
  
    return ans;
    }
};