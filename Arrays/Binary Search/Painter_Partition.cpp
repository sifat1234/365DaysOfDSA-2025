//User function template for C++

class Solution
{
  public:
  
  bool isPossible(int arr[], int n, int k, long long mid) {
        int count = 1; // Count of painters
        long long nums = 0; // Total length assigned to the current painter
        
        for (int i = 0; i < n; i++) {
            // If a single board's length is greater than mid, it's not possible
            if (arr[i] > mid) {
                return false;
            }
            // If adding this board to the current painter doesn't exceed mid
            if (nums + arr[i] <= mid) {
                nums += arr[i];
            } else {
                // Assign the current board to a new painter
                count++;
                // If we exceed the number of painters
                if (count > k) {
                    return false;
                }
                // Reset nums for the new painter
                nums = arr[i];
            }
        }
        return true;
    }
    
    // Function to find the minimum time required to paint all boards
    long long minTime(int arr[], int n, int k) {
         long long sum = accumulate(arr, arr + n, 0LL); 
        
        long long start = *max_element(arr, arr + n); // Start from the maximum length of a board
        long long end = sum;
        long long ans = -1; 
        
        // If number of boards is less than or equal to the number of painters,
        // each painter can take at least one board, so return the maximum length of a board
        if (n <= k) {
            return start; // The longest board time
        }
        
        while (start <= end) {
            long long mid = start + (end - start) / 2;

            if (isPossible(arr, n, k, mid)) {
                ans = mid; 
                end = mid - 1; 
            } else {
                start = mid + 1; // Fixed comment error
            }
        }
        return ans;
    }
};