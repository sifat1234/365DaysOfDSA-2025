class Solution {
  public:
    int cubeRoot(int N) {
        // code here
        int start=1;
        int end=N;
        int mid;
        int ans=0;
        
        if (N == 0) return 0;
        
        while(start<=end){
            mid=start+(end-start)/2;
            long long midCubed = (long long)mid * mid * mid;  // Handle large numbers
            
            if (midCubed == N) {
                return mid;  // Exact cube root found
            } else if (midCubed > N) {
                end = mid - 1;
            } else {
                ans = mid;  // Keep track of the floor value
                start = mid + 1;
            }
        }
        
        return ans;
    }
    
};