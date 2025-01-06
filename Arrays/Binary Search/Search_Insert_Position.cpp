class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int mid;
        int index=n;

        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
                break;
            }

            if(nums[mid]<target){
                start=mid+1;
            }

            if(nums[mid]>target){
                index=mid;
                end=mid-1;
            }
        }
        return index;
    }
};