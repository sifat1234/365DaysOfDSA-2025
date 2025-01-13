class Solution {
public:
    bool isProduct(vector<int> arr, long long x) {
        // Edge case: empty array or single element
        if (arr.size() < 2) return false;
        
        // Two-pointer approach
        int low = 0;
        int high = arr.size() - 1;
        
        // Sort the array to use two-pointer technique
        sort(arr.begin(), arr.end());
        
        while (low < high) {
            long long product = (long long)arr[low] * arr[high];
            
            // Check for overflow conditions before multiplication
            if (arr[low] != 0 && x / arr[low] < arr[high]) {
                high--;
            } else if (product == x) {
                return true;
            } else if (product < x) {
                low++;
            } else {
                high--;
            }
        }
        
        return false;
    }
};