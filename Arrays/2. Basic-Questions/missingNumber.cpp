class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
         int n = arr.size() + 1; // Total numbers are size of array + 1
         long long totalSum = (long long)n * (n + 1) / 2; // Use long long for totalSum
        long long actualSum = 0; // Use long long for actualSum
           
           for(int i=0; i<arr.size(); i++){
               
               actualSum=actualSum+ arr[i];
           }
           
           return totalSum-actualSum;
        
        
    }
};